///needle in the haystack. Rabin karp
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define llint long long int
#define MOD 1000000007
using namespace std;
string s,t;

llint modular_xp(int a,int b){
	llint y=a,x=1;
	while(b>=1)
	{
		if((b%2)==1)
		{
            x=(x*y)%MOD;
		}
		y=(y*y)%MOD;
		b=(b/2);
	}
	return x%MOD;
}
int main()
{	//t:test,s:given string

	cin>>s>>t;
	int q=13,l1=s.length(),l2=t.length(),x,y;
	int d=modular_xp(10,l2-1);
	llint s_str=0,t_str=0;
	int temp=d;
	rep(i,l2){
	    x=(int)s[i];
	    y=(int)t[i];
		s_str+=((x-48)*temp);
		t_str+=((y-48)*temp);
		temp/=10;
	}
int j,c=0;
	rep(i,l1-l2){
	    	x=(int)s[i]-48;y=(int)s[i+l2]-48;
		if(s_str==t_str){
			for(j=0;j<l2;j++){
				if(t[j]!=s[i+j]){
				cout<<"no";break;}
				if(j==(l2-1)){cout<<"yes"; break;}
			}
		if(c==1)break;
		}
		s_str-=d*(x);
		s_str*=10;
		s_str+=y;

	}
	return 0;
}
