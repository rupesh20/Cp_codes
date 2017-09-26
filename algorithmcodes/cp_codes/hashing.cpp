#include < bits/stdc++.h>
// hashing 
// linear probing is a method to resolve clashes, and to place the item in the next empty slot.
// quadratic probing 
/* chainning-[0]->[]->[]
			 [1]->[]
			 [2]->[]->[]->[]
			 [3]
			 [4]
	This is best method O(n/m) complexity	
	table size should be prime	 
*/
	//s="rupesh"c=ascii sum of string 
using namespace std;

int	hash_func(string s,int	n)
{
	int	i=0;
	while(s[i]!='\0')
	{
		c+=(int)s[i++];
	}
	return	c%n;
}
int rehash(char arr[],int k){
	while(int(arr[k])!=0){
		k++;
	}
	return k;
}

bool search_hash(char arr[],int	n,string key){
	int temp=hash_func(key,n);
	int	temp1=temp;
	if(arr[temp]==key){
		return true;
	}
	else{
		temp++;
		while(temp!=temp1){
			if(arr[(temp++)%n]==key)
				return true;
		}
	}
	return false;
}

int main(){
	string	s;
	int	t,n;
	cin>>t;
	n=t;
	char arr[t];
	while(t--){
		scanf("%s",&s);
		int j=hash_func(s,n);
		if(int(arr[hash_func(s,n)])==0){
			arr[rehash(arr,j)]=s;
		}
		else{
			arr[hash_func(s,n)]=s;
		}
	}
	if(search_hash(arr,key,t)){
		printf("%s\n","found the value");
	}
return	0;
}
