#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long a,b,n,ans,i;
	scanf("%d",&t);
	while(t--){
		ans=0;
		i=0;
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&n);
		if (n == 1){
			ans=a*2;
		}
		else{
			if(n%2==0){
				ans=max(a,b)/min(a,b);
			}
			else{
				i=a*2;
				ans=max(i,b)/min(i,b);
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
