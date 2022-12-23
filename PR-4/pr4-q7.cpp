#include<iostream>
using namespace std;

class maulik {
	
	private :
		
		string Email;
		int Password;
		
	public :
	
		maulik(string Email, int Password) {
			
			this->Email = Email;
			this->Password = Password;
		}		
		
		void putData() {
			
		    cout << endl << endl;
			cout << "\t |EMAIL ID \t: " << Email << "   |"<< endl
				 << "\t |-----------------------------------|" << endl
				 << "\t |PASSWORD \t: " << Password << "\t     |" << endl;
			 	
		}
};


int main() {
	
	maulik d("maulik@gmail.com", 323670);
	
	d.putData();
}
