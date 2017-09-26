#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	string s1,s2;
		while(n--){
			cin>>s1>>s2;
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
int c=0;
i=0;j=0;
				while(s1[i]!='\0'&&s2[j]!='\0')
				{
					int p=(int)s1[i];
					int d=(int)s2[j];
					if(p==d){c=1;break;}

					if(p<d){i++;}

					if(p>d){j++;}
				}
				if(c==1){cout<<"Yes"<<endl;}
				else {cout<<"No"<<endl;}
		}
		return 0;
}
