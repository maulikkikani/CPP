#include<iostream>
using namespace std;

class A {
	
	protected :
		
		int id;
		string name;
		string address;
		int salary;
		string email;
		
	public :
		
		void setDataA() {
			
			cout << "Enter The Your Id : ";
			cin  >> id;
		}
};


class B : public A {
	
		
	public :
		
		void setDataB() {
			
			cout << "Enter The Your Name : ";
			cin  >> name;
			cout << "Enter The Your Address : ";
			cin  >> address;
		}
};


class C : public B {
		
	public :
		
		void setDataC() {
			
			cout << "Enter The Your Salary : ";
			cin  >> salary;
			cout << "Enter The Your Email : ";
			cin  >> email;
		}
		
		void getDataC() {
		
			cout << endl << endl << "||------------------- ---------------- ||" << endl
			   	 << "||  ID \t: "  << id << "\t\t\t      ||" << endl
				 << "||  NAME \t: " << name <<  "\t      ||" <<  endl
				 << "||  ADDRESS\t: " << address << "\t\t      ||" <<  endl
			     << "||  SALARY\t: " << salary <<  "\t\t      ||" <<  endl 
				 << "||  EMAIL\t: " << email << "   ||"<<  endl
				 << "||----------------------------------- ||" << endl;
		}
};

int main() {
	
	C c1;
	
	c1.setDataA();
	c1.setDataB();
	c1.setDataC();
	c1.getDataC();
}
