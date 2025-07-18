N = 8;              
fs = 10;            
n_fft = 1024;        

h = ones(1, N) / N;
% h = [0, h, 0];
figure;
stem(0:N-1, h, 'filled', 'LineWidth', 1.5);
% plot(0:N-1, h, 'LineWidth', 1.5);
xlabel('Sample index n');
ylabel('Amplitude');
title(['Impulse Response of SMA Filter (N = ' num2str(N) ')']);
% xlim([-1, N])
grid on;

print(gcf, "time_domain.eps", '-depsc')

H = fft(h, n_fft);
H_mag = abs(fftshift(H));  % magnitude, centered around 0
f = linspace(-fs/2, fs/2, n_fft);  

figure;
plot(f, H_mag, 'LineWidth', 1.5);
xlabel('Frequency (Hz)');
ylabel('Magnitude');
title(['Frequency Response of SMA Filter (N = ' num2str(N) ')']);
grid on;

print(gcf, "freq_domain.eps", '-depsc')

