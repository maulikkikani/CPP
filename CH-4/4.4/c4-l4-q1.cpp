#include<iostream>
using namespace std;

class Companies {
	
	private :
		
		int CompId;
	    string CompName;
		int CompStaffQuantity;
		string CompRevenue;
		int CompImportRawDiamonds;
		int CompExportDiamonds;
		string CompCeo;
		
	public :
	
		Companies(int n,int CompId,string CompName,int CompStaffQuantity,string CompRevenue,int CompImportRawDiamonds,int CompExportDiamonds,string CompCeo) {
	
            cout << endl << endl << "\t" << "\t" << "\t" << "====== DISPLAY COMPANIES DATA ======" << endl << endl;
		    cout << "\t\t COMPANY ID\t\t\t: " << CompId << endl
			     << "\t\t COMPANY NAME\t\t\t: " << CompName << endl
			     << "\t\t COMPANY STAFF QUANTITY\t\t: " << CompStaffQuantity << endl
			     << "\t\t COMPANY REVENUE\t\t: "<< CompRevenue << endl
			     << "\t\t COMPANY IMPORT RAW DIAMONDS\t: "<< CompImportRawDiamonds << endl
			     << "\t\t COMPANY EXPORT DIAMONDS\t: " << CompExportDiamonds << endl 
      	      	 << "\t\t COMPANY CEO\t\t\t: " << CompCeo << endl << endl;
		}
};

int main() {
	
	int n;
	int CompId;
	string CompName;
    int CompStaffQuantity;
	string CompRevenue;
	int CompImportRawDiamonds;
	int CompExportDiamonds;
	string CompCeo;
	
	cout << "Enter The Number Of Companies : ";
	cin  >> n;
	
	
	cout << endl << endl << "\t" << "\t" << "\t" << "-- INPUT COMPANIES DATA --" << endl << endl;	
	
     for(int i=0; i<n; i++) 	{

		cout << "Enter The Company Id\t\t\t: ";
		cin  >> CompId;
		cout << "Enter The Company Name\t\t\t: ";
		cin  >> CompName;
		cout << "Enter The Company Staff Quantity\t: ";
		cin  >> CompStaffQuantity;
		cout << "Enter The Company Revenue\t\t: ";
		cin  >> CompRevenue;
		cout << "Enter The Company Import Raw Diamonds\t: ";
		cin  >> CompImportRawDiamonds;
		cout << "Enter The Company Export Diamonds\t: ";
		cin  >> CompExportDiamonds;
		cout << "Enter The Company CEO\t\t\t:";
		cin  >> CompCeo;
		cout << endl << endl;
		
		

		Companies C (n,CompId,CompName,CompStaffQuantity,CompRevenue,CompImportRawDiamonds,CompExportDiamonds,CompCeo);
		
	 }
			
	
}

