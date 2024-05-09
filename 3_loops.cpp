#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    cout << endl << "program Start FOR ... "<< endl << endl;
    int i ;
    cout << "1 FOR loop " << endl;
        for (i=0; i < 5 ; i++)
            {
            cout << "increase "<< i <<endl;
            }
    cout << " 2 FOR loop " << endl;
        for (int j=6; j>0 ; j--)
            {
              cout << "Decrease "  << j << endl;
            }
return 0;
}