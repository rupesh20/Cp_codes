#include <bits/stdc++.h>
	using namespace std;
		int main(){
			int a,b,d,c,i;
				cin>>a>>b;
					int arr[a];
						for(i=0;i<a;i++){
							cin>>arr[i];
						}
						d=0;
						c=0;
							for(i=0;i<a ;i++){
								if(d==2)break;
								if(arr[i]<=b)
								{
                                        c++;
                                }
								else
                                {
									d++;
                                }

							}
							cout<<c;
			return 0;
		}
