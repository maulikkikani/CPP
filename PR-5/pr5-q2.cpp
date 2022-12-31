#include<iostream>
using namespace std;

class Mother {
	
	public :
		
		void display() {
			
			cout << "MOTHER   :  Hello Dear." << endl << endl;
			cout << "MOTHER   :  You Can Come Fsat To Surat" << endl;
		}
};

class Daugther : public Mother {
	
	public :
		
		void display() {
			
			Mother :: display();
			cout << "DAUGTHER :  Yes Mom I Come To Surat" << endl << endl;
		}
};

int main() {
	
	Daugther d1;
	
	d1.display();
}
