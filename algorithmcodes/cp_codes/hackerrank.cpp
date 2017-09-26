#include
<bits/stdc++.h>
using namespace std;


int main() {

    string s;
    cin>>s;
    int i=0,j=0;
  sort(s.begin(),s.end());
    vector <int> v;
        while(s[i]!='\0')
        {
            int p =(int) s[i];

            int c = 0;
                while((int)s[i]==p&&s[i]!='\0'){
                   ++c;
                   ++i;
                }
                v.push_back(c);
        }
i=0;
       int p=0,c=0;
    while(!v.empty())
    {
        int l=v[i];
        if(l%2==0){c++;}

        else {
            p++;}
        v.pop_back();
        ++i;
    }
if(p==1||p==0){
    cout<<"YES";

}
else{
    cout<<"NO";
}

    return 0;
}
