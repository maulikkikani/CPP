#include<iostream>
using namespace std;
		
class Mk {
	
	private :
		
		string Email;
		int Password;
		
	public :
		
		Mk() {
		
			cout << endl << endl << "\t\t***************************" << endl;
			cout << "\t\t\tWELCOME TO ..." << endl;
			cout << "\t\t***************************" << endl << endl;
		}
		
		Mk(Mk &m) {
			
			Email = m.Email;
			Password = 00;
		}
	
		Mk(string Email, int Password) {
			
			this->Email = Email;
			this->Password = Password;
		}		
		
		void getData() {
			
			cout << endl << endl << "\t |--------------------------------|" << endl;
			cout << "\t |EMAIL ID \t: " << Email << "   |" << endl
				 << "\t |--------------------------------|" << endl
				 << "\t |PASSWORD \t: " << Password<< "\t  |" << endl
				 << "\t |--------------------------------|" << endl << endl; 	
		}
};

int main() {
	
	Mk m;
	Mk m0("mk@gmail.com", 303030);
	Mk m1("kmz@gmail.com",769898);
	Mk m2(m0);
	
	
	m0.getData();
	m1.getData();
	m2.getData();
	
}

