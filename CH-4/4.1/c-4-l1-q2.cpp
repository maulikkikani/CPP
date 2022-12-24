#include<iostream>
using namespace std;

class Customer {
	
	private :
		
		int custid;
		string custname;
		int custage;
		string custtelecomebrandname;
		string custmobilenumber;
		string custcity;
		string custsimcardvalidity;
		
	public :
		
		void setdata() {
			
			cout << endl << "\t------ Input Customer Data -------" << 
        endl << endl;
			cout << "Enter The Customer Id : ";
			cin  >> custid;
			cout << "Enter The Customer Name : ";
			cin  >> custname;
			cout << "Enter The Customer Age : ";
			cin  >> custage;
			cout << "Enter The Customer Telecome Brand Name (like Jio, Airtel, Vi, etc.) : ";
			cin  >> custtelecomebrandname;
			cout << "Enter The Customer Mobile Number : ";
			cin  >> custmobilenumber;
			cout << "Enter The Customer City : ";
			cin  >> custcity;
			cout << "Enter The Customer Simcard Validity : ";
			cin  >> custsimcardvalidity;
		}
		
		void maulik() {
        	
        	      cout << endl << endl << "\t\tCustId\t\tCustName\tCustAge\t\tCTelecomeBName\t\tCMoNumber\t\tCustCity\t\tCSimValidity\n\t\t*******\t\t**********\t*******\t\t**************\t\t*********\t\t********\t\t************" << endl << endl; 
		}
		
		void getdata(){
			
		
			cout << "\t\t"<< custid << "\t\t"<< custname << "\t\t" 
			     << custage << "\t\t" << custtelecomebrandname 
			     << "\t\t\t" << custmobilenumber 
			     << "\t\t\t" << custcity << "\t\t\t" << custsimcardvalidity << endl;
		}
		
};





int main() {
	
	int n;
	
	cout << "Enter The Customer Numbers : ";
	cin  >> n;
	
	Customer c[n];
	
	for(int i=0; i<n; i++) 	c[i].setdata();
	
	c[0].maulik();
	
	for(int i=0; i<n; i++) 	c[i].getdata();
	
}

