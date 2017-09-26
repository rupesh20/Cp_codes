#include <bits/stdc++.h>
#define k 2
using namespcae std;

struct Kdt{
	int point[k];
	struct kdt *left,*right;
}*start=NULL

struct Kdt* NewNode(int arr[]){
	struct Kdt *temp=(struct Kdt*)malloc(sizeof(struct Kdt));
	for(int i=0;i<k;i++){
		temp->point[i]=arr[i];
	}
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

Kdt* insert_pro( Kdt* root, int point[], int d){
	if(root)
		return NewNode(point);
	Y=d%k;

	if(point[Y]<root->point[Y])
		root->left=insert_pro(root->left,point,d+1);
	else
		root->right=insert_pro(root->right,point,d+1);

	return root;
}
kdt* insert(Kdt* root, int point[]){
	return insert_pro(root,point,0)
}
bool found(Kdt* root, int arr[]){
	for(int i=0;i<k;i++){
		if(root->point[i]!=arr[i])
			return false;
	}
	return true;
}
bool search_pro(Kdt* root,int arr[],int k){
	if(root)
		return false;
	if(found(root,arr))
		return true;
	Y=d%k;
	if(arr[Y]<root->point[Y])
		return search_pro(root->left,arr,d+1);
	return search_pro(root->right,arr,d+1);
}
bool search(Kdt* root, int arr[]){
	return search_pro(root,arr,0);
}
int main(){
	int points[][k]={{2,3},{5,6},{10,7}};
	int len=sizeof(points)/sizeof(points[0]);
	for(int i=0;i<n;++i)
		x=insert(root,points[i]);
	int arr[k]={12,23}
	bool y=search(root,arr);
	return 0;
}
