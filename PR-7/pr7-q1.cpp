#include <iostream>
using namespace std;

class A {

    int a;

public:
    void setDataA() {
    	
        cout << "\t==============================" << endl;
        cout << "\t\tEnter The A : ";
        cin >> a;

    }

    virtual void getData() {

        cout << endl << "\t=> A: " << a << endl << endl;
    }
};
class B : public A {

    int b;

public:
    void setDataB() {

        cout << "\t\tEnter The B : ";
        cin >> b;
        cout << "\t=============================" << endl;

    }

    virtual void getData() {

        cout << endl << "\t => B : " << b << endl << endl;
    }
};

int main() {

   A *a1;
   B b1;

   a1 = &b1;

   a1->setDataA();
   b1.setDataB();

   a1->getData();
   
}

