#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=arr[i];
		for(j=i-1;j>=0;j--){

			if(arr[j]>temp){
				swap(arr[j],arr[j+1]);

			}
		}
	}
}
void selection(int arr[],int n){
  	for(i=0;i<n;i++){
  		min=arr[i];
  			for(j=i+1;j<n;j++)
  				if(arr[j]<min)
  					min=arr[j];
  		swap(min,arr[i]);		
  	}
}
void bubble(int arr[],int n){
    int i,j;
    for(i=0;i<n;++i){
    	for(j=0;j<=i;j++){
    		if(arr[j]>arr[j+1]){
    			swap(arr[j],arr[j+1]);
    		}
    	}
    }
}
int main(){
	int n,c;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	while(1){
		cout<<"enter choice"<<endl;
		cin>>c;
	if(c==0){
		break;}
	if(c==1){
		insertion(arr,n);}
	if(c==2){
		bubble(arr,n);}
	if(c==3){
		selection(arr,n);}
	}
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
	}
	return 0;
}
