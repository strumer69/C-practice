#include <iostream>
#include <cstdlib>

int main(){

char choice;
std::cout <<"enter your choice: A,B: ";
std::cin >> choice;
switch (choice){
    case 'A':
    case 'a':
    std::cout<< "choice A selected\n" ;
    break;

    case 'B':
    case 'b':
    std::cout<< "choice B selected\n";
    break;

    default:
    std::cout<< "invalid choice\n";
    break;
    }
return 0;
}