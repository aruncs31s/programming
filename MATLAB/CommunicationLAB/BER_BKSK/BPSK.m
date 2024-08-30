N=1000
EbN0dB=-6:2:10;
data=randn(1,N)>=0;
modulated_data=2*data -1 ;
M=2;
Rm=log2(M);
Rc=1;
for k=EbN0dB
  EbN0 = 10 .^(k/10);
  noiseSigma=sqrt(1./(2*EbN0));
  noise=
