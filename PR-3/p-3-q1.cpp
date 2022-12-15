#include<iostream>
using namespace std;

class Distance {
	
	private :
		
		int f1, f2;
		int in1, in2, count, feet, inch;
		
	public :
		
		void getdata() {
			
			cout << "Enter The Feet 1 :";
			cin  >> f1;
			cout << "Enter The Feet 2 :";
			cin  >> f2;
			cout << endl << endl;
			cout << "Enter The Inch 1 :";
			cin  >> in1;
			cout << "Enter The Inch 2 :";
			cin  >> in2;
		}
		
		void putdata() {
			
			feet  = f1 + f2;
			inch = in1 + in2;	
			
			if(inch>=12)
			{
				count = inch/12;
				inch  =  inch % 12;
				feet+=count;
			}
				
			cout << endl << "\t------------------------------" << 
        endl << endl;
			cout <<  "\t\tFeet\t: " << feet << endl
				 << "\t\tInch\t: " << inch << endl;
		}
};

int main() {
	
	Distance d1;
	d1.getdata();
	d1.putdata();
}

