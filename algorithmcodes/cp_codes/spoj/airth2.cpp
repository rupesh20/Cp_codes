#include <iostream>
#include <string>
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

int main(){
	int t,count;
	cin>>t;
	lli a,b,res;
	char c;
		while(t--){
			count=0;
			while(1){
				count++;
				if(count==1){
					scanf("%lli",&a);	
				}
				
				scanf("%c",&c);
				if (c==' ')
					continue;
				if(c=='=')
					break;
				
				scanf("%lli",&b);
				switch(c){
					case '+':
						res=a+b;
						break;
					case '*':
						res=a*b;
						break;	
					case '-':
						res=a-b;
						break;
						
					case '/':
						res=floor(a/b);
						break;		 
				}

				a=res;
				}
				cout<<res<<endl;
		}
	return 0;
}