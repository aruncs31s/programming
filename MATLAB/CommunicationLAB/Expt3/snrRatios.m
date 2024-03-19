

function[r ]= snrRatios(l)
time=0:0.005:0.05;
msgFreq=100;
dcOffset=2;
signal=sin(2*pi*msgFreq*time)+dcOffset;
sampleFreq=15*msgFreq;
sampleTime=0:1/sampleFreq:0.05;
samp_signal=dcOffset+sin(2*pi*msgFreq*sampleTime);
L=1;
smin=round(min(signal));
smax=round(max(signal));
Quant_level=linspace(smin,smax,L);
codebook=linspace(0.7,smax,L+1);
[index,quants]=quantiz(sampleSignal,qLevel,codebook);
for i=1:length(index)
    bincode_sig(i)=dec2bin(round(quants(i)),3);
end
noise=quants-samp_signal;
r=snr(index,noise);
end

