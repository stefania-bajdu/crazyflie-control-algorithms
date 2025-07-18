function fig = plot_distances(drones)
    num_drones = length(drones);
    fig = figure('Position', [500, 200, 640, 400]);
    hold on; grid on

    colors = lines(nchoosek(num_drones, 2));  
    pair_idx = 1;

    for i = 1:num_drones
        for j = i+1:num_drones
            t = drones{i}.t;
            pos_i = drones{i}.state(:, 1:3);  
            pos_j = drones{j}.state(:, 1:3);
            d = vecnorm(pos_i - pos_j, 2, 2);
            plot(t, d, 'Color', colors(pair_idx, :), 'DisplayName', sprintf('d%d-d%d', i, j));
            pair_idx = pair_idx + 1;
        end
    end
    xlim([0 drones{1}.t(end)])
    xlabel('Time (s)');
    ylabel('Distance (m)');
    title('Pairwise Inter-Agent Distances');
    legend('Location', 'best');
end
