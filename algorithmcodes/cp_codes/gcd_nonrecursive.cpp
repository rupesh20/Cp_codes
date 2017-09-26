void main(){
	int a,b,i,max=-1;
	 	cin>>a>>b;

	 if (a>=b)
	 	 		{
	 	 				for(i=1;i<=b;i++){
	 	 					if(a%i==0&&b%i==0) max=i;
	 	 				}
	 	 				cout<<max;
	 	 		}	
	 else{
	 			for(i=1;i<=a;i++){
	 	 					if(a%i==0&&b%i==0) max=i;
	 	 				}
	 	 				cout<<max;
	 }	 		 		
}


/* funtion for finding  size of tree */
int sizeTree(struct BT* root){
	if(root==null)return 0;
		else 
			return (size(root->left)+1+size(root->right));
}
/*function for finding the height of tree */
int heightBT(struct BT* root ){
	if (root==null)return 0;
		else 
			return()
}

traversal techniques in trees
void preoreder(struct bst*root){
	if(root)
		cout<<root->data;
		preoreder(root->left);
		preoreder(rot->right);
}

void postorder(){
	if(root)
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;

}
void inorder(){
	if(root)
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
}
non recursive code for the traversals of tree
/*these codes are all pseudo to give the idea about the algorithms*/
preorder(struct bst*root){
	struct stack *s;
	s=createstack();
	while(1){
		while(root){
			cout<<root->data;
			push(s,root);
			root=root->left;

		}
		if(isempty(s))break;
		root=pop(s);
		root=root->right;}
}
inorder(struct bst *root){
	struct stack *s=creatstack();
		while(1){
			while(root){
				push(s,root);
				root=root->left;
			}
			root=pop(s);
			cout<<root->data;
			root=root->right;
		}
}
/*algo for level order traversal*/
level__order(struct bst*root){
	if(root==null)cout<<"abort the mission";
		struct queue *q=createqueue();
		struct bst*temp;
			enqueue(q,root);
				while(!isempty(q)){
					temp=dequeue(q);
						if(temp->left)enqueue(q,temp->left);
						if(temp->right)enqueue(q,temp->right);
				}

}

/*algo for finding the max element */

int max(struct bst *root){
	if(root==null)return 0;
		struct bst *temp==null;
		struct queue *q= createqueue();
		int c=INT_MIN;
			enqueue(q,root);
			while(root){
				temp=dequeue(q);
					if(c<temp->data)max=temp->data;
						if(temp->left)enqueue(q,temp->left);
						if(temp->right)enqueue(q,temp->right);
			}
			return max;
}
