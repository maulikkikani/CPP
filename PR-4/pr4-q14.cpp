#include <iostream>
using namespace std;

class Market {
public:

    void VeriFy() {
        
        Market m;
        string iD = "admin";
        int pass = 4567890; 

        string id;
        int password;

        cout << "Please Enter admin And 606060" << endl << endl;
        cout << "Enter user id : ";
        cin >> id;
        cout << "Enter pasword : ";
        cin >> password;

        if(iD == id && pass == password) {
            cout << "Login Successful";
        }
        else {
            cout << "Enter correct password or user id";
            m.VeriFy();
        }

    }

        int ItemNumber;
        string ItemName;
        int Quantity;
        int Tax;
        int Discount;

    void setData() {
        
        cout << "Enter Item Number : ";
        cin >> ItemNumber;
        cout << "Enter Item Name : ";
        cin >> ItemName;
        cout << "Enter Item Quantity : ";
        cin >> Quantity;
        cout << "Enter Tax : ";
        cin >> Tax;
        cout << "Enter Discount : ";
        cin >> Discount;

    }
    
    void heading() {

    	cout << endl << "NUMBER" << "\t" << "NAME " << "\t" << "QUANTITY" << "\t" << "TAX" << "\t" << "DISCOUNT" << endl;
        cout << "------" << "\t" << "-----" << "\t" << "--------" << "\t" << "---" << "\t" << "--------" << endl;
	}

    void getData() {

    	cout << ItemNumber << "\t" << ItemName << "\t " << Quantity << "\t\t" << Tax << "\t" << Discount << endl;
    }

   
};

int main()
{
    Market m1[10];
    
    m1[0].VeriFy();

    int n;
    
    cout << "\n\nhow many item want you purchase ? : ";
    cin >> n;

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        m1[i].setData();
    }

    Market temp;
    for(int i=0; i<n; i++) {
        for(int j=i+1;j<n;j++) {
            if(m1[i].ItemNumber > m1[j].ItemNumber) {
                temp = m1[i];
                m1[i] = m1[j];
                m1[j] = temp;
            }
        }
    }

    cout <<"*******************************************************************************************************";
    
    m1[0].heading();

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        m1[i].getData();
    }

}
