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
    ANIMAL pig;
    pig.request_data();
    pig.calculate_revenue();
return 0;
}