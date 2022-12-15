#include<iostream>
using namespace std;

class Time {
	
	private :
		
		int h1, h2;
		int mini1, mini2, count, hours, minit;
		
	public :
		
		void getdata() {
			
			cout << "Enter The Hours 1 :";
			cin  >> h1;
			cout << "Enter The Hours 2 :";
			cin  >> h2;
			cout << endl << endl;
			cout << "Enter The Minit 1 :";
			cin  >> mini1;
			cout << "Enter The Minit 2 :";
			cin  >> mini2;
		}
		
		void putdata() {
			
		    hours  = h1 + h2;
			minit = mini1 + mini2;	
			
			if(minit>=60) {
		
				count = minit/60;
				minit  =  minit % 60;
				hours+=count;
			}
				
			cout << endl << 
"\t--------------------------------------------" << endl << endl;
			cout << "\t\t\t" << hours << " : " << minit << endl << 
endl;
			cout << "\t--------------------------------------------" 
     << endl << endl;
		}
};

int main() {
	
	Time t1;
	t1.getdata();
	t1.putdata();
}

