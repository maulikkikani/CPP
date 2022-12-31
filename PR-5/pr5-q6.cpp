#include<iostream>
using namespace std;

class A {
	
	protected :
		
		int id;
		string name;
		string role;
		int salary;
		string exprience;
		string comp_name;
		string address;
		string email;
		int contactNo;
		
	public :
		
		void setDataA() {
			
			cout << "Enter The Id : ";
			cin  >> id;
			cout << "Enter The Name : ";
			cin  >> name;
			cout << "Enter The Role : ";
			cin  >> role;
		}
};

class B : public A {
		
	public :
		
		void setDataB() {
			
			cout << "Enter The Salary : ";
			cin  >> salary;
			cout << "Enter The Exprience : ";
			cin  >> exprience;
		}
};

class C : public B {
		
	public :
		
		void setDataC() {
			
			cout << "Enter The Company Name : ";
			cin  >> comp_name;
			cout << "Enter The Address : ";
			cin  >> address;
		}
		
		void getDataC() {
			
			cout << endl << endl << "\t NAME : " << name << endl
				 << "\t ROLE : " << role << endl
		    	 << "\t SALARY : " << salary << endl << endl;
		}
};

class D : public C {
	
	public :
		
		void setDataD() {
			
			cout << "Enter The Email : ";
			cin  >> email;
			cout << "Enter The Conatct Number : ";
			cin  >> contactNo;
		}
		
		void getDataD() {
			
			cout << endl << endl << "\t ID : " << id << endl
				 << "\t NAME : " << name << endl
				 << "\t ROLE : " << role << endl
				 << "\t SALARY : " << salary << endl
				 << "\t EXPRIENCE : " << exprience << endl
				 << "\t COMAPNY NAME : " << comp_name << endl
				 << "\t ADDRESS : " << address << endl
				 << "\t EMAIL : " << email << endl
				 << "\t CONTACT NO. : " << contactNo << endl;
								 
		}
};

int main() {
	
 	D d1;
 	
 	d1.setDataA();
 	d1.setDataB();
 	d1.setDataC();
 	d1.getDataC();
 	d1.setDataD();
 	d1.getDataD();
 	
}
