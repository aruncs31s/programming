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
