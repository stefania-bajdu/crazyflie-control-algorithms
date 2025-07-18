function fig = plot_positions(db)
    loc = "northeast";
    vel_loc = "southeast";
    % northwest
    fig = figure('Position', [500, 200, 620, 470]);
    subplot(3, 2, 1); hold on; grid on
    plot(db.t, db.state(:, 1))
    plot(db.t, db.ref(:, 1), '--')
    legend('sim', 'ref', 'Location', loc)
    xlabel('Time (s)')
    ylabel('x (m)')
    xlim([0 db.t(end)])
    title("Position X")

    subplot(3, 2, 3); hold on; grid on
    plot(db.t, db.state(:, 2))
    plot(db.t, db.ref(:, 2), '--')
    % legend('sim', 'ref', 'Location', 'best')
    legend('sim', 'ref', 'Location', loc)
    xlabel('Time (s)')
    ylabel('y (m)')
    xlim([0 db.t(end)])
    title("Position Y")

    subplot(3, 2, 5); hold on; grid on
    plot(db.t, db.state(:, 3))
    plot(db.t, db.ref(:, 3), '--')
    % legend('sim', 'ref', 'Location', 'best')
    legend('sim', 'ref', 'Location', vel_loc)
    xlabel('Time (s)')
    ylabel('z (m)')
    xlim([0 db.t(end)])
    ylim([0 max(db.ref(:, 3))+0.1])
    title("Position Z")
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    subplot(3, 2, 2); hold on; grid on
    plot(db.t, db.state(:, 4))
    plot(db.t, db.ref(:, 4), '--')
    legend('sim', 'ref', 'Location', vel_loc)
    xlabel('Time (s)')
    ylabel('vx (m/s)')
    xlim([0 db.t(end)])
    ylims = ylim;
    ymin = min([db.state(:, 4); db.ref(:, 4)]);
    ylim([ymin - 1 * abs(ymin), ylims(2)]);
    title("Velocity X")

    subplot(3, 2, 4); hold on; grid on
    plot(db.t, db.state(:, 5))
    plot(db.t, db.ref(:, 5), '--')
    legend('sim', 'ref', 'Location', vel_loc)
    xlabel('Time (s)')
    ylabel('vy (m/s)')
    xlim([0 db.t(end)])
    ylims = ylim;
    ymin = min([db.state(:, 4); db.ref(:, 4)]);
    ylim([ymin - 1 * abs(ymin), ylims(2)]);
    title("Velocity Y")

    subplot(3, 2, 6); hold on; grid on
    plot(db.t, db.state(:, 6))
    plot(db.t, db.ref(:, 6), '--')
    legend('sim', 'ref', 'Location', loc)
    xlabel('Time (s)')
    ylabel('vz (m/s)')
    xlim([0 db.t(end)])
    ylims = ylim;
    ymin = min([db.state(:, 4); db.ref(:, 4)]);
    ylim([ymin - 1 * abs(ymin), ylims(2)]);
    title("Velocity Z")

    sgtitle(sprintf('%s State Tracking', db.name));
end