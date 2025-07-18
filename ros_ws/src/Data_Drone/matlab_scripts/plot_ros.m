clear; close all; clc;

%% Load the .mat file
simid = 2;
type = 'cft';
file_name = sprintf('mats/sim_%d_%s.mat', simid, type);
data = load(file_name);

%% Get number of drones from field names
drone_fields = fieldnames(data);
drone_fields = drone_fields(startsWith(drone_fields, 'drone_'));
num_drones = length(drone_fields);

drones = cell(1, length(drone_fields));
for i = 1:length(drone_fields)
    drones{i} = data.(drone_fields{i});
end

plot_drone_data(drones);


function plot_drone_data(drones)
    % Plot Position
    plot_vector_data(drones, 'state', 'ref', 1:3, 'Position', {'x', 'y', 'z'}, ' (m)');

    % Plot Velocity
    plot_vector_data(drones, 'state', 'ref', 4:6, 'Velocity', {'vx', 'vy', 'vz'}, ' (m/s)');

    % Plot Control Inputs
    plot_controls(drones, {'Thrust', 'Roll', 'Pitch'}, {' (N)', '(rad)', '(rad)'});
end

function plot_vector_data(drones, state_field, ref_field, dims, title_prefix, labels, unit)
    fig = figure('Position', [500, 200, 620, 470]);
    for i = 1:length(dims)
        subplot(3, 1, i); hold on; grid on
        for d = 1:length(drones)
            db = drones{d};
            plot(db.t, db.(state_field)(:, dims(i)), 'HandleVisibility', 'off');
            plot(db.t, db.(ref_field)(:, dims(i)), '--', 'HandleVisibility', 'off');
        end
        plot(nan, nan, 'k', 'DisplayName', 'sim');
        plot(nan, nan, 'k--', 'DisplayName', 'ref');
        xlabel('Time (s)');
        ylabel(sprintf('%s%s', labels{i}, unit));
        title(sprintf('%s %s', title_prefix, upper(labels{i})));
        legend('Location', 'northwest');
        xlim([drones{1}.t(1), drones{1}.t(end)]);
    end
    sgtitle(['Drone ' title_prefix 's']);
end

function plot_controls(drones, labels, units)
    fig = figure('Position', [500, 200, 620, 470]);
    for i = 1:3
        subplot(3, 1, i); hold on; grid on
        for d = 1:length(drones)
            db = drones{d};
            plot(db.t, db.controls(:, i), 'HandleVisibility', 'off');
        end
        plot(nan, nan, 'k', 'DisplayName', labels{i});
        xlabel('Time (s)');
        ylabel(sprintf('%s %s', labels{i}, units{i}));
        title(sprintf('%s', labels{i}));
        legend('Location', 'northeast');
        xlim([drones{1}.t(1), drones{1}.t(end)]);
    end
    sgtitle('Drone Controls');
end
