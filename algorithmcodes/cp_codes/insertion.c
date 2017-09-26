#include <bits/stdc++.h>
using namespace std;

void Insertion(int arr[],int X){
    for(int i=0;i<n;++i){
            int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                swap(arr[j],temp);
            }
        }
    }
}
int main(){
    int arr[N];
    Insertion(arr,N);
    for(int i=0;i<N;++i){
        cout<<arr[i];
    }
return 0;
}
