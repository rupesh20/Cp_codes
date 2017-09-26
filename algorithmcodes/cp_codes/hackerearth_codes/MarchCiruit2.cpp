#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
void combinationUtil(int arr[], int data[], int start, int end, 
                     int index, int r);

void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 
void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r)
{
   
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
 
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
 
int main()
{
    int n,hmax;	
	cin>>n;
	cin>>hmax;
	int heigth[n],width[n],r;
	cin>>r;		
	for(int i=0;i<n;i++){
		cin>>heigth[i];
}			
	printCombination(heigth, n, r);
}


/*int main(){
    int n,hmax,ans=0;
    cin>>n>>hmax;
    
	int heigth[n],width[n];

        for(int i=0;i<n;i++)
       		 cin>>heigth[i];
       	for(int i=0;i<n;i++)
         	cin>>width[i];
	int hcount[n];	
	int p=0;
	permute(heigth,dum,0,n-1,0,n);

	for(int i=0;i<n;i++)
	{
		int ele=heigth[i],ans=0,dele;
		hcount[p]=heigth[i];
		ans+=width[i];

			
		for(int j=0;j<n;j++)
		{
			dele=heigth[j];
			if(i!=j)
		{
			for(int k=0;k<n;k++)
			{
			 		if(heigth[j]+hcount[k]<=hmax)
					{	
					//	updateHeight();
						hcount[i]+=heigth[j];
						break;		
					}
					else
					{
					//	updateHeight();
						hcount[j]=heigth[j];
						ans+=width[j];
						break;
					}
			}
 		}
	}	

}		
for(int i=0;i<n;i++){

	cout<<dum[i]<<endl;
}			
    cout<<ans<<endl;
  return 0;
}
*/
