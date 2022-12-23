#include<iostream>
using namespace std;

class Emp {
	
	private :
		
		int id;
		string name;
		string role;
		double salary;
		string exprience;
		string address;
		string email;
		int contactNo;
		
	public :
		
		void setData() {
			cout << "================================================================" << endl << endl;
			cout << "Enter The Employee Id\t\t: ";
			cin  >> id;
			cout << "Enter The Employee Name\t\t: ";
			cin  >> name;
			cout << "Enter The Employee Role\t\t: ";
			cin  >> role;
			cout << "Enter The Employee Salary\t: ";
			cin  >> salary;
			cout << "Enter The Employee Exprience\t: ";
			cin  >> exprience;
			cout << "Enter The Employee Address\t: ";
			cin  >> address;
			cout << "Enter The Employee Email\t: ";
			cin  >> email;
			cout << "Enter The Employee Contact No\t: ";
			cin  >> contactNo; 
		}
		
		void getData() {
			cout << endl << "=================================================" << endl << endl;			
			cout << "\t\t EMPLOYEE ID\t\t: " << id << endl
				<< "\t\t EMPLOYEE NAME\t\t: " << name << endl
				<< "\t\t EMPLOYEE ROLE\t\t: " << role << endl
				<< "\t\t EMPLOYEE SALARY\t: " << salary << endl
			    << "\t\t EMPLOYEE EXPRIENCE\t: " << exprience << endl
			    << "\t\t EMPLOYEE ADDRESS\t: " << address << endl
				<< "\t\t EMPLOYEE EMAIL\t\t: " << email << endl
				<< "\t\t EMPLOYEE CONATCT NO\t: " << contactNo << endl;
		}
};

int main() {
	
	Emp e1;
	
	for(int i=0;i<5;i++)  e1.setData();
	for(int i=0;i<5;i++)  e1.getData();
}
