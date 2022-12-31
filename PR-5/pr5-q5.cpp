#include<iostream>
using namespace std;

class Number {
	
	protected :
		
		int a;
		
	public :
		
		Number() {
		
		cout << "Enter The a : ";
		cin  >> a;
		
		}
		
};

class Square : public Number {

	public :
		
		void getData() {
		
		cout << endl << endl << "-- SQUARE --" << endl << endl;
		cout << " SQUARE OF a : " << a*a << endl << endl;
		
		}
		
};

class Cube : public Number {

	public :
		
		void getData() {
		
		cout << endl << endl << "-- CUBE --" << endl << endl;
		cout << " CUBE OF a : " << a*a*a << endl;
		
		}
		
};

int main() {
	
	Square s1;
	
	s1.getData();
	
	Cube c1;
	
	c1.getData();
}
