#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,len;
    scanf("%d",&t);
    string s;
    while(t--){
    	cin>>s;
    	int i=0,c=0;;
    	len=s.length();
    	if(len<26){
    		printf("%s","NO");
    	}
    	else{
            sort(s,s+len);
    		while(s[i]!='\0'){
    			if(s[i]!=s[i+1]){
    				c++;
    			}
                if(c==26)break;
    			i++;
    		}
    		if(c==26){
    		printf("%s","YES");
    		}
    		else{
                printf("%s","NO");
    		}
    	}
    }
    return 0;
}
