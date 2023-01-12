#include<iostream>
using namespace std;

class Div {

    int a;
    int b;
    float c;
    string error = "Please Cannot Divide ZERO..";

    public :

        Div() {

            cout << "Enter The A : ";
            cin  >> a;
            cout << "Enter The B : ";
            cin  >> b;

            try {

                if(b>0) {

                    c = a/b;
                    throw c;
                } 

                else {

                    throw error;
                }
            }

            catch(char n[]) {

                cout << endl << "\t **************************" << endl;
                cout << "\t" << n << endl;
                cout <<"\t **************************" << endl;
            }

            catch(int n) {

                cout << endl << "\t **************************" << endl;
                cout << " \t DIVISION : " << n << endl;
                cout <<"\t **************************" << endl;
            }

            catch(...) {

                 cout << endl << "\t **************************" << endl;
                cout << "\t GENERAL EXCEPTION " << endl;
                cout <<"\t **************************" << endl;
            }
        }
};

int main() {

    Div d1;
}
