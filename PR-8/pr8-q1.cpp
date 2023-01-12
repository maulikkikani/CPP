#include <iostream>
using namespace std;

class Gar{
	public:
	  Gar() {
		    try {	
		    }
			catch (string e) {
		      throw e ;
		    }
		}	
};

class Motor : public Gar {
	string msg = "Car that is having troubles with its Motor. ";
	public:
	 	Motor() {
	    	throw  msg;
	    	Gar();
	  }
};


int main() {
	try{
		Motor a;
	} 
	catch (string e) {
		cout << "\t====================================================================" << endl;
		
		cout << "\t\tEngine failure " << e << endl;
		cout << "\t====================================================================" << endl;
	}
	
}
