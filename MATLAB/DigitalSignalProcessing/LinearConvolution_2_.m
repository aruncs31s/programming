
clc
clear all;
close all;
X=input("Enter The Sequence");
H=input("Enter The second Sequence");
M=length(X)+length(H) -1; % Output Length

Z = zeros(1,M);
X1=[X,zeros(1,M -length(X))]
H1=[H , zeros(1,M -length(H))]
for i=1:M
    for j=1:i
        Z(i) =Z(i)+X1(j)*H1(i-j+1);
    end
end
