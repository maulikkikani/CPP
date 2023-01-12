#include<iostream>
using namespace std;

int sum(int a, int b)
{
	int c;
	
	c = a + b;
	
	return c;
}

int avg(int sum)
{
	int d;
	
	d = sum/2;
	
	cout << "\t => Average :" << d << endl;
}

int main()
{
	int a, b;
	cout << "\t=============================" << endl;
	cout << "\t\tEnter The a :";
	cin  >> a;
	cout << "\t\tEnter The b :";
	cin  >> b;
	cout << "\t=============================" << endl;
	
	avg(sum(a,b));
}
