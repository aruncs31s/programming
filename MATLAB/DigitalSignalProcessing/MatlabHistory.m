%-- 12/6/2023 05:15 PM --%
figure
plot(1,32)
clc
clear all
close all
clc
dftmtx(4)
clc
[1 2 3 4]
[1 2 3]
[1 2 3 4]
[1 2 3]
[1 2 3 4]
[1 2 3]
[1 2 3 4]
[1 2 3]
[1 2 3 4]
[1 2 34]
clc
[1 2 3 4]
cconv([1 2 3 4],[1 2 3 4],4
cconv([1 2 3 4],[1 2 3 4],4)
[1 2 3 4]
conv([1 2 3 4],[1 2 3 4])
clc
%-- 12/6/2023 07:55 PM --%
untitled
%-- 12/6/2023 08:10 PM --%
untitled
%-- 12/9/2023 09:28 PM --%
x = 1
x = 1:44
t = 0:pi/100:2*pi
plot(t,sin(t))
figure
.0628    0.0942    0.1257    0.1571    0.1885    0.2199    0.2513    0.2827    0.3142    0.3456
figure
plot(t,sin(t))
k =(t>=0)
plot(t,k)
hold on
plot(t,k)
k =(t>=0)*0
plot(t,k)
t=
k =(t>=0)*0
k =t=0
k =(t==0)
hold on
close all
plot(t,sin(t))
hold on
k =(t==0)
plot(t,k)
k=0
plot(t,k)
figure
plot(t,k)
eigen
eig
help eig
dtft
dft([1 2 3])
fft([1 2 3])
%-- 12/12/2023 11:01 AM --%
N = input("Enter The Value Of N");
4
w= zeros(N)
4
%-- 12/17/2023 10:40 AM --%
linearConvolution
[1:4]
[1:3]
disp(M)
max([ 1
linearConvolution
[1:4]
[1:3]
linearConvolution
[1 : 5]
[1:3]
linearConvolution
[1:4]
[1:3]
Z
conv(X,H)
conv(X1,H1)
linearConvolution
[1:4]
[1:3]
Z
conv(X,H)
conv(H,X)
linearConvolution
[1:4]
[1:3]
linearConvolution
[1
linearConvolution
[1:4]
[2:4]
linearConvolution
[1:4]
[1:3]
Z
conv(H,X)
linearConvolution
[1:3]
[1:2]
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3
]
linearConvolution
[1:4]
[1:3]
circshift
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[:3]
[1:3]
linearConvolution
[1:4]
[1:3]
%-- 12/17/2023 01:43 PM --%
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3]
%-- 12/17/2023 03:36 PM --%
clc
clear all;
close all;
X = input("Enter The Sequence: ");
H = input("Enter The second Sequence: ");
M = length(X) + length(H) - 1; % Output Length
Z = zeros(1, M);
% X1 = [X, zeros(1, M - length(X))];
% H1 = [H, zeros(1, M - length(H))];
for i = 1:M
for j = max(1, i - length(X) + 1):min(i, length(H))
Z(i) = Z(i) + X(j) * H(mod(i - j, length(H)) + 1);
end
end
disp("Circular Convolution Result Using Equation:");
disp(Z);
disp("Circular Convolution Using BuiltIn Function")
disp(cconv(X,H))
%-- 12/17/2023 04:03 PM --%
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3]
linearConvolution
[1:4]
[1:3]
%-- 12/17/2023 08:26 PM --%
fp=input('Enter the pass band Freq');
rp = 1;
rs = 40;
fp = 200;
fs= 400;
wp = 2*pi*fp/fsamp
22
wp = 2*pi*fp/fsamp
wp = 2*pi*fp/fsamp2
fp = 200l
fp = 200;
fs=400;
fsamp = 2000;
rp = 1
rs = 35
wp = 2*pi*fp/fsamp
ws = 2*pi*fs/fsamp
deltap=(10^(rp/20)-1)/(10^(rp/20)+1)
deltas=1/10^(rs/20)
%-- 12/17/2023 09:12 PM --%
M =
FIR
%-- 12/17/2023 11:01 PM --%
%%% Unit Impulse Signal
i=(n==0
n = -20:20
i=(n==0)
stem(n,i)
subplot(311)
%-- 12/17/2023 11:42 PM --%
dftmatrix
4
w == dftmtx(N)
%-- 12/18/2023 12:41 AM --%
linearConvolution
q
w
dftmtx(N)
linearConvolution
w
dftmtx(N)
%-- 12/18/2023 01:03 AM --%
clc
ar all
fp = 200;
fs=400;
rp =1
rs = 40;
fsamp = 200;
wp = 2*pi*fp/fsamp;
ws = 2*pi*fs/fsamp;
[N ,Wn] = buttord(wp,ws,rp,rs)
ws
ws = 2*fs/fsamp;
wp = 2*fp/fsamp;
[N ,Wn] = buttord(wp,ws,rp,rs)
fsamp =2000
ws = 2*fs/fsamp;
wp = 2*fp/fsamp;
[N ,Wn] = buttord(wp,ws,rp,rs)
[b,a] = butter(N,Wn,'low')
figure
freqz(b,a,500,fsamp)
[b,a] = butter(N,Wn,'high')
freqz(b,a,500,fsamp)
%% Filter Demo
f1 = 500hz
f1 = 500
f2 = 200
T1=1/f1
T2=1/f2
t = 0:1/fsamp:3*T1
fasmp
fsamp
s1 = sin(2*pi*f1*t)
s2 =sin(2*pi*f2*t)
3333333333333333333333
s1 = sin(2*pi*f1*t)
s = s1+s2
figure
subplot(2,1,1)
subplot(3,1,1)
plot(t,s1)
plot(t,s2)
plot(t,s1)
plot
subplot(312)
plot(t,s2)
subplot(313)
plot(t,s)
