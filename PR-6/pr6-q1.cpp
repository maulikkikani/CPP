#include<iostream>
using namespace std;

class maulik{
    private :
   		string name;

    public :

    	maulik(){
        	cout << "\tEnter the your name : ";
        	cin  >> name;
    	}

	    void print(int m,int n){
	        cout << endl << "\tAddition is : " << m + n << endl << endl;
	    } 
	
	    void print(){
	        cout << name << endl;
	    }
};

int main(){
    maulik m1;
    
    int a,b;

    cout << "\tEnter the value of A : ";
    cin  >> a;
    cout << "\tEnter the value of B : ";
    cin  >> b;

    m1.print(a,b);
    m1.print();
}
