#include<iostream>
using namespace std;

class Cars {
	
	private :
		
		int carid;
		string carcompanyname;
		string carcolor;
		string carmodel;
		int carreleaseyear;
		
		
		
	public :
		
		void setdata(){
			
			cout << endl << "\t------ Input Car Data -------" << endl 
     << endl;
			cout << "\tEnter The Car Id :";
			cin  >> carid;
			cout << "\tEnter The Car Company Name :";
			cin  >> carcompanyname;
			cout << "\tEnter The Car Color :";
			cin  >> carcolor;
			cout << "\tEnter The Car Modal :";
			cin  >> carmodel;
			cout << "\tEnter The Car Ralease Year :";
			cin  >> carreleaseyear;
			
        }
		
		void getdata(){
			
			cout <<"carid\t\t:-" << carid << endl << endl
			     <<"carcomoanyname\t:-" << carcompanyname << endl << endl
			     <<"carcolor\t:-" << carcolor << endl << endl
			     <<"carmodel\t:-" << carmodel << endl << endl
			     <<"carrelaseyear\t:-" << carreleaseyear << endl << endl;
		}
};



int main() {

	Cars c1,c2,c3,c4;

	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
}
