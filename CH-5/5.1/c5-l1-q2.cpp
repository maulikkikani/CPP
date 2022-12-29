#include<iostream>
using namespace std;

class P {
	
	protected :
		
		float temperature;
	
	public :
		
		void setData() {
			
			cout << "Enter The Tamperature :";
			cin  >> temperature;
		}
		
		
};

class Q : public P {
	
	 protected :
	 	
	 	float fahrenheit;
	 	
	public :
		
		void toFehrenheit() {
			
			fahrenheit = (temperature * 9 / 5) + 32;
			
			cout << endl << endl <<  "\t\tFahrenheit : " << fahrenheit << endl;
		}
};

class R : public Q {
	
	 protected :
	 	
	 	float kelvin;
	 	
	public :
		
		void toKelvin() {
			
			kelvin = 273.5 + ((fahrenheit - 32.0) * (5.0/9.0));
			
			cout << endl << endl << "\t\tKelvin : " << kelvin << endl;
		}
};

int main() {
	
	R r1;
	
	r1.setData();
	r1.toFehrenheit();
	r1.toKelvin();
	
}
