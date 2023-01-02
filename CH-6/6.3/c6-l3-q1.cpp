#include<iostream>
using namespace std;

class Result {
		
	public :
		
		int math, sci, eng, guj, ss, com,total,per;
		
		void setData() {
			
			cout << endl << endl << "\t\t\t   ******   RESULT   ******" << endl << endl;
			
			cout << "\tEnter The Science Mark : " ;
			cin  >> sci;
		}
        
		Result operator--() {
			
			Result mnp;
		   
            mnp.math = --sci;
            mnp.math = --sci;
            mnp.math = --sci;

            return mnp;
            
           
        }

        Result  operator++() {
			
			Result tmp;

            tmp.sci = ++sci;
            tmp.sci = ++sci;
            tmp.sci = ++sci;
            tmp.eng = --sci;
            tmp.guj = ++sci;
            tmp.guj = ++sci;
            tmp.ss = --sci;
            tmp.ss = --sci;
            tmp.ss = --sci;
            tmp.com = ++sci;
            tmp.com = ++sci;
		    tmp.com = ++sci;
		    tmp.com = ++sci;	  

            return tmp;
           
           
		}
		
		void getData1() {
			
			cout << endl << endl << "\t\t\t ****** MARKSHIT ******" << endl << endl;

             cout << "\t\t|------------|" << endl;
			 cout << "\t\t|SCIENCE : " << sci << "|" << endl
				 << "\t\t|MATH    : " << math << "|" << endl
				 << "\t\t|ENGLISH : " << eng << "|" << endl
				 << "\t\t|GUJRATI : " << guj << "|" << endl
				 << "\t\t|SS      : " << ss << "|" << endl
				 << "\t\t|COMPUTER: " << com << "|"<< endl;
            cout << "\t\t|------------|" << endl << endl;

             total = sci + math + eng + guj + ss + com;
             per = total / 6;

            cout << endl << "\t|============|" << endl;
            cout << "\t|TOTAL  : " << total << "|" << endl;
            cout << "\t|============|" << endl;
            cout << "\t|PER    : " << per << " |" << endl;  
            cout << "\t|============|" << endl;
            cout << endl;

            if(per>91 && per<=100) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade A+||" << endl;
                cout << "\t\t||---------||" << endl << endl;
            }
            else if(per>81 && per<=91) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade A ||" << endl;
                cout << "\t\t||---------||" << endl << endl;
                
            }
            


			else if(per>71 && per<=81) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade B+||" << endl;
                cout << "\t\t||---------||" << endl << endl;
            }
            else if(per>61 && per<=71) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade B ||" << endl;
                cout << "\t\t||---------||" << endl << endl;
            }
            else if(per>51 && per<=61) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade C+||" << endl;
                cout << "\t\t||---------||" << endl << endl;
            }
            else if(per>41 && per<=51) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade C ||" << endl;
                cout << "\t\t||---------||" << endl << endl;
            }
            


	else if(per>33 && per<=41) {

                cout << endl << endl << "\t\t||---------||" << endl;
                cout << "\t\t|| Grade D+||" << endl;
                cout << "\t\t||---------||" << endl << endl;
            }
            else {

                cout << "||---------------------||"  << endl;
                cout << "||SORRY YOU ARE FAIL...||" << endl;
                cout << "||---------------------||" << endl << endl;
            }
            
		}

    
};

int main() {
	
	
	Result  math, sci, eng, guj, ss, com;
	
	sci.setData();
	
    
	math = --sci;
    sci = ++sci;
   

	
    sci.getData1();

    
}
