#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
//p:pattern, s: text
//status : doing
string p,t;
//ABABDBABBDASBABAB
//ABB
// 0 0 1 2
void prefix_gx(string s, int f[ ]){
	int i=1,j=0,n=s.length();
		f[0]=0;
		while(i<n){
			if(p[i]==p[j]){
				f[i]=f[i-1]+1;
				j++;
			}
			else{
				j=0;
				f[i]=f[j];
			}
		i++;
		}
}
bool kmpM(string s, string t, int f[]){
	int i=0,j=0;
	int n=t.length();
	while(i<n){
		if(t[j+i]==s[j]){
                if(j==s.length()-1)
                return true;
			j++;
			i++;
		}
		else
			j=f[j-1];
	}
	return false;
}
int main(){
	cin>>p>>t;
	int len=p.length();
	int f[len];
	prefix_gx(p,f);
	rep(i,len){
		cout<<f[i]<<" ";
	}
	if(kmpM(p,t,f))
        cout<<"1";
        	return 0;
}
