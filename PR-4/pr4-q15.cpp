#include<iostream>
using namespace std;

class maulik;

class kikani {
	
	private :
		int a;
		
	public :
		
		void setData() {
			
			cout << endl << endl << "\t------ INPUT A ------" << endl << endl;
			cout << "Enter The A : ";
			cin  >> a;
		}
		
		friend void Oyy(kikani , maulik);
};


class maulik {
	
	private :
		int b;
		
	public :
		
		void setData() {
			
			cout << endl << endl << "\t------ INPUT B ------" << endl << endl;
			cout << "Enter The B : ";
			cin  >> b;
		}
		
		friend void Oyy(kikani , maulik);
};

void Oyy(kikani k, maulik m) {
	
	cout << endl << "\t\t------ ADDISION A OF B ------" << endl;
	cout << "\t\t{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}" << endl << endl;
	cout << "\t A + B : " << k.a + m.b << endl;
}

int main() {
	
	kikani k1;
	maulik m1;
	
	
	k1.setData();
	m1.setData();
	
	Oyy(k1,m1);
}

