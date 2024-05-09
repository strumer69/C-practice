#include <iostream>
#include <cstdlib>
using namespace std;

//Function Declaration
void welcome();
int counter = 0;// global variable

int main(){
    welcome();
    welcome();
return 0;
}

//Function Definition
void welcome()
{
    cout << "welcome to Function Tutorial"<< endl;
    counter++;
}