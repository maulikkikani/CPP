#include<iostream>
using namespace std;

class Cafe {
	
	private :
		
		int n;
		int cafeid;
		string cafename;
		string cafetype;
		string caferating;
		string cafelocation;
		int cafeestablishyear;
		int cafestaffquantity; 
		
	public :
		
		Cafe() {
			
			cout << "Enter The Number Of Fast Food Cafe : ";
			cin  >> n;
			
			for(int i=0; i<n; i++) {
				
				cout << "\n\nEnter The Cafe Id : ";
				cin  >> cafeid;
				cout << "Enter The Cafe Name : ";
				cin  >> cafename;
				cout << "Enter The Cafe Type (like rooftop or normal) : ";
				cin  >> cafetype;
				cout << "Enter The Cafe Rating (like 1 Star, 2 Start, ..., 5 Star) : ";
				cin  >> caferating;
				cout << "Enter The Cafe Location (city  name): ";
				cin  >> cafelocation;
				cout << "Enter The Cafe Establish Year : ";
				cin  >> cafeestablishyear;
				cout << "Enter The Cafe Staff Quantity : ";
				cin  >> cafestaffquantity;
				
				cout << endl << endl << "\t-- DISPLAY FAST FOOD CAFE DATA --" << endl << endl;
				cout << "\t\t CAFE ID : " << cafeid << endl
				     << "\t\t CAFE NAME : " << cafename << endl
				     << "\t\t CAFE TYPE : " << cafetype << endl
				     << "\t\t CAFE RATING : " << caferating << endl
				  	 << "\t\t CAFE LOCATION : "<< cafelocation << endl
				  	 << "\t\t CAFE ESTABLISH YEAR : " << cafeestablishyear << endl
				  	 << "\t\t CAFE STAFF QUANTITY : " << cafestaffquantity << endl << endl;
			}
		}
		
		
};

int main() {
	
	Cafe c;
	
}

