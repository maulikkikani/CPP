#include<iostream>
using namespace std;

class HSchool {
	
	private :
	
		int id;
		string name;
		int roll_no;
		int standard;
		int age;
		int contact;
		static string institute_name;
		string address;
		
	public :
		
		void setDataH() {
			
			cout << endl << endl << "\t\t\t--- INPUT STUDENT DATA ---" << endl;
			cout <<"******************************************************************************* " << endl << endl;
			
			cout << "\tEnter The Student Id\t\t: ";
			cin  >> id;
			cout << "\tEnter The Student Name\t\t: ";
			cin  >> name;
			cout << "\tEnter The Student Roll No\t: ";
			cin  >> roll_no;
			cout << "\tEnter The Student Standard\t: ";
			cin  >> standard;
			cout << "\tEnter The Student Age\t\t: ";
			cin  >> age;
			cout << "\tEnter The Student Contact No\t: ";
			cin  >> contact;
			cout << "\tEnter The Student Address\t: ";
			cin  >> address;
			
		}
		
		void getDataH() {
			
			cout << endl << endl << "\t\t\t---DISPLAY STUDENT DATA ---  " << endl;
			cout << "*******************************************************************************" << endl << endl;
			cout << "\t\t STUDENT ID : " << id << endl
				 << "\t\t STUDENT NAME : " << name<< endl
				 << "\t\t STUDENT ROLL NO : " << roll_no << endl
				 << "\t\t STUDENT STANDARD : " << standard << endl
				 << "\t\t STUDENT AGE : " << age << endl
				 << "\t\t STUDENT CONTACT NO : " << contact << endl
			     << "\t\t STUDENT EDUCTION INSTITUTE NAME : " << institute_name << endl
				 << "\t\t STUDENT ADDRESS : " << address << endl;
			cout << "******************************************************************************* " << endl << endl;
		}
		
};

class College {
	
	private :
	
		int id;
		string name;
		int roll_no;
		string standard;
		int age;
		int contact;
		static string institute_name;
		string address;
		
	public :
		
		void setDataC() {
			
			cout << endl << endl << "\t\t\t--- INPUT COLLEGE DATA ---" << endl;
			cout << "*******************************************************************************" << endl << endl;
			
			cout << "Enter The Student Id\t\t: ";
			cin  >> id;
			cout << "Enter The Student Name\t\t: ";
			cin  >> name;
			cout << "Enter The Student Roll No\t: ";
			cin  >> roll_no;
			cout << "Enter The Student Standard\t: ";
			cin  >> standard;
			cout << "Enter The Student Age\t\t: ";
			cin  >> age;
			cout << "Enter The Student Contact No\t: ";
			cin  >> contact;
			cout << "Enter The Student Address\t: ";
			cin  >> address;
			
		}
		
		void getDataC() {
			
			cout << endl << endl << "\t\t\t---DISPLAY COLLEGE DATA ---  " << endl;
			cout << "******************************************************************************* " << endl << endl;
			cout << "\t\t\t\t STUDENT ID : " << id << endl
				 << "\t\t\t\t STUDENT NAME : " << name << endl
				 << "\t\t\t\t STUDENT ROLL NO : " << roll_no << endl
				 << "\t\t\t\t STUDENT STANDARD : " << standard << endl
				 << "\t\t\t\t STUDENT AGE : " << age << endl
				 << "\t\t\t\t STUDENT CONTACT NO : " << contact << endl
				 << "\t\t\t\t STUDENT EDUCTION INSTITUTE NAME : " << institute_name << endl
				 << "\t\t\t\t STUDENT ADDRESS : " << address << endl;
			cout << "*******************************************************************************" << endl << endl;
		}
		
};

string HSchool :: institute_name = "Haridarshan School";
string College :: institute_name = "Bhagvan Mahavie University";

int main() {
	
	HSchool h1;
	College c1;
	
	h1.setDataH();
	h1.getDataH();
	
	c1.setDataC();
	c1.getDataC();
}
