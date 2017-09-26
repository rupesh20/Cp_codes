#include <bits/stdc++.h>
using namespace std;

bool PatternMatch(string s1,string s2,int x){
    int i=0,j=0;
	while(s2[i]!='\0'){
		while(s1[j]!='\0'){
			if(s2[j+i]!=s1[j]){
				break;}
			++j;
		}
		if(j==x){
            ;}
        j=0;i++;
	}
	return false;
}
int main(){

	string s1,s2;
	s1="abbba";int x=s1.length();
	cin>>s2;
	if(PatternMatch(s1,s2,x))
		printf("%s\n","PatternMatch" );
	else
		printf("%s\n","No matching" );
	return 0;
}
