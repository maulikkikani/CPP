#include<iostream>
using namespace std;

class India {
	
	private :
		
		string states;
		string district;
		string capitalCity;
		static string country;
	
	public :
		
		void getData() {
			
			cout << endl << endl << "\t\t\t ----- INPUT COUNTRY DATA -----" << endl;
			cout << "****************************************************************" << endl ;
			cout << "Enter The States : ";
			cin  >> states;
			cout << "Enter The District : ";
			cin  >> district;
			cout << "Enter The Capital City : ";
			cin  >> capitalCity;
		}
		
		static void inView() {
			
			cout << "****************************************************************************************" << endl;
			cout << endl << endl << "\t STATES \t DISTRICT \t CAPITAL CITY \t COUNTRY \n \t**********\t ********** \t ********** \t******** \n";
		}
		
		void putData() {
			
			cout << "\t " << states << "\t\t" << district << "\t\t" << capitalCity << "\t\t " << country << "\n";
		}
};

string India :: country = "India";

int main() {
	
	int n;
	
	cout << "Enter The Number Of Country Data : ";
	cin  >> n;
	
	India d[n];
	
	for(int i=0; i<n; i++)	 d[i].getData();
	
	India :: inView();
	
	for(int i=0; i<n; i++) 	d[i].putData();
	
	
}

