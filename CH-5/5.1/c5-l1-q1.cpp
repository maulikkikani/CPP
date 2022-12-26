#include<iostream>
using namespace std;

class X {
	
	protected :
		
		int a;
		int b;
		int c;
		
};

class Y : public X {
	
	public :
		
		void setData(){
			
			cout << "Enter The a :";
			cin  >> a;
			cout << "Enter The b :";
			cin  >> b;
			cout << "Enter The c :";
			cin  >> c;
		}
		
	   void getData() {
	   	
	   	cout << endl << "\t a : " << a << endl
	   	     << "\t b : " << b << endl
	   	     << "\t c : " << c << endl;
	   }
};

int main() {
	
	Y y1;
	
	y1.setData();
	y1.getData();
}
