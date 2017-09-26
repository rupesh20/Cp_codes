#include<bits/stdc++.h>
 int main(){
     int t,i,c=0;
     int a,b;
        std::cin>>t;
        while(t>0){
                std::cin>>a;
                std::cin>>b;
                c=0;
             for(i=a;i<=b;i++){
             		if(i==2)c++;
             		if(i*i<=b)c++;
             		if(i*i>b)break;
             }
            std::cout<<c<<std::endl;
            t--;
        }
     return 0;
 }
