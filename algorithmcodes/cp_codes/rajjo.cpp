#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	string data;
	char ch;
	int i=0;
	ifstream first;
	ofstream second;
		first.open("first.txt");
		second.open("second.txt");
	while(getline(first,data))
	{
		i=0;
		while(data[i]!='\0')
		{
			if(i==0)
			{
				if(data[i]=='a'||'e'||'i'||'o'||'u')
					{
						while(data[i]!= ' ')
						{
							ch=data[i];
							second<<ch;
                                i++;
						}
						second<<' ';
					}
			}
			else
			{
				if(data[i]==' '&&data[i+1]=='a'||'e'||'i'||'o'||'u')
			{
				while(data[i+1]!= ' ')
						{
							second<<data[i+1];

							i++;
						}
						second<<' ';

			}
		}
		i--;
    i++;
		}

	}

	first.close();
	second.close();
	return 0;
}
