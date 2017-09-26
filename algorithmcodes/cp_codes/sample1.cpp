#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int k, int a){
    int m,last=k-1,start=0;
    while(start<=last){
        m=(start+last)/2;
        int temp;
        temp=arr[m];
        if(a==temp) return (m+1);
        if(a>temp) start=m+1;
        if(a<temp) last=m-1;
    }
}
int main(){
	int arr[26];
	int i=0,c=0,val=97;
	string s;
	cin>>s;
		for(i=0;i<26;i++){
			arr[i]=val;
			val++;
		}

  i=0;
		while(s[i]!='\0'){
			int p = (int)s[i];
			c+=binary_search(arr,26 ,p);
			i++;
		}
cout<<c;
return 0;
}
