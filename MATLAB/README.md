## MATLAB


`clear all;` -> Used to clear the workspace

`close all;` -> used to close all the plots and graphs

`clc;`  -> clear the command line


### plot sine wave
```
t = -2*pi:pi/100:2*pi

plot(sint(t))
```
![](/MATLAB/sine.png)

### plot cosine wave

```
t = -2*pi:pi/100:2*pi

plot(cos(t))

```
![](/MATLAB/sine.png)

### Clip sine wave

```
close all ;
clear all;
clc; 

f = 1; % frequency 
A = 3; % amplitude
th = 2; % threshold

t = 0:.01:3;
x = A*sin(2*pi*f*t); 

y = max(min(x, th),-th);
plot(t, y)
xlabel('Time (s)')
ylabel('Amplitude')

```

![](/MATLAB/clip.png?raw=true)