/*
Create a class Vehicle with the following data members


-	brand


Create the derived classes Car and Truck. Both of them inherit the data members of Vehicle.

Class Car has the following properties:

Data member:
-	Number_Passengers

Constructor:
-	Default constructor -> Records the data of the base/derived class

Member function:
-	Display() -> Outputs all the data
-	Boarding() -> Increases the number of passengers

Class Truck has the following properties:

Data member:
-	Tonnes

Constructor:
-	Default constructor -> Records the data of the base/derived class

Member function:
-	Display() -> Outputs all the data
-	Loading() -> Increases the weight


Create two arrays in the main program.
The first array can hold 3 cars, the second array can hold 2 trucks.
Create 3 instances of each of the two arrays. 
Then call the functions boarding and loading of all instances, whereby the input of the required data is queried in the main function.
Finally, output all data again.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Vehicle
{
    protected:
    string brand;
    int mileage;
};

class Car :public Vehicle
{
    private:
        int passenger;

    public:
        Car ()
        {
            cout << "A new car has been created." << endl;
            cout << "Brand: ";
            cin >> brand;
            cout << "Passenger: ";
            cin >> passenger;
        }

        void boarding (int persons)
        {
            passenger +=persons;
        }

        void display()
        {
            cout << "Brand: " << brand << endl;
            cout << "Passenger: " << passenger << endl;
        }
};
class  Truck : public Vehicle
{
private:
    float tonnes;
public:
    Truck()
    {
        cout << "A new Truck has been created. " << endl;
        cout << "Brand: ";
        cin >> brand;
        cout << "Tonnes: ";
        cin >> tonnes;
    }

    void loading (float weight)
    {
        tonnes += weight;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Tonnes : "<< tonnes << endl;
    }
};
int main (){
    Car cars[3];
    Truck trucks[2];

    int persons;
    float weight;

    cout << endl << endl;

    for (int i =0 ; i<3 ; i++)
    {
        cout << "car number:" << i+1 << endl;
        cout << "Number of passengers boarding: ";
        cin >> persons;
        cars[i].boarding(persons);
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "truck number: " << i+1 << endl;
        cout << "loading the truck. insert weight (in tonnes) : ";
        cin >> weight;
        trucks[i].loading(weight);
    }
    cout << endl <<endl ;
    for (int i=0 ; i<3; i++)
    {
        cout << "Display truck number: "<< i+1<< endl;
        trucks[i].display();

        return 0;
    }

}