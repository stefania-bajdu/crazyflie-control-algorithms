function fig = plot_all_controls(drones, unit)
    if nargin < 2
        unit = 'rad';
    end

    lim = 0.1745;
    if strcmp(unit, 'deg')
        lim = rad2deg(lim);
    end

    fig = figure('Position', [500, 200, 620, 470]);

    % -------- Thrust ----------
    subplot(3, 1, 1); hold on; grid on
    for i = 1:length(drones)
        db = drones{i};
        controls = db.controls(:, 1:3);
        plot(db.t, controls(:, 1), 'DisplayName', sprintf('d%d', i));
    end
    % plot(nan, nan, 'k', 'DisplayName', 'thrust');
    xlabel('Time (s)');
    ylabel('Thrust');
    title('Thrust');
    xlim([0, db.t(end)]);
    legend('Location', 'northeast');

    % -------- Roll ----------
    subplot(3, 1, 2); hold on; grid on
    yline(lim, 'r', 'HandleVisibility', 'off');
    yline(-lim, 'r', 'HandleVisibility', 'off');

    for i = 1:length(drones)
        db = drones{i};
        controls = db.controls(:, 1:3);
        angles = db.eu_ang;

        if strcmp(unit, 'deg')
            controls(:, 2:3) = rad2deg(controls(:, 2:3));
            angles(:, 1:2) = rad2deg(angles(:, 1:2));
        end

        plot(db.t, controls(:, 2), 'HandleVisibility', 'off');     
        plot(db.t, angles(:, 1), '--', 'HandleVisibility', 'off');     
    end

    plot(nan, nan, 'k', 'DisplayName', 'desired');
    plot(nan, nan, 'k--', 'DisplayName', 'measured');

    xlabel('Time (s)');
    ylabel(sprintf('Roll (%s)', unit));
    title('Roll Angle');
    xlim([0, db.t(end)]);
    legend('Location', 'northeast');

    % -------- Pitch ----------
    subplot(3, 1, 3); hold on; grid on
    yline(lim, 'r', 'HandleVisibility', 'off');
    yline(-lim, 'r', 'HandleVisibility', 'off');

    for i = 1:length(drones)
        db = drones{i};
        controls = db.controls(:, 1:3);
        angles = db.eu_ang;

        if strcmp(unit, 'deg')
            controls(:, 2:3) = rad2deg(controls(:, 2:3));
            angles(:, 1:2) = rad2deg(angles(:, 1:2));
        end

        plot(db.t, controls(:, 3), 'HandleVisibility', 'off');     
        plot(db.t, angles(:, 2), '--', 'HandleVisibility', 'off');     
    end

    plot(nan, nan, 'k', 'DisplayName', 'desired');
    plot(nan, nan, 'k--', 'DisplayName', 'measured');

    xlabel('Time (s)');
    ylabel(sprintf('Pitch (%s)', unit));
    title('Pitch Angle');
    xlim([0, db.t(end)]);
    legend('Location', 'northeast');

    sgtitle('Drone Controls');
end
