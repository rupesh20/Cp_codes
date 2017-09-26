import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class first
{
	int arr[];
	int nofele=0;
	public static void main (String[] args) 
	{
		first f1= new first();
		for(int i=0;i<10;i+=2)
		{
			f1.addnewele(i);
		}
		for(int i:f1.arr)
		{
			System.out.println(i);}
		System.out.println(f1.search(6));
	
 
	}
	void addnewele(int x){
		if(nofele==0){
			arr= new int[1];
			arr[0]=x;
			nofele++;
		}
		else{
			int temp[]=new int[nofele+1];
			int p=0;	
				for(int i:arr){
					temp[p]=i;
					p++;
				}
			temp[nofele]=x;
			nofele++;
			arr=temp;
		}
 
	}
	boolean search(int x){
		for(int i:arr){
			if(i==x) return true;
		}
		return false;
	}

}