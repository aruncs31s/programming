
time=0:0.0005:0.05;
freq_msg=100;
dc_offset=2;
signal=sin(2*pi*freq_msg*time)+dc_offset;
figure
plot(time,signal)
xlabel('time')
ylabel('amplitude')
title('signal')
freq_sample=15*freq_msg;
samp_time=0:1/freq_sample:0.05;
samp_signal=dc_offset+sin(2*pi*freq_msg*samp_time);
hold on;
plot(samp_time,samp_signal,'rx')
title('sampled signal')
legend('originalsignal,sampledsignal');
L=8;
smin=round(min(signal))
smax=round(max(signal))
Quant_level=linspace(smin,smax,L);
codebook=linspace(0,smax,L+1);
[index,quants]=quantiz(samp_signal,Quant_level,codebook);
figure;
plot(samp_time,samp_signal,'x',samp_time,quants,'.-')
title('QuantizedSignal')
legend('OriginalSignal','QuantisedSignal');
figure;
plot(samp_time,index,'.-')
title('EncodedSignal')
for i=1:length(index)
    bincode_sig{i}=dec2bin(round(index(i)),7);
end
disp('binaryencodedsignal')
disp('bincode_sig')
noise=quants-samp_signal;
figure;
plot(samp_time,noise,'.-')
title('Noise')
r=snr(index,noise);
snr1=['SNR:',num2str(r)];
disp(snr1)



l=[8,16,32,64,128];
for i=1:length(l)
    r(i)=snrRatios(l(i));
end
figure
plot(l,r)
grid on
title('L vs SNR')
xlabel('L')
ylabel('SNR')

