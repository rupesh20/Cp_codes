#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long  int k,q,p=0,temp,temp1,i,a,t;
    cin>>k;
    long int arr[k];
    int h=k;
    for(int i=0;i<k;++i){
    	cin>>arr[i];
    }
    cin>>q;


    while(q--){
    cin>>t;
    	if(t==1){
    			a=arr[(k-1)%k];temp=arr[0];
    		for(int i=0;i<k;++i){

    			temp1=arr[(i+1)%k];
    			arr[(i+1)%k]=temp;
    			temp=temp1;

    		}
    	arr[0]=a;
    	}
    	if(t==2){
    			a=arr[0];temp=arr[(k-1)%k];
    		for(int j=k-1;j>=0;--j){
    			temp1=arr[(j-1)%k];
    			arr[(j-1)%k]=temp;
    			temp=temp1;
    		}
    		arr[k-1]=a;
    	}
    }
    for(int i=0;i<h;++i){
    cout<<arr[i]<<" ";
    }
    return 0;
}

