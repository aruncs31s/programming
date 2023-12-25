%% Program to generate and display DFT and IDFT matrices

clc ; clear all ;close all ;

N = input("Enter The value of N");

w = zeros(N);

%% Generating The DFT matrix without using the inbuilt function
for k = 0:N-1
  for l=0:N-1
    w(k+1,l+1)= cos((2*pi*k*l))/N ) - 1i*sin((2*pi*k*l)/N);
end
end
disp('Dft Matrix of order ') ; disp(N) ; disp('is ') ; disp (w);

disp(' And DFT matrix using inbuilt function is '); 
disp(dftmtx(N));

