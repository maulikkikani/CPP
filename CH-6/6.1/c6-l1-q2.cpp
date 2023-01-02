#include<iostream>
using namespace std;

class Cricket {
	
	public :
		
		void getTotalOversC() {
			cout << endl;
			cout << "\t\t\t =====================================" << endl << endl;
			cout << endl << "\t\t\t >>>>>>   CRICKET     >>>>>>" << endl << endl;
			cout << "\t\t\t ======================================" << endl << endl;
			
			
		}
		
	    
};

class T20Match : public Cricket {
	
	public :
		
	    void getTotalOvers(int a) {
			
			cout << endl << "\t\t\t ====================================" << endl;
			cout << endl << "\t\t\t <<<<<<   CRICKET T20 MATCH   <<<<<<" << endl << endl;
			cout << "\t\t\t ====================================" << endl << endl;
			
			cout << endl << "\t T20 Match Total Overs : " << a << endl;
		}
		
		
		
};

class TestMatch : public Cricket {
	
	public :
		
	    void getTotalOvers(int a) {
			
			cout << "\t\t\t ====================================" << endl;
			cout << endl << "\t\t\t <<<<<<   CRICKET TEST MATCH   <<<<<<" << endl << endl;
			cout << "\t\t\t ====================================" << endl << endl;
			
			cout << endl << "\t TEST Match Total Overs : " << a << endl;
		}
		
		
		
};

int main() {
	
	int a,b;
	cout << "================================" << endl;
	cout << endl;
	cout << "\tEnter The T20 Over : ";
	cin  >> a;
	cout << "\tEnter The Test Over : ";
	cin  >> b;
	cout << "================================" << endl;
	T20Match t1;
	TestMatch T1;
	
	t1.getTotalOversC();
	t1.getTotalOvers(a);
	T1.getTotalOversC();
	T1.getTotalOvers(b);
}
