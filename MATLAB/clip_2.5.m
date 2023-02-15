clear all; close all ; clc 
t = 0:0.01:10;
A=3; Amplitude
F=1; frequency
x1=A*sin(2*pi*F*t);
% plot(t,x1)
for k=1:length(x1)
    if x1(k) >= 2.5 
        x1(k) = 2.5 ; 
    elseif x1(k) <= -2.5
        x1(k) = -2.5;
    end
end
plot(t,x1)
         
