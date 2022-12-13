#include<iostream>
using namespace std;

class Employees {
	
	private :
		
		int EmpId;
		string EmpName;
		string EmpRole;
		int EmpAge;
		int Empsalary;
		double EmpExperience;
		string EmpCity;
		string EmpCompanyName;
		
		
	public :
		
		void setdata()
		{
			
			cout << endl << "\t------ Input Employees Data -------" << endl << endl;
			cout << "\tEnter The Employees Id :";
			cin  >> EmpId;
			cout << "\tEnter The Employees Name :";
			cin  >> EmpName;
			cout << "\tEnter The Employees Role :";
			cin  >> EmpRole;
			cout << "\tEnter The Employees Age :";
			cin  >> EmpAge;
			cout << "\tEnter The Employees salary :";
			cin  >> Empsalary;
			cout << "\tEnter The Employees Experience :";
			cin  >> EmpExperience;
			cout << "\tEnter The Employees City :";
			cin  >> EmpCity;
			cout << "\tEnter The Employees CompanyName :";
			cin  >> EmpCompanyName;
			
        }
        
       	void getdata()
		  {
			
		
			cout  << "EmpId\t:-" << EmpId << endl
			      << "EmpName\t:-" << EmpName << endl
			      << "EmpRole\t:-" << EmpRole << endl
			      << "EmpAge\t:-" << EmpAge << endl
			      << "Empsalary\t:-" << Empsalary << endl
			      << "EmpExperience\t:-" << EmpExperience << endl
			      << "EmpCity\t:-" << EmpCity << endl
			      << "EmpCompanyName\t:-" << EmpCompanyName << endl;
	
		  }
};




int main() {
 
         Employees e1,e2,e3,e4,e5;
         
        e1.setdata();
        e2.setdata();
		e3.setdata();
		e4.setdata();
		e5.setdata();
		
		e1.getdata();
		e2.getdata();
		e3.getdata();
		e4.getdata();
		e5.getdata();
		        

	
}

