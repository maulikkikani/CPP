#include<iostream>
using namespace std;

int swap(int a[10], int b[10], int n,int i)
{
	for(i=0; i<n; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
}

int main()
{
	int n,i;
	
	cout << "\t\tEnter The Size Of n :";
	cin  >> n;
	
	int a[n];
	int b[n];
	
	cout << endl << endl;
	for(i=0; i<n; i++)
	{
		cout << "Enter The First Array :";
		cin  >> a[i];
	}
	
	cout << endl << endl;
	for(i=0; i<n; i++)
	{
		cout << "\t Enter The Second Array :";
		cin  >> b[i];
	}
	
	swap(a,b,n,i);
	
	cout << endl << "\t\t--: Display Swap :--" << endl << endl;
	for(i=0; i<n; i++)
	{
		cout << "\t\tFirst Array : " << a[i] << endl;
	}
	
	cout << endl << endl;
	
	for(i=0; i<n; i++)
	{
		cout << " seconf Array : " << b[i] << endl;
	}
}


