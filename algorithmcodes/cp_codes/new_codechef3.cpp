#include <bits/stdc++.h>
#define ll long long
#define big 10000
using namespace std;
int arr[big];

void genrate_list()
{
	for(int i=0;i<=10000;i+=2){
		while(n>0){
			d=n%10;
			n/=10;
			s+=d;	
		}
		if(s%2==0){
			arr[j++]=i;
		}
	}	
}
int main(){
	int t,n;
	cin>>t;
	genrate_list();
		while(t--){
			cin>>n;
			arr[n];
		}
		return 0;
}