#include <bits/stdc++.h>
using namespace std;
#define modulo 1000000007
long long _F(long long *v, long long N){
	sort(v, v+N);
	long long S=0;
	for(int i = 0;i < N; i++){
	S = ( S + ( v[i] * i ) % modulo) % modulo;
	S = ( S - ( v[i] * ( N - 1 - i )) % modulo) % modulo;
	while(S < 0) S += modulo;
}
return S;
}
int main(){
  long long N;
    scanf("%lld", &N);
long long  v1[N];
long long v2[N];
for(int i=0; i < N; i++) scanf("%lld %lld", &v1[i], &v2[i]);
		long long total = _F(v1, N) + _F(v2, N);
		total %= modulo;
		printf("%lld\n", total);
    return 0;
}
