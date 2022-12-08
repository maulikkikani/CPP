#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[50];
	int n;
	
	cout << "Enter The Your Name :";
	cin  >> name;
	
	n = strlen(name);
	
	cout << endl << "String Is Numeric Or Not" << endl << endl;
	for(int i=0; i<n; i++)
	{
	    if(name[i]>='0' && name[i]<='9')
		{
			cout << "Numeric String Is Not Proper" << endl;
		}
		
	}
	
	
}
