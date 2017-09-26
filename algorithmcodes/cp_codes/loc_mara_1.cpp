#include <bits/stdc++.h>
 using namespace std;

 int main(){
 	string s,k;
 	cin>>s;
 	int n=s.length();
    char arr[n],jrr[n];
 	int i=0,j=0;

 		while(s[i]!='\0')
 		{
 		    int p=(int)s[i];
            cout<<1;
            if(p==32){
                arr[i]='^';
                i++;
            }
            if(p!=32&&s[i]!=')'){
                arr[i]=s[i];
                i++;
            }
            if(s[i]==')')
            {
                i--;
                while(arr[i]!='(')
                    {
                      jrr[j]=arr[i];
                        j++;
                        i--;
                    }
 					break;
            }
            i++;
 		}
        while(j--){
                cout<<jrr[j];
        	if(jrr[j]=='^'){
        		cout<<" ";
        	}

        }
 	return 0;
 }
