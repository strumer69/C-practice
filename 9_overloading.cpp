#include <iostream>
#include <cstdlib>
using namespace std;

class ACCOUNT
{
    private:
    float ACCOUNTBALANCE;

    public:
    bool CHANGE_BALANCE(float);
    bool CHANGE_BALANCE(float,float);
    float READ_ACCOUNTBALANCE();
};

bool ACCOUNT::CHANGE_BALANCE(float INPUT)
{
    if((INPUT >= 0)&& (INPUT <= 100000))
    {
        ACCOUNTBALANCE=ACCOUNTBALANCE +INPUT;
        return (1);
    }
    return (0);
}

bool ACCOUNT :: CHANGE_BALANCE(float INPUT ,float FACTOR)
{
    if ((INPUT >= 0) && (INPUT <= 100000))
    {
        ACCOUNTBALANCE = ACCOUNTBALANCE +(INPUT * FACTOR);
        return (1);
    }
    return (0);
}

float ACCOUNT ::READ_ACCOUNTBALANCE()
{
    return (ACCOUNTBALANCE);
}

int main()
{
    ACCOUNT shahram;
    shahram.CHANGE_BALANCE(0);
    int AUXILIARY=0;
    float BALANCE=0 , FACTOR=0;

    cout << "a c c o u n t   m a n a g e m e n t"<< endl;
    do
    {
        cout << "1= change account balance without Factor\n";
        cout <<"2= change account balance with Factor \n";
        cout <<"3= Read Balance\n";
        cout << "0= exit\n";
        cout << "Please select:\n";
        cin>> AUXILIARY;

        switch (AUXILIARY)
        {
        case 1:
            cout << "what is new balnce:\n ";
            cin >> BALANCE;
                if(shahram.CHANGE_BALANCE(BALANCE))
                    cout << "Balance changed. \n\n";
                else
                    cout << "Balance did not changed \n\n";
            break;
                    
        case 2:
            cout<< "what is new balance:\n";
            cin >> BALANCE;
            cout <<" what is yur factor: \n";
            cin >> FACTOR;
                if (shahram.CHANGE_BALANCE(BALANCE,FACTOR))
                cout << "balance changed with factor \n";
                else
                cout << "balance did not changed\n";
            break;
        case 3:
            cout<< "your balance is:\n";
            cout << shahram.READ_ACCOUNTBALANCE()<< "\n\n";
            break;
        case 0:
        cout<<"good Bye\n\n";
        break;
        }
    } while (AUXILIARY);
    
}