#include<iostream>
using namespace std;

inline int fact(int a)
{
	if(a<=1)
	{
		return 1;
	}
	else
	{
		return a * fact(a-1);
	}
}

int main()
{
	int n, f,i;

	cout << "Enter The Array :";
	cin  >> n;
	
	int a[n];
	
	cout << endl;
	for(i=0; i<n; i++)
	{
		cout << " \t Enter The Element :";
		cin  >> a[i];
		
		f = fact(a[i]);
		
		cout << endl;
		cout << "\t" << a[i] <<" Factorial Number " << f << endl;
		
		cout << endl << endl;
	}
	
}
