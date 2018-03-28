#include < bits/stdc++.h>
#define lli long long int 
using namespcae std;

lli SQRT(lli x){
	lli low,high=x,mid;
	low = 1;
	while(low<=high){
		mid = (low+high)/2;
		lli temp= mid*mid;#include < bits/stdc++.h>
#define lli long long int 
using namespcae std;

lli SQRT(lli x){
	lli low,high=x,mid;
	low = 1;
	while(low<=high){
		mid = (low+high)/2;
		lli temp= mid*mid;
		if(temp==x)
			return mid;
		else if(temp<x)
			low = mid+1;
		else
			high = mid-1;
	}
}

int main(){
	int q;
	while(q--){
		lli y,ans=0;
		cin>>y;
		for(int i=1;i<=700;i++){
			if(y-i>=1)
				ans+=SQRT(y-i);
			else
				break;	
		}
		cout<<ans<<endl;
	}
	return 0;
}
		if(temp==x)
			return mid;
		else if(temp<x)
			low = mid+1;
		else
			high = mid-1;
	}
}

int main(){
	int q;
	while(q--){
		lli y,ans=0;
		cin>>y;
		for(int i=1;i<=700;i++){
			if(y-i>=1)
				ans+=SQRT(y-i);
			else
				break;	
		}
		cout<<ans<<endl;
	}
	return 0;
}