#include<iostream>
using namespace std;

class Zebra {
	
	protected :
		
		string Place;
		string Origin;
	
	public :
		
		void setZebraValue() {
			
			cout << "Enter The Zebra Place : ";
			cin  >> Place;
			cout << "Enter The Zebra Origin : ";
			cin  >> Origin;
		}
};

class Dolphin {
	
	protected :
		
		string Place;
		string Origin;
	
	public :
		
		void setDolphinValue() {
			
			cout << "\n\n\tEnter The Dolphin Place : ";
			cin  >> Place;
			cout << "\tEnter The Dolphin Origin : ";
			cin  >> Origin;
		}
};

class Animal : public Zebra , public Dolphin {
	
	private :
		
		string Name;
		int Age;
		
	public :
		
		void setValue() {
			
			cout << "\n\n\t\tEnter The Animal Name : ";
			cin  >> Name;
			cout << "\t\tEnter The Animal Age : ";
			cin  >> Age;
			
		}
		
		void getValue() {
			
			cout << endl << endl << "\t\t ANIMAL NAME \t: " << Name << endl
			     << "\t\t ANIMAL AGE \t: " << Age << endl
			     << "\t\t ZEBRA PLACE \t: " << Zebra::Place << endl
				 << "\t\t ZEBRA ORIGIN \t: " << Zebra::Origin << endl
			     << "\t\t DOLPHIN PLACE \t: "<< Dolphin::Place << endl
			     << "\t\t DOLPHIN ORIGIN : "<< Dolphin::Origin << endl;
		}
};


int main() {
	
	Animal a1;
	
	a1.setZebraValue();
	a1.setDolphinValue();
	a1.setValue();
	a1.getValue();
}
