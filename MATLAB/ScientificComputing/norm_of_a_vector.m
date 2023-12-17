clear all;
close all;
clc;
X = input('Enter a Vector')
normval = 0 ;
for k = 1 : length(X)
    normval = normval + X(k)^2 ;
end
normval = sqrt(normval);
disp(normval)
