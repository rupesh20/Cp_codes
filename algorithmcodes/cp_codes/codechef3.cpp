#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prod_sum_chk( int arr[] )
{
	int s=1,res=0,i=0,d;
	while(arr[i]!=0)
	{
		int n=arr[i];
		while(n>0)
		{
			d=n%10;
			n/=10;
			s*=d;
		}
		res+=s;
	}
	if(res%2==0)
		return true;
	return false;
}

ll int num_len(int p)
{
	ll int c=0;
	int d;
		while(p>0)
		{
  			d=p%10;
 		    p/=10;
			c++;
		}
return c;
}

int main()
{
	int t,len,i,k,j,d,q;
	ll n;
	string s;
    int a[10000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		i=0;
		len=num_len(n);
		q=pow(2,len)-1;

        while(n>0)
        {

            d=n%10;
            n/=10;
            a[i]=d;
            k=i;
            i++;
		  	if(i>1)
		     {
		       j=0;
		      while(j<k)
		       {

		          if(a[j]==0)
		           {
		                a[i]=a[k]*10+a[j];
		           }
		           a[i]=a[j]*10+a[k];
		           i++;
		            j++;
		       }

		      }

	if(i==q)
 {
		if(prod_sum_chk(a))
	{
		printf("%s\n","Magical Number" );
		}
		else
		{
		printf("%s\n","NOT" );
		}
	}
}

}
	return 0;
}
	