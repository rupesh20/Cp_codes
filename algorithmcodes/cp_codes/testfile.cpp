#include<iostream>
using namespace std;

int main(){
    int n,t,i;
    cin>>n;
    t=2;
    for(i=1;i<=n;++i){
      cout<<t<<" ";
      t*=2;
    }
    return 0;
}
