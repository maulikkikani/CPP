#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[50];
	int n,i;
	
	cout << "Enter The Name :";
	cin  >> name;
	
	n = strlen(name);
	
	cout << endl << "Convert String Toggle Case" << endl;
	for(i=0; i<n; i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]+=32;
		}
	    else
		{
			name[i]-=32;
		}
	}
	
	
	cout << endl << "\t Name :" << name << endl;
	
}
