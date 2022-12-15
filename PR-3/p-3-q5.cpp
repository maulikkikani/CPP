#include<iostream>
using namespace std;
class Person {
	
	private :
		
		int perno;
		string pername;
		
	public :
		
		void setdata() {
			
			cout << endl << "-- Person Details --" << endl << endl;
			cout << "Enter The Person Number :";
			cin  >> perno;
			cout << "Enter The Person Name :";
			cin  >> pername;
			
		}
		
		void getdata() {
			
			cout << endl << endl << "\t\t\t-----:PERSON:-----" << endl << endl;
			cout << "\tPerson Number\t:" << perno << endl
				 << "\tPerson Name\t:" << pername << endl;
		}
};

int main() {
	
	Person p1;
	p1.setdata();
	p1.getdata();
}

