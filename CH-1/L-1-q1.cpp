#include<iostream>
using namespace std;

int main()
{
	int n,i;
	
	cout << "Enter The Size Of Array :";
	cin  >> n;
	cout << endl;
	
	int arr[n];
	
   	for(i=0; i<n; i++)
	{
		cout << "Enter The Array a[%d] :-";
		cin  >> arr[i];
	}
	
	
	cout << endl << "Even Element" << endl << endl;
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			cout << "Array : " << arr[i] << endl;
		}
	}
}

