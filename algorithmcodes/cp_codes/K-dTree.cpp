#include <bits/stdc++.h>
using namespace std;
const int k=2;
//done
struct Kdt
{
	int point[k];
    Kdt *left,*right;
}*root=NULL;
//done
struct Kdt* NewNode(int arr[]){
	struct Kdt *temp=new Kdt;

	for(int i=0;i<k;i++)
    {
		temp->point[i]=arr[i];
	}
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

Kdt* insert_pro( Kdt *root, int point[], unsigned d){
	struct Kdt *temp=root;

	if(!root){
        root=NewNode(point);
        return root;
        }
    else{
    unsigned Y=d%k;
	if(point[Y]<(temp->point[Y])){
     //       cout<<"fails";
		  temp->left=insert_pro(temp->left,point,d+1);}
	else
        { //cout<<"fails";
            temp->right=insert_pro(temp->right,point,d+1);}
       return temp;
    }
}

Kdt* search(Kdt *root, int ele[1][K],int depth){

	Kdt *temp=root;
	int X=depth%k;
	if (!root)
		return NULL;

	if(ele[1][X]>=tem p->point[X])
}
void display(Kdt *root){
	Kdt *temp=root;
    if(!root){
        cout<<"NULL";
    }
    else{
       cout<<temp->point[0]<<" " ;
        cout<<temp->point[1]<<" ";
        display(temp->left);
        display(temp->right);
    }
}
int main(){

	int points[][k]={{2,3},{5,6},{10,7}};
	int n=sizeof(points)/sizeof(points[0]);
	for(int i=0;i<n;++i){
		root=insert_pro(root,points[i],0);
	}
	search(root,{10,7},0);
	display(root);
	return 0;
}
