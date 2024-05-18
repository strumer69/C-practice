#include <iostream>
#include <cstdlib>
using namespace std;

class ACCOUNT
{
private:
    int ACCOUNTBALANCE;
public:
    bool CHANGE_BALANCE(int);
    int READ_ACCOUNTBALANCE();
};

bool ACCOUNT::CHANGE_BALANCE(int INPUT)
{
    if((INPUT >=0)&&(INPUT <=100000))
    {
        ACCOUNTBALANCE =INPUT;
        return(1);
    }
    return(0);
}

int ACCOUNT :: READ_ACCOUNTBALANCE()
{
    return(ACCOUNTBALANCE);
}

int main(){
    ACCOUNT TESTACCOUNT; // creat on object
    int BALANCE = 0;
    TESTACCOUNT.CHANGE_BALANCE(BALANCE);
    int AUXILIARY = 0;
    cout <<"A C C O U N T M A N A G E M E N T"<< endl;
    do
    {
        cout <<"1=CHANGE ACCOUNT BALANCE\n";
        cout <<"2=READ ACCOUNT BALANCE\n";
        cout <<"0= EXIT Program" <<endl <<endl;
        cout <<"Please Select: ";
        cin >> AUXILIARY;

        switch (AUXILIARY)
        {   
        case 1:
        cout << "NEW BALANCE: ";
        cin >> BALANCE;
        if(TESTACCOUNT.CHANGE_BALANCE(BALANCE))
            cout<< "BALANCE has been changed." <<endl << endl;
        else
            cout << "BALANCE has not been changed." << endl << endl;
        break;
        case 2:
        cout <<"Actual BALANCE: ";
        cout << TESTACCOUNT.READ_ACCOUNTBALANCE()<< endl <<endl;
        break;
        }
    }   while (AUXILIARY);
}
