#include <bits/stdc++.h>    
using namespace std;

bool binary_search(int arr,int n, int k){
	int mid,last=n-1,start=0;
	while(start<=last){
		int mid=(start+last)/2;
		if(k==arr[mid]) return mid;
		if(k>arr[mid]) start=mid+1;
		if(k<arr[mid]) last=mid-1;
	}
}

int main(){
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int arr[n]={12,45,46,89,78,89};//array should be sorted
	if(binary_search(arr,n,k))printf("%s\n", "GOtcha");
	else printf("%s\n", "Fuck OFF");
return 0;	
}