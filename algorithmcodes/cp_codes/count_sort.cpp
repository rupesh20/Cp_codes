#include <bits/stdc++.h>
#define max 10
using namespace std;
/* 
	0,0,0,0,0,0,0,0,0,0
	1,1,1,1,2,0,0,0,1,0
	0,1,2,3,4,6,6,6,6,7
*/
int A[max],C[max];
void counting_sort(int A[ ],int B[ ],int k){
	int i=0;

	for(i=0;i<max;i++){
		A[i]=0;
	}
	for(i=0;i<k;i++){
		A[B[i]]+=1;
	}
	for(i=0;i<max;i++){
		A[i+1]+=A[i];
		if(A[i]==0)i++;
		if(A[i]!=A[i+1]){
			temp=A[i+1]-A[i]
			C[j]=i;
			j+=temp;
			
		}
	}
}
int main(){
int B={3,5,1,5,2,9,4};
counting_sort(A,B,7);
for(int i=0;i<max;i++){
cout<<C[i];
}
return 0;
} 