
#include <bits/stdc++.h>
#define II ({int a; scanf("%d", &a); a;})
#define LL ({ll a; scanf("%lld", &a); a;})
#define rep(i,n) for(int i=0;i<n;i++)
#define ulli unsigned long long int
#define lli long long int 

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define PB(x) push_back(x)

#define M 100001

using namespace std;

lli Euler(lli d){
	lli res=d;
	for (int i=2;i*i<=d;i++)
	{
		if(d%i==0){
			while(d%i==0){
				d/=i;
			}
			res*=(1.0-(1.0/(float)i));
			cout<<res;
		}
	}
	if (d > 1)
        return res-1;
	return res;
}

int main()
{
	lli t;
	scanf("%lld",&t);
	while(t--){
		lli n;
		scanf("%lld",&n);
		if(n==1)
			printf("%d\n", 1);
		else
			cout<<Euler(n)<<endl;
	}	
	return 0;
}