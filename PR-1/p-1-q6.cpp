#include<iostream>
using namespace std;

int main()
{
	int n,i;
	
	cout << "Enter The Size Of Array :";
	cin  >> n;
	
	int a[n];
	int b[n];
	
	for(i=0; i<n; i++)
	{
		cout << " \t Enter The Element :";
		cin  >> a[i];
		
		b[i] = a[i] * a[i] * a[i];
	}
	
	for(int i=0; i<n; i++)
	{  
		cout << "\t |Cube :" << b[i] << "\t\t  |" << endl;
	}
	
	
}
