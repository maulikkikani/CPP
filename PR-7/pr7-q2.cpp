#include<iostream>
using namespace std;

class A {

    int a;

    public :

        void setDataA() {
            cout << "\t==============================" << endl;
            cout << "\t\tEnter The A : ";
            cin  >> a;
        }

        virtual void getDataA() {

            cout << endl << " => A : " << a << endl;
        }
};

class B : virtual public A {

    int b;

    public :

        void setDataB() {

            cout << "\t\tEnter The B : ";
            cin  >> b;
        }

        void getDataB() {

            cout << endl << " => B : " << b << endl;
        }
};

class C : virtual public A {

    int c;

    public :

        void setDataC() {

            cout << "\t\tEnter The C : ";
            cin  >> c;
        }

        virtual void getDataC() {

            cout << endl << " => C : " << c << endl;
        }
};

class D : public B , public C {

    int d;

    public :

        void setDataD() {

            cout << "\t\tEnter The D : ";
            cin  >> d;
            cout << "\t==============================" << endl;
        }

        virtual void getDataD() {

            cout << endl << " => D : " << d << endl;
        }
};

int main() {

    D d1;

    d1.setDataA();
    d1.setDataB();
    d1.setDataC();
    d1.setDataD();

    d1.getDataA();
    d1.getDataB();
    d1.getDataC();
    d1.getDataD();

}
