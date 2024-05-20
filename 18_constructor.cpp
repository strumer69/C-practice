/*
according to practice 14 :

Use your program from Chapter 7 ãExercise  (practice 14 in repository) - FarmÒ as template and modify it as follows:

To initialize the instances, use a constructor with a member initialization list and a 
standard constructor that queries the data.


Create two objects in the main program using the two constructors. 
Then call the function calculate revenue.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Animal
{
private:
    float Revenue;
    float Weight;
    float DailyPrice;
public:
    void Request_data() //declaration and definition of member function Data_request
    {
        cout << "what is the daily price?" << endl;
        cin >> DailyPrice;
        cout << "what is the weight?" << endl;
        cin >> Weight;
    }
public:
    //constructor
    Animal()
    {
        Request_data();
    };
    Animal(float w,float p): Weight(w),DailyPrice(p) {}

    //Function
    void Calculate_revenue() //declare and define of the memeber function calculate_revenue
    {
        Revenue = Weight *DailyPrice;
        cout << "Revenue = " << Revenue << endl;
    }   
};

int main(){
        Animal pig (40,3);
        cout << " Pig " << endl;
        pig.Calculate_revenue();
        cout << "--test --" << endl;
        pig.Request_data();
        cout << "pig2 " << endl;
        pig.Calculate_revenue();

        Animal cow;
        cout << "cow : "<< endl;
        cow.Calculate_revenue();
        cout << endl << endl;
        return 0;
}