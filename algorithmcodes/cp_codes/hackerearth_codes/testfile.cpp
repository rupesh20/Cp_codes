#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll int a,b,res=0;
    cin>>a>>b;
    string s;
    cin>>s;
    int i=0;
        while(s[i]!='\0'){
            if(s[i]=='1'){
                res+=a%b;
            }
            a=(a%b*a%b)%b;
            i++;
        }
        res=res%b;
      cout<<res;
     return 0;
}
