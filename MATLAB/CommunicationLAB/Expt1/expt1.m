% clear 
% close ; clc
% 
% % ----- Input Fields ---
% N = 1000 ; % Number of input bits
% EbNOdB = -6:2:10; % Eb/N0 range in db for simulation
% 
% data = randn(1,N)>=0 ;  % Generating a uniformly distributed random ls
% bpskModulated = 2*data-1;
% 
% M=2 ; % no of Constelation Points
% Rm = log2(M); 
% Rc = 1 ; % Rc = code rate for a coded system. Since no coding is used Rc=1
% BER = zeros(1,length(EbNOdB)) ; % Place Holder for BER values for each Bb/NO
% index = 1
% for k=EbNOdB
%     EbNO = 10.^(k/10)
%     noiseSigma = sqrt(1./(2*Rm*Rc*EbNO))
%     noise = noiseSigma * randn(2,length(bpskModulated)) % length... = N
%     recieved  = bpskModulated + noise ;
%     
%     % Threshold Detector
%     estimatedBits=(received>=0);
%     BER(index) =sum(xor(data,estimatedBits))/length(data);
%     index = index +1;
% end
% 
%    
clear;
clc;
 
N=10000000; 
EbN0dB = -6:2:10; 
%---------------------------------------------
data=randn(1,N)>=0; bpskModulated = 2*data-1; 
M=2; 
Rm=log2(M); 
Rc=1; 
BER = zeros(1,length(EbN0dB)); 
index=1;
for k=EbN0dB,
EbN0 = 10.^(k/10); 
noiseSigma = sqrt(1./(2*Rm*Rc*EbN0)); noise = noiseSigma*randn(1,length(bpskModulated));
received = bpskModulated + noise;
 
estimatedBits=(received>=0);
 
BER(index) = sum(xor(data,estimatedBits))/length(data);
index=index+1;
end
 
plotHandle=plot(EbN0dB,log10(BER),'r--');
set(plotHandle,'LineWidth',1.5);
title('SNR per bit (Eb/N0) Vs BER Curve for BPSK Modulation Scheme');
xlabel('SNR per bit (Eb/N0) in dB');
ylabel('Bit Error Rate (BER) in dB');
grid on;
hold on;
theoreticalBER = 0.5*erfc(sqrt(10.^(EbN0dB/10)));
plotHandle=plot(EbN0dB,log10(theoreticalBER),'k*');
set(plotHandle,'LineWidth',1.5);
legend('Simulated','Theoretical');
grid on;