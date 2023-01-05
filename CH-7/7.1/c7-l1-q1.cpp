#include <iostream>
using namespace std;

class Admin
{

private:
	int total_annual_revenue;
	string can_terminate;

protected:
	string company_name;
	int manager_salary;
	int employee_salary;
	int total_staff;

public:
	void setData()
	{

		cout << "Enter The Company Name : ";
		cin >> company_name;
		cout << "Enter The Manager Salary : ";
		cin >> manager_salary;
		cout << "Enter The Employee Salary : ";
		cin >> employee_salary;
		cout << "Enter The Total Staff : ";
		cin >> total_staff;
		cout << "Enter The Total Anunal Revenue : ";
		cin >> total_annual_revenue;
		cout << "Enetr The Can Terminate : ";
		cin >> can_terminate;
	}

	void myAccess()
	{

		cout << endl
			 << "\t Company Name \t\t Manager Salary \t Employee Salary \t Total Staff \t\t Total Anunal Revenue \t\tCan Terminate \n \t ================ \t ==================== \t =================== \t =============== \t ======================= \t =============== "
			 << endl
			 << endl;

		cout << "\t " << company_name << "\t\t\t" << manager_salary << "\t\t\t " << employee_salary << "\t\t\t  "
			 << total_staff << "\t\t\t" << total_annual_revenue << "\t\t\t\t" << can_terminate << endl
			 << endl;
	}
};

class Manager : protected Admin
{

public:
	void myAccess()
	{

		Admin ::setData();
		Admin ::myAccess();
		cout << "\t Company Name \t Manager Salary \t Employee Salary \t Total Staff \n \t ============ \t ============== \t =============== \t ===========" << endl
			 << endl;
		cout << "\t " << company_name << "\t\t" << manager_salary << "\t\t\t " << employee_salary << "\t\t\t  " << total_staff << endl
			 << endl;

		manager_salary = 0;
	}
};

class Employee : Manager
{

public:
	void myAccess()
	{

		Manager ::myAccess();
		cout << "\t Company Name \t Employee Salary \t Total Staff \n \t ============ \t =============== \t ===========" << endl
			 << endl;

		cout << "\t " << company_name << "\t\t" << employee_salary << "\t\t\t " << total_staff << "\t" << endl
			 << endl;
	}
};

int main()
{

	Employee e1;

	e1.myAccess();
}
