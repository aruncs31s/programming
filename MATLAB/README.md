## MATLAB

`clear all;` -> Used to clear the workspace

`close all;` -> used to close all the plots and graphs

`clc;` -> clear the command line

- [plot sine wave ](#plot-sine-wave)
- [plot cosine wave](#plot-cosine-wave)
- [Clip sine wave](#clip-sine-wave)
- [Solve X^3+3X^2-4X+12=0](#solve-X^3+3X^2-4X+12=0)
- [Solve X^2+2X+3=0](#solve-X^2+2X+3=0)

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

1. Using max and min

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

2. Using if else

```
clear all; close all ; clc
t = 0:0.01:10;
A=3;
F=1;
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


```

![2 5_clicp](https://user-images.githubusercontent.com/87601622/218994686-d2cad9b0-b9b3-4737-894e-9e0dc36824a8.png)

### Solve X^3+3X^2-4X+12=0

```
syms X
P = X^3 + 3*X^2 - 4*X + 12 ;
R= solve(P);
disp(R)
```

**Output :**

```
root(z^3 + 3*z^2 + 12 , z , 1)
root(z^3 + 3*z^2 + 12 , z , 2)
root(z^3 + 3*z^2 + 12 , z , 3)

```

### Solve X^2+2X+3=0

```
syms X
P = X^2 + 2*X +3  ;
disp(solve(P));
```

### if else

**Q :** _Write a MATLAB programm to solve x^3 + 3x^2 - 4x + 12 = 0 , if the given number is even , and prove that Sin(2A) = 2sin(A).cos(A) by plotting wave forms in a single figure window_

```
number = input('Enter a number') ;
if (number% 2) == 0
   t = 0:0.01:10;
   A = 2;
   figure
   plot(t,sin(t*2))
   title('Sin 2 * A')
   figure 
   plot(t,2*sin(t)*cos(t))
else 
   syms X
   P = X^3 + 3*X^2 - 4*X + 12 ;
   R= solve(P);
   disp(R)
end

```
