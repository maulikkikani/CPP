#include<iostream>
using namespace std;

class sbi{
	
	private :
		
		string Email;
		int Password;
		
	public :
	
		sbi(string Email, int Password) {
			
			this->Email = Email;
			this->Password = Password;
		}		
		
		void getData() {
			
			cout << endl << endl; 
			cout << "\t |EMAIL ID \t: " << Email << "    |" << endl
			     << "\t |--------------------------------|" << endl
				 << "\t |PASSWORD \t: " << Password << "\t  |" << endl
				 << endl << "****************************************************"<<endl;
				 	
		}
};

int main() {
	
	sbi s("mk@gmail.com", 706910);
	sbi s1("km@gmail.com",910414);
	sbi s2("ak@gmail.com",456789);
	sbi s3 = s;
	
	s.getData();
	s1.getData();
	s2.getData();
	s3.getData();
	
}
