#include<iostream>
using namespace std;

class Maulik{
private:
    
	int a;
    int b;

public:

    Maulik(int a, int b) {

        this->a = a;
        this->b = b;
    }

    bool operator<(Maulik &j) {
		
		if(this->a < j.b) {
			
			return true;
		} else {
			
			return false;
		}
    }

};

int main() {

    int a, b;
    cout << endl << "===============================" << endl;
    cout << endl;
    cout << "\tEnter The A : ";
    cin  >> a;
    cout << "\tEnter The B : ";
    cin  >> b;
    cout << endl << "===============================" << endl;
   

    Maulik m1(a,b);
    
    
    if(a<b) {
    	
    	cout << endl << "\tB Is High Value..";
	} else {
		
		cout << endl << "\tA Is High value..";
	}
	
}
