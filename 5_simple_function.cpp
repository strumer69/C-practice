// write a code to multiply 2 number
// use the function--> int multiply
// use the function --> void Show_Result
#include <iostream>
using namespace std;

int multiply (int a,int b){
    return a*b;
}
void show_result(int a){
    cout << "result=" <<  a << endl;
}
int main(){
    int num1 = 3 , num2 = 4;
    int my_output = multiply(num1,num2);
    show_result(my_output);


}