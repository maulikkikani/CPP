#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int stuid;
		string stuname;
		int stuage;
		string stucourse;
		string stuemail;
		string stucity;
		string stucollege;
		
		
	public :
		
		void setdata(){
			 
			cout << "\tEnter The Student Id :";
			cin  >> stuid;
			cout << "\tEnter The Student Name :";
			cin  >> stuname;
			cout << "\tEnter The Student Age :";
			cin  >> stuage;
			cout << "\tEnter The Student Course :";
			cin  >> stucourse;
			cout << "\tEnter The Student Email :";
			cin  >> stuemail;
			cout << "\tEnter The Student City :";
			cin  >> stucity;
			cout << "\tEnter The Student College Name :";
			cin  >> stucollege;
			
        }
        
        void maulik() {
        	system("cls");
        	
        	cout << endl << endl<<"\t\tStuId\t\tStuName\t\tStuAge\t\tStuCourse\tStuEmail\t\tStuCity\t\tStuCollege\n\t\t.....\t\t.......\t\t......\t\t.........\t........\t\t.......\t\t.........." << endl << endl; 
		}
		
		void getdata(){
			
		
			cout  << "\t\t"<< stuid << "\t\t"<< stuname << "\t\t " 
			      << stuage << "\t\t " << stucourse 
				  << "\t\t" << stuemail << "\t\t" << stucity 
				  << "\t\t" << stucollege << endl;
	    }
};




int main() {

	int n;
	
	cout << "Entre The Number Of Student :";
	cin  >> n;
	
	Student s[n];
	
	for(int i=0; i<n; i++)  s[i].setdata();
	
	s[0].maulik();
	
	for(int i=0; i<n; i++)  s[i].getdata();

	
}

