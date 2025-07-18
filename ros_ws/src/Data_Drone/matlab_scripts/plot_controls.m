function fig = plot_controls(db, unit)
    if nargin < 2
        unit = 'rad';
    end
    IDX = 2;
    controls = db.controls(:, 1:3);

    if unit == 'deg'
        controls(:, 2:3) = rad2deg(controls(:, 2:3));
    end
    
    lim = 0.1745;

    fig = figure;
    subplot(3, 1, 1); hold on; grid on
    plot(db.t, controls(:, 1))
    legend('thrust')
    xlabel('Time (s)')
    ylabel('Thrust')
    xlim([0 db.t(end)])
    title("Thrust")

    subplot(3, 1, 2); hold on; grid on
    plot(db.t, controls(:, 2))
    plot(db.t, db.eu_ang(:, 1), '--')
    yline(lim, 'r', 'HandleVisibility', 'off')
    yline(-lim, 'r', 'HandleVisibility', 'off')
    legend('desired', 'measured')
    xlabel('Time (s)')
    ylabel(sprintf("Roll (%s)", unit))
    xlim([0 db.t(end)])
    title("Roll Angle")

    subplot(3, 1, 3); hold on; grid on
    plot(db.t, controls(:, 3))
    plot(db.t, db.eu_ang(:, 2) , '--')
    yline(lim, 'r', 'HandleVisibility', 'off')
    yline(-lim, 'r', 'HandleVisibility', 'off')
    legend('desired', 'measured')
    xlabel('Time (s)')
    ylabel(sprintf("Pitch (%s)", unit))
    xlim([0 db.t(end)])
    title("Pitch Angle")

    sgtitle(sprintf('%s Controls', db.name));
end