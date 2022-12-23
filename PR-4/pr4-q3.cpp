#include<iostream>
using namespace std;

class Hotel {
	
	private :
		int id;
		string name;
		string type;
		int staff; 
		int room;
		int establishYear;
		string address;
		string rating_type;
		string website;
		
	public :
		
		void getData(int id,string name,string type,int staff,int room,int establishYear,string address,string rating_type,string website) {
			
			this->id = id;
			this->name = name;
			this->type = type;
			this->staff = staff;
			this->room = room;
			this->establishYear = establishYear;
			this->address = address;
			this->rating_type = rating_type;
			this->website = website;
		}
		
		void putData() {
			
			cout << endl << "\t\t\t--:-: DISPLAY DATA HOTEL  :-:--" << endl << endl << endl;
			
			cout << "\tHOTEL ID\t\t: " << id << endl
				<< "\tHOTEL NAME\t\t: " << name << endl
				<< "\tHOTEL TYPE\t\t: " << type << endl
				<< "\tHOTEL STAFF SIZE\t: " << staff << endl
				<< "\tHOTEL ROOM SIZE\t\t: " << room << endl
				<< "\tHOTEL ESTABLISH YEAR\t: " << establishYear << endl
				<< "\tHOTEL ADDRESS\t\t: " << address << endl
				<< "\tHOTEL RATING TYPE\t: " << rating_type << endl
				<< "\tHOTEL WEBSITE\t\t: " << website << endl;
		}
		
};

int main() {
	
	Hotel h1;
	
    h1.getData(333,"Hoteljk","motel",33,13,2000,"vadodar","6star","Hoteljk.com");
	h1.putData();
}
