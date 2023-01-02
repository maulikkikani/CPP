#include<iostream>
using namespace std;

class Math {
	
	public :
		
		void haRry(int a, int b) {
			cout << endl << "==================================================" << endl;
			cout << endl << endl << "\t\t**** DIVISION ****" << endl << endl;
			cout << "\tYOUR ANS OF DIVISION\t\t: " << a / b << endl; 
		}
		
		void haRry(int a, int b, int c) {
			
			cout << endl << endl << "\t\t**** SUBTRACTION ****" << endl << endl;
			cout << "\tYOUR ANS OF SUBTRACTION\t\t: " << a - b - c << endl; 
		}
		
		void haRry(int a, int b, int c, int d) {
			
			cout << endl << endl << "\t\t**** MULTIPLICATION ****" << endl << endl;
			cout << "\tYOUR ANS OF MULTIPLICATION\t: " << a * b * c * d << endl; 
		}
		
		void haRry(int a, int b, int c, int d, int e) {
			
			cout << endl << endl << "\t\t**** ADDISION ****" << endl << endl;
			cout << "\tYOUR ANS OF ADDISION\t\t: " << a + b + c + d + e << endl;
			cout << endl;
			cout << "==================================================" << endl; 
		}
		
};


int main() {
	
	
	int a,b,c,d,e;
	
	Math m1;
	cout << "==============================================" << endl;
	cout << endl;
	cout << "\tEnter The A : ";
	cin  >> a;
    cout << "\tEnter The B : ";
    cin  >> b;
    cout << "\tEnter The C : ";
    cin  >> c;
    cout << "\tEntre THe D : ";
    cin  >> d;
    cout << "\tEnter THe E : ";
    cin  >> e;
    
    
    m1.haRry(a,b);
    
    m1.haRry(a,b,c);
    
    m1.haRry(a,b,c,d);
    
    m1.haRry(a,b,c,d,e);
	
}



