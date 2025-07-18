function fig = plot_all_positions(drones)
    fig = figure('Position', [500, 200, 620, 470]);
    axes_labels = {'x', 'y', 'z'};
    for dim = 1:3
        subplot(3, 1, dim); hold on; grid on

        for i = 1:length(drones)
            db = drones{i};
            plot(db.t, db.state(:, dim), 'HandleVisibility', 'off');
            plot(db.t, db.ref(:, dim), '--', 'HandleVisibility', 'off');
            % plot(db.t, db.state(:, dim), 'DisplayName', sprintf('d%d sim', i));
            % plot(db.t, db.ref(:, dim), '--', 'DisplayName', sprintf('d%d ref', i));
        end

        % Dummy lines for legend
        plot(nan, nan, 'k', 'DisplayName', 'sim');
        plot(nan, nan, 'k--', 'DisplayName', 'ref');

        xlabel('Time (s)');
        ylabel(sprintf('%s (m)', axes_labels{dim}));
        xlim([0, db.t(end)]);
        title(sprintf('Position %s', upper(axes_labels{dim})));
        legend('Location', 'northwest');
    end

    sgtitle(sprintf('Drone Positions'));  

    fig = figure('Position', [500, 200, 620, 470]);
    axes_labels = {'x', 'y', 'z'};
    for dim = 1:3
        subplot(3, 1, dim); hold on; grid on

        for i = 1:length(drones)
            db = drones{i};
            plot(db.t, db.state(:, dim+3), 'HandleVisibility', 'off');
            plot(db.t, db.ref(:, dim+3), '--', 'HandleVisibility', 'off');
            % plot(db.t, db.state(:, dim+3), 'DisplayName', sprintf('d%d sim', i));
            % plot(db.t, db.ref(:, dim+3), '--', 'DisplayName', sprintf('d%d ref', i));
        end

        % Dummy lines for legend
        plot(nan, nan, 'k', 'DisplayName', 'sim');
        plot(nan, nan, 'k--', 'DisplayName', 'ref');

        xlabel('Time (s)');
        ylabel(sprintf('%s (m)', axes_labels{dim}));
        xlim([0, db.t(end)]);
        title(sprintf('Velocity %s', upper(axes_labels{dim})));
        legend('Location', 'best');
    end

    sgtitle(sprintf('Drone Velocities'));
end
