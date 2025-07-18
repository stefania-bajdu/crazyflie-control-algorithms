clear; close all; clc;

simid = 702;
type = 'spline';
file_name = sprintf('mats/sim_%d_%s.mat', simid, type);
drones = load_drones(file_name);

%%
fig = figure('Position', [500, 200, 640, 400]);
hold on; grid on;

% Plot Z position for each drone
plot(drones{1}.t, drones{1}.state(:, 3), 'b-');
plot(drones{1}.t, drones{1}.ref(:, 3), 'b--');

plot(drones{2}.t, drones{2}.state(:, 3), 'r-');
plot(drones{2}.t, drones{2}.ref(:, 3), 'r--');

ylim([0, 1])
xlim([0, drones{1}.t(end)]);
xlabel('Time (s)');
ylabel('Z (m)');
title('Z-Axis Position Tracking');

legend('Drone 1 Z', 'Drone 1 Reference', 'Drone 2 Z', ...
     'Drone 2 Reference', ...
    'Location', 'southeast');

%%
plot_distances(drones);

%%
plot_all_positions(drones);
% plot_all_controls(drones, 'rad');

%%
Nb = length(drones);
errors = cell(Nb, 1);

for i = 1 : Nb
    db = drones{i};
    
    plot_states(db); 

    % fig = plot_positions(db); 
    % print(fig, "figures/seq_mpc_1_drone_traj_pos_tracking.eps", '-depsc')
    % 
    % fig = plot_velocities(db);
    % print(fig, "figures/seq_mpc_1_drone_traj_vel_tracking.eps", '-depsc')

    % fig = plot_angles(db, 'rad', 'manual'); 
    % print(fig, "figures/seq_mpc_1_drone_traj_angle_tracking.eps", '-depsc')

    % plot_angular_velocities(db, 'rad');

    % fig = plot_controls(db, 'rad');
    % print(fig, "figures/seq_mpc_1_drone_traj_controls.eps", '-depsc')

    errors{i}(:, 1:6) = db.state(:, 1:6) - db.ref(:, 1:6);
end

%% Plot ref
db = drones{1};
W = [ 0,   0.3,  0.5,  0.5,  0.3,   0,  -0.3, -0.3, 0;
      0,  -0.3,  0,    0.3,  0.5,  0.5,  0.3,  0,   0;
      0.4, 0.45, 0.5,  0.65, 0.85, 1.0,  0.7,  0.65, 0.45];

figure; hold on; grid on;
plot3(db.ref(:, 1), db.ref(:, 2), db.ref(:, 3), 'r', 'LineWidth', 1.5, 'HandleVisibility', 'off');
stem3(W(1, :), W(2, :), W(3, :), 'filled', 'LineStyle', 'none', 'Marker', 'o', 'Color', 'b', 'HandleVisibility', 'off');
plot3(W(1, 1), W(2, 1), W(3, 1), 'o', 'MarkerFaceColor', 'b', 'MarkerEdgeColor', 'b', 'LineStyle', 'none', ...
    'MarkerSize', 6, 'DisplayName', 'waypoints');
xlabel('X (m)');
ylabel('Y (m)');
zlabel('Z (m)');
title(['3D Reference Trajectory - ' db.name]);
view(3);
rotate3d on;
legend('Location', 'northeast');

%% Plot errors
pos_err = cell(Nb, 1);
vel_err = cell(Nb, 1);
ang_err = cell(Nb, 1);
for i = 1 : Nb
    plot_errors(drones{i}, errors{i}, 'pos');
    plot_errors(drones{i}, errors{i}, 'vel');
    roll_pitch_errs = plot_errors(drones{i}, errors{i}, 'ang', 'rad');

    pos_err{i} = mean(abs(errors{i}(:, 1:3)), 1);
    vel_err{i} = mean(abs(errors{i}(:, 4:6)), 1);
    ang_err{i} = mean(abs(roll_pitch_errs(:, 1:2)), 1);
end

pos_err
vel_err
ang_err
%%
i = 1;
elem = 2;
norm(errors{i}(:, elem))^2
