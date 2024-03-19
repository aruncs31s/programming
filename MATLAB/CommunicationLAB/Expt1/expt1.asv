clear 
close ; clc

% ----- Input Fields ---
N = 1000 ; % Number of input bits
EbNOdB = -6:2:10; % Eb/N0 range in db for simulation

data = randn(1,N)>=0 ;  % Generating a uniformly distributed random ls
bpskModulated = 2*data-1;

M=2 ; % no of Constelation Points
Rm = log2(M); 
Rc = 1 ; % Rc = code rate for a coded system. Since no coding is used Rc=1
BER = zeros(1,length(EbNOdB)) ; % Place Holder for BER values for each Bb/NO
index = 1
for k=EbNOdB
    EbNO = 10.^(k/10)
    noiseSigma = sqrt(1./(2*Rm*Rc*EbN0))
    noise = noiseSigma * randn(2,length(bpskModulated)) % length... = 10
    recieved  = bpskModulated + noise ;
    
    % Threshold Detector
    estimatedBits=(received>=0);
    BER(index) =sum(xor(data,estimatedBits))/length(data);
    index = index +1;
end

    