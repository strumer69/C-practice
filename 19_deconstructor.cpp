#include <iostream>
#include <cstdlib>
using namespace std;

class CAR
{
    private:
    string brand;
    int mileage ;
    static int number_rides;
 
    public:
    //constructor
    
    CAR (string b , float m):brand(b) , mileage(m){}
    ~CAR()
    {
        cout << endl << "object has been deleted." << endl;
    }

    void drive ( int driven) //declaration and definition of function
    {
        mileage += driven;
        number_rides ++;
    }
    void show_data()
    {
        cout << brand << " , actual mileage : "<< mileage <<endl;
        cout << "Number of rides:" << number_rides << endl;
    }
};
int CAR :: number_rides =0;
int main(){
    CAR bmw ("BMW" , 1500);
    bmw.drive(70);
    bmw.show_data();
    bmw.drive(70);
    bmw.show_data();
    bmw.drive(70);
    bmw.show_data();
    

    return 0;
}