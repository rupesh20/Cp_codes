#include <iostream>
#include <conio>
#include <alloc>
using namespace std;

struct node
{
	int info;
	struct node* next;
}node_arr[10];

struct node* extend_list(int x, struct node* p){
	struct node* ptr=node_arr[x];
	struct node* ptr1;
	if(ptr->next==NULL){
		if(ptr->info<p->info){
			ptr->next=p;
		}
		else{
			p->next=ptr;
			node_arr[x]=p;
		}
	}
	else{
		while(ptr->next!=NULL){
			if(p->info>ptr->info&&p->info<ptr1->info){
				p->next=ptr->next;
				ptr->next=p;
			}
			ptr=ptr->next;
			ptr1=ptr1->next;
		}
		ptr->ext=p;
	}
	
}

struct node* create_node(int x){
	struct  node temp1;
	int temp;
	temp=x/10;
	temp1= (struct node*)malloc(sizeof(struct node));
	temp1->info=x;
	temp1->next=NULL;
	if(node_arr[temp]!=NULL)
	{
		node_arr[temp]=temp1;
	}
	else
	{
		extend_list(temp,temp1);
	}
	//node_arr[temp]=temp1;
	//return temp1;
}


int main()
{
	int ar[10]={23,45,67,98,49,56,13,78,34,84},temp;
	for(int i=0;i<10;++i)
	{
		temp=ar[i];
		create_node(temp);
	}
	return 0;

}