#include<iostream>
using namespace std;

class hotel {
	
	private :
		
		int  hotelid;
		string  hotelname;
		string  hoteltype; 
		string  hotelrating; 
		static string  hotellocation; 
		int  hotelestablishyear;
		int  hotelstaffquantity;
		int  hotelroomquantity;
		
	public :
		
		void setData() {
			
			cout << endl << endl << "***********Input Hotel Data***********" << endl << endl;
			cout << "Enter The Hotel Id\t: ";
			cin  >> hotelid;
			cout << "Enter The Hotel Name\t: ";
			cin  >> hotelname;
			cout << "Enter The Hotel Type\t: ";
			cin  >> hoteltype;
			cout << "Enter The Hotel Rating (like 1 Star, 2 Start, ..., 7 Star)\t: ";
			cin  >> hotelrating;
			cout << "Enter The Hotel Establish Year\t: ";
			cin  >> hotelestablishyear;
			cout << "Enter The Hotel Staff Quantity\t: ";
			cin  >> hotelstaffquantity;
			cout << "Enter The Hotel Room Quantity\t: ";
			cin  >> hotelroomquantity; 
		}
		
		void tabelView() {
			
			cout << hotelid << "\t\t" << hotelname << "\t\t" << hoteltype << "\t\t" << hotelrating << "\t\t" 
			     << hotellocation << "\t\t" << hotelestablishyear << "\t\t\t" << hotelstaffquantity << "\t\t\t"
			     << hotelroomquantity << endl;
		}
		
		

		static void header() {
			
			cout << endl << endl << "Hotel Id\tHotel Name\tHotel Type\tHotel Rating\tHotel Location\tHotel Establish Year\tHotel Staff tity\tHotel Room Quantity\n *********\t**********\t**********\t*************\t*************\t*****************\t*********************\t*********************\n";
   		}
};

string hotel::hotellocation = "Vadodra";

int main() {
	
	int n;
	
	cout << "Enter The Number Of Hotel : ";
	cin  >> n;
	
	hotel h[n];
	
	for(int i=0; i<n; i++) 	h[i].setData();
	
	hotel::header();
	
	for(int i=0; i<n; i++) 	h[i].tabelView();
}

