#include < bits/stdc++.h>
using namespace std;
void radixsort(int x[], int n){
     int exp,p,q,y,m,j,first = 0;
	struct {
		int num;
		int next;
	}node[n];
	 int front[10],rear[10],que[20];
	 for(int i=0;i<n-1;i++)
	 {
	 	node[i].num = x[i];
	 	node[i].next = i+1;
	 }
	 	node[n-1].num = x[n-1];
	 	node[n-1].next = -1;
	for(int k = 1; k<3;k++)
		{
			for(int i = 0;i<10;i++)
			{
				front[i] = -1;
				rear[i] = -1;
			}

		while(first != -1){
			p=first;
			first = node[first].next;
			y= node[p].num;
			exp = pow(10,k-1);
			j = (y/exp)%10;
			q =  rear[j];
	 		if(q==-1) front[j]=p;
			else    node[q].next=p;
       		rear[j]=p;
		}
		int t=0;
		for(m = 0;m<10;m++)
		{
			if((front[m])!= -1)
				que[t]=front[m];
				que[t+1] = rear[m];
				t++;
		 }
		que[t]=-1;
	int nm,mn;
		for(int c= 0;que[c]!=-1;c++){
		    nm=que[c];
		    mn=que[c+1];
			node[nm].next = mn;
		}
		first= que[0];
		}
		 int s=first;
		while((node[s].next) != -1)
		{ cout<<node[s].num<<endl;
		  s=node[s].next;
		}
}
int main(){
	int w[7] = {25,57,48,37,12,38,45};
	int n=7;
	radixsort(w,n);
	return 0;
}

