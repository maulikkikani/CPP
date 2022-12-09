#include<iostream>
using namespace std;

int fact(int);

int main()
{
	int n,f;
	
	cout << "Enter The n :";
	cin  >> n;
	
    f =	fact(n);
	
	cout <<endl << n << " : Factorial : "<< f << endl;
}

int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}

