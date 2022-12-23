#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int id;
		string name;
		int age;
		string course;
		string city;
		string college;
		
		
	public :
		
		void setData(){
			
			cout << endl << "\t------ Input Studentss Data -------" << endl << endl;
			cout << "\tEnter The Student Id\t\t:";
			cin  >> id;
			cout << "\tEnter The Student Name\t\t:";
			cin  >> name;
			cout << "\tEnter The Student Age\t\t:";
			cin  >> age;
			cout << "\tEnter The Student Course\t:";
			cin  >> course;
			cout << "\tEnter The Student City\t\t:";
			cin  >> city;
			cout << "\tEnter The Student College Name\t:";
			cin  >> college;
			
        }
        
        void heLLo() {
        	
        	cout << endl << endl << "\t\tStu Id\t\tStu Name\tStu Age\t\tStu Course\t\tStu City\tStu College\n\t\t.......\t\t..........\t.......\t\t............\t\t.........\t..........." << endl << endl; 
		}
		
		void getData(){
			
		
			cout  << "\t\t"<< id << "\t\t"<< name<< "\t\t " << age << "\t\t " << course << "\t\t\t" << city << "\t\t\t" << college << endl;
		}
};




int main() {
    int n;
	
	cout << "Entre The Number Of Student :";
	cin  >> n;
	
	Student s[n];
	
	for(int i=0; i<n; i++)  s[i].setData();
	
	s[0].heLLo();
	
	for(int i=0; i<n; i++)  s[i].getData();
}
