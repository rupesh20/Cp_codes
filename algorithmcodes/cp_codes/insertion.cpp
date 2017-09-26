#include <bits/stdc++.h>
using namespace std;

void Insertion(int arr[],int X){
    for(int i=1;i<X;++i){
            int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>=temp){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int N=10;
    int arr[N];
clock_t start, End;
double msecs;

start = clock();

    for(int i=0;i<N;++i){
        cin>>arr[i];
    }
    Insertion(arr,N);
    for(int i=0;i<N;++i){
        cout<<arr[i]<<endl;;
    }
End=clock();
msecs = ((double) (End - start)) * 1000 / CLOCKS_PER_SEC;
cout<<msecs<<endl;
return 0;
}
