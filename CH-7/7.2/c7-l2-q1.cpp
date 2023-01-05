#include <iostream>
using namespace std;

class Circle
{

protected:
    int radies;
    int height;
    int base;
    int length;
    int width;

public:
    virtual void calculate() = 0;

    void setData()
    {

        cout << "Enter The Radies\t: ";
        cin >> radies;
        cout << "Enter The Height\t: ";
        cin >> height;
        cout << "Enter The Base\t\t: ";
        cin >> base;
        cout << "Enter The Length\t: ";
        cin >> length;
        cout << "Enter The Width\t\t: ";
        cin >> width;
    }
};

class Triangle : public Circle
{

public:
    void calculate()
    {
    	cout << endl;
    	cout << "\t\t===================================" << endl;
    	cout << "\t\t|\t\t\t\t  |";
        cout << endl << "\t\t|\tCIRCLE : " << 3.14 * radies * radies << "\t\t  |" << endl;
        cout << "\t\t|\t\t\t\t  |";
        cout << endl << "\t\t|\tTRIANGLE : " << height * base / 2 << "\t\t  |" << endl;
        cout << "\t\t|\t\t\t\t  |";
    }
};

class Rectangle : public Triangle
{
public:
    void calculate()
    {
    	
        cout << endl << "\t\t|\tRECTANGLE : " << length * width << "\t\t  |" << endl
             <<"\t\t===================================" << endl;
    }
};

int main()
{

    Rectangle r1;

    r1.setData();
    r1.Triangle::calculate();
    r1.calculate();
}
