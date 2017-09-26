#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,c=0;
	long int k;
	cin>>n>>k;
	long int arr[n];
	for(int i=0;i<n;++i){
        cin>>arr[i];
	}
	int temp=1,res;

	for(int i=0;i<n;++i){
		temp=i+1;
		int ct=0;
		for(int j=i;j<n;++j){
                ct++;
                if(ct==1){
                    if(arr[j]<k)c++;
                }else{
				res=arr[j]&temp;
				if(res<k)c++;
				temp=res;}
		}
	}
	cout<<c<<endl;
	return 0;
}
