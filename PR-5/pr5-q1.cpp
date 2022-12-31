#include<iostream>
using namespace std;

class Shape {
	
	protected :
		
		int Width;
		int Height;
		
	public :
		
		Shape() {
			
			cout << "Enter The Width : ";
			cin  >> Width;
			cout << "Enter The Height : ";
			cin  >> Height;
		}
};

class Triangle : public Shape {
	
	public :
		
		int area() {
			
			return Height * Width / 2;
		}
};

class Rectangle : public Shape {
	
	public :
		
		int area2() {
			
			return Height * Width;
		}
};



int main() {
	
	int triangle;
	int rectangle;
	
	Triangle t1;
	
	triangle = t1.area();
	cout << "\n\n\tTRIANGLE : " << triangle << endl << endl;
	
	Rectangle r1;
	
	rectangle = r1.area2();
	cout << "\n\n\tRECTANGLE : " << rectangle << endl << endl;
	
	
	
}

