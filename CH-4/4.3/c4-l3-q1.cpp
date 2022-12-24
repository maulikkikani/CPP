#include<iostream>
using namespace std;

class time2;
class time {
	
	private :
		
		int Hour;
		int Minutes;
		int Second;
	
	public :
		
		void getData() {
			
			cout << "Enter The Hour\t\t: ";
			cin  >> Hour;
			cout << "Enter The Minutes\t: ";
			cin  >> Minutes;
			cout << "Enter The Seconds\t: ";
			cin  >> Second;
			
		}
		
		friend void sumTime(time,time2);
};

class time2 {
	
	private :
		
		int Hour;
		int Minutes;
		int Second;
	
	public :
		
		void getData() {
			
			cout << endl << endl << ":===================================:" << endl << endl;
			cout << "Enter The Hour\t\t: ";
			cin  >> Hour;
			cout << "Enter The Minutes\t: ";
			cin  >> Minutes;
			cout << "Enter The Seconds\t: ";
			cin  >> Second;
		}
		
		friend void sumTime(time , time2);
};

void sumTime(time t1, time2 t2) {
	
	cout << endl << endl << "**=====================================**" << endl << endl;
	cout << "Two Time of Sum......" << endl << endl;
	cout << "HH = " << t1.Hour + t2.Hour << " : " << "MM = " << t1.Minutes + t2.Minutes << " : " << "SS = " << t1.Second + t2.Second ;
}

int main() {
	
	time t1;
	time2 t2;
	
	t1.getData();
	t2.getData();
	
	sumTime(t1,t2);
}
