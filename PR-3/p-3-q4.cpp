#include<iostream>
using namespace std;
class detail {
	
	private :
		
		int houno,roomno;
		string houarea, roomcho;
		
	public :
		
		void setdata() {
			
			cout << endl << "-- House Details --" << endl << endl;
			cout << "Enter The House Number :";
			cin  >> houno;
			cout << "Enter The House Area :";
			cin  >> houarea;
			cout << endl << "-- Room Details --" << endl << endl;
			cout << "Enter The Room Number :";
			cin  >> roomno;
			cout << "Enter The Room Choice :";
			cin  >> roomcho;
		}
		
		void getdata() {
			
			cout << endl << endl << "\t\t\t-:House:-" << endl << endl;
			cout << "\tHouse Number\t:" << houno << endl << "\tHouse Area\t:" << houarea << endl;
			cout << endl << endl << "\t\t\t-:Room:-" << endl << endl;
			cout << "\tRoom Number\t:" << roomno << endl << "\tRoom Choice\t:" << roomcho << endl;
		}
};

int main() {
	
	detail d1;
	d1.setdata();
	d1.getdata();
}
