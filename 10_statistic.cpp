#include <iostream>
#include <cstdlib>
using namespace std;
class Sheep
{
    private:
    static int counter; //declaration 

    public:
    Sheep(){counter++;};  //definition of constructr
                         // the member variable is increased by 1 in function body
    void show (){cout << "show number if sheep:" << counter<< "\n\n";}
};
int Sheep::counter =0; //initialization of a membervariable outside of the class

int main()
{
    Sheep Sheep1;
    Sheep Sheep2;
    Sheep Sheep3;

    Sheep2.show();
}