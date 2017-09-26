#include <bits/stdc++.h>
		using namespace std;
			int main(){
				int n,m,i,j,k,c;
				string s;
					cin>>n;
						cin>>m;
						int arr[m];
							for(i=0;i<m;i++){
								cin>>arr[i];
							}
							i=2;
int g=n;

							while(1)
							{

                                    s=g;
									k=0;
									c=0;
									while(s[k]!='\0')
                                    {
										for(j=0;j<m;j++)
										{
											if(s[k]==arr[j]){c++ ;break;}
										}
										k++;
									}
									if((c)==(s.length()))break;
									g=n*i;
								i++;

							}
							cout<<n;
			}
