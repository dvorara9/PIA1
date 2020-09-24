clear,clc
f=1;
fs = 100;

t = 0:1/fs:10;
y = sin(2*pi*f*t);

Y = fft(y);
freq = fs*(0:(length(y)/2))/length(y);

figure(1)
plot(t,y);
hold on
plot(freq,abs(Y(1:round(end/2)))/length(y)*2);