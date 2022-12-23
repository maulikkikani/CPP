#include<iostream>
using namespace std;


class Steve {
			
	public :
		
		int rollNo;
		string name;
		int standard;
		int age;
		int contactNo;
		string address;

		
		void setData() {
			
			cout << endl << endl << "\t\t\t-- INPUT STUDENT  DATA --" << endl << endl << endl;
			
			cout << "\tEnter The Student Roll No\t: ";
			cin  >> rollNo;
			cout << "\tEnter The Student Name\t\t: ";
			cin  >> name;
			cout << "\tEnter The Student Standard\t: ";
			cin  >> standard;
			cout << "\tEnter The Student Age\t\t: ";
			cin  >> age;
			cout << "\tEnter The Student Contact No\t: ";
			cin  >> contactNo;
			cout << "\tEnter The Student Address\t: ";
			cin  >> address;
		}
		 
		 
		
};

class Thor {
	
	public :
		
		
		void getData() {
			
			Steve s1;
			s1.setData();
			
			cout << endl << endl << "\t\t\t|-------------------------------|" << endl;
		
			cout << "\t\t\t| STIUDENT ROLL NO\t: "<< s1.rollNo  << "\t|"<< endl
				 << "\t\t\t| STIUDENT NAME\t\t: " << s1.name << "\t|" <<endl
				 << "\t\t\t| STIUDENT STANDARD\t: " << s1.standard << "\t|" << endl
				 << "\t\t\t| STIUDENT AGE\t\t: " << s1.age << "\t|" << endl
				 << "\t\t\t| STIUDENT CONTACT NO\t: " << s1.contactNo << "\t|" << endl
				 << "\t\t\t| STIUDENT ADDRESS\t: " << s1.address << "\t|" << endl;
		}
		
};
int main() {
	
	
	Thor t1;
	
 	t1.getData();
 	
}
