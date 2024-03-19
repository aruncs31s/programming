clc; close all ; clear

function [ x]  = pcm(y)

    t = 0:0.0005:0.05;
    msgFreq = 100 ;% Hz
    dcOffset= 2 ;% V
    signal= sin(2*pi*msgFreq*t)+dcOffset;
    figure
    plot(t,signal);

    sampleFreq = 15 *msg_freq ;
    sampleTime = 0:1/sampleFreq:0.05;

    hold on;
    sampleSignal=dc_offset+sin(2*pi*msgFreq*sampleTime);
    plot(sampleTime,sampleSignal,'rx')

    title('sampled signal')
    legend('originalsignal,sampledsignal');

    L=8;
    smin=round(min(signal)); 
    smax=round(max(signal));
    qLevel = linspace(smin,smax,L);
    codebook=linspace(0,smax,L+1);
    figure;
    plot(samp_time,sampleSignal,'x',sampleTime,quants,'.-')
    title('QuantizedSignal')
    legend('OriginalSignal','QuantisedSignal');
    figure;
    plot(sampleTime,index,'.-')
    title('EncodedSignal')
    for i=1:length(index)
        bincode_sig{i}=dec2bin(round(index(i)),7);
    end
    disp('binaryencodedsignal')
    disp('bincode_sig')
    noise=quants-samp_signal;
    figure;
    plot(sampleTime,noise,'.-')
    title('Noise')
    r=snr(index,noise);
    snr1=['SNR:',num2str(r)];
    disp(snr1)


    l=[8,16,32,64,128];
    for i=1:length(l)
        r(i)=pcm(l(i));
    end
    figure
    plot(l,r)
    grid on
    title('L vs SNR')
    xlabel('L')
    ylabel('SNR')
end


