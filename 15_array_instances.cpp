//do according to parctice 14
// Create two instances each of the class Animal (from "Exercise 1 - Farm") as an array.
// Assign data to each instance and then output the data of all instances on the screen.
//read the file--> Exercise1-farm.txt
#include <iostream>
#include <cstdlib>
using namespace std;

class ANIMAL
{
    private:
    float weight;
    float daily_price;
    float revenue;

    public:
    void request_data(){
        cout << "what is the weight of animal?" << endl;
        cin >> weight;
        cout << "what is daily price?" << endl;
        cin >> daily_price;
    }
    void calculate_revenue(){
        revenue=weight *daily_price;
        cout << "revenue is = "<< revenue <<endl;
    }
};
int main(){
    ANIMAL animals[2];
    animals[0].request_data();
    animals[0].calculate_revenue();
    cout << "----" << endl;
    animals[1].request_data();
    animals[1].calculate_revenue();

return 0;
}