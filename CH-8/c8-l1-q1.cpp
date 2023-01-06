#include<iostream>
using namespace std;

class Name {

    int a;
    int b;
    int age;
    int c=0;
    string email;
    string pass;
    char hanny[100] = "Plaese Cannot Divide By ZERo...";
    string manny = "Please You Are Not Able Voter...";
    string unny = "Please Enter The Valid Password....";

    public :

        void setDataDivide() {

            cout << endl << endl << "\t========================================" << endl << endl;
            cout << "\t\tEnter The A : ";
            cin  >> a;
            cout << "\t\tEnter The B : ";
            cin  >> b;
            

            if(b==0) {

                throw hanny;
            }
            else {

                cout << "\t\t=> Your Ans : " << a/b << endl << endl;
            }
        }

        void setDataVoter() {

            cout << endl << endl ;
            cout << "\t\t *** VOTER ID ***" << endl;
            cout << "\t\t==================" << endl << endl;
            cout << "\tEnter The Your Age : ";
            cin  >> age;

            if(age<18) {

                throw manny;
            }
            else {

                cout << endl << "\t=> Hey.. You are Able Voter..";
            }
            
        }  

         void setDataPassWord() {

            cout << endl << endl ;
            cout << "\t\t  ** PASSWORD **" << endl;
            cout << "\t\t******************" << endl << endl;
            cout << "\tEnter The Your Email : ";
            cin  >> email;
            cout << "\tEnter The Your Password : ";
            cin  >> pass;

           for(int i=0; i<'/0'; i++)
           {
                if(pass[i]>=65 && pass[i]<=90) {

                    c++;
                }
           }

           if(c>0) {
                cout << endl << "YOUR PASSWORD IS VALID.." << endl;
           }
           else {
                throw unny;
           }
            
        }  
};

int main() {

    Name n1,n2,n3;

    try
    {
        n1.setDataDivide();
    }
    
    catch(char h[])
    {
        cout << endl << endl << "********************************" << endl;
        cout << h << endl;
        cout << "********************************" << endl;
    }

    try
    {
        n2.setDataVoter();
    }
    catch(string m) 
    {
        cout << endl << endl << "\t\t ---------------------------------" << endl;
        cout << "\t\t" << m << endl;
        cout << "\t\t ---------------------------------" << endl;
    }

    try
    {
       n3.setDataPassWord(); 
    }
    
    catch(string u)
    {
        cout << endl << endl << "********************************" << endl;
        cout << u << endl;
        cout << "********************************" << endl;
    }

    
}
