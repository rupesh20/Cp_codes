#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
#define ulli unsigned long long int 
using namespace std;

int modular(int a,long long int b){
	long long int res=0;
	int c=1;	
	if(b==1)
		return a%10;
	if(b==2)
		return (a*a)%10;

	while(b>1){
			
		if(b%2==0){
			b/=2;
			res=a*a;
			a=res;
		}
		else{
			b-=1;
			c=a;
		}
	}
	return (res*c)%10;
}
int main(){
	int t,ans=0;
	ulli b;
	string a;
	cin>>t;
	while(t--){
		ans=0;
		cin>>a>>b;
		if(b==0){
			cout<<"1"<<endl;
		}	
		else{
			b=b%4;
			if(b==0)
				b=4;
			ans=modular((int)a[a.length()-1]-48,b);
			cout<<ans<<endl;
		}
	}
	return 0;
}
