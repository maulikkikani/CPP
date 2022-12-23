#include <iostream>
using namespace std;

class Railway
{
public:
    int TrainNumber;
    string TrainName;
    string Source;
    string Destination;
    string TrainTime;

    void DecRota()
    {
        
        cout << endl << endl << "* * * * * * * * * * * * * * Welcome To Indian Railway Reservation System * * * * * * * * * * * * * * *" << endl << endl;
        cout << endl <<"\t**----**---- Enter which trains you want to prefer for travel ----**----**" << endl << endl;
       

       
    }
    void setData()
    {
        
        cout << "Enter train Train Number : ";
        cin  >> TrainNumber;
        cout << "Enter train's Train Name  : ";
        cin  >> TrainName;
        cout << "Enter train Source       : ";
        cin  >> Source;
        cout << "Enter train Destination  : ";
        cin  >> Destination;
        cout << "Enter train's TrainTime  : ";
        cin  >> TrainTime;
        
        cout << endl << "****************************************************************************************************" << endl << endl;
    }

    void getData(int a, string name)
    {
        if(a == TrainNumber)
        {
            cout << endl << endl << "\t\t - - - - - - - Booking Successfull - - - - - - -" << endl;
            cout << "\t\t - - - - - - - This is train detail - - - - - - - " << endl << endl;

            cout << "Name                  : " << name << endl 
                 << "TRAINS NUMBER IS      : " << TrainNumber  << endl
                 << "TRAINS NAME IS        : " << TrainName << endl
                 << "TRAINS SOURCE IS      : " << Source << endl
                 << "TRAINS DESTINATION IS : " << Destination << endl
                 << "TRINS TIME IS         : " << TrainTime << endl << endl;
        }
       
    }
};

int main()
{

    Railway r1[50];
    r1[0].DecRota();
    
    for(int i=0; i<3; i++)
    {
        r1[i].setData();
    }

    int a;
    string name;

    cout << "Enter in which train number you want to travel : ";
    cin  >> a;
    cout << "Enter The Your Name : ";
    cin  >> name;
    
    for(int i=0; i<3; i++)
    {
        r1[i].getData(a,name);
    }
    
}

