// During the year, you have recorded the average temperature of the individual months. You now want to write a program that helps you to output this data. Write a program that outputs a menu. The following options should be available:

// - When you are entering a month, the corresponding average temperature should be displayed.
// * The input should be possible as text input (e. g. "August")
// * and as a selection (e. g. selection: 8 → temperature of August)
// - Calculate the average temperature of all months.
// - The hottest month of the year is to be output.
// - All months should be output in an ascending order with their temperatures.
// - If you enter 0, a goodbye message should appear and the program terminates.
// - In case the user selection in the menu is non-existent, a message is to be output.

// You can use fictitious figures for the temperatures of the individual months.
#include <iostream>
#include <cstdlib>
using namespace std;
void outputColdWarm(string,int);
void yearAverage(int[]);
int warmestMonthOfTheYear(int[]);
void sort(string[],int[]);

int main(int argc , char** argv){
    string month[] = {"January" ,"February","March"
                       ,"April" , "May", "Jun"
                      , "July","August","September"
                      , " October" , "November", "December"};
    int temperature[]= {-1,0,4,8,13,17,21,24,19,11,9,5};
    int input =1 ;
    int tmp = 0;
    while (input !=0)
    {
        system ("cls");
        cout <<"[1] show temparature of a month (text input) " << endl;
        cout <<"[2] show temparature of a month (selection) " << endl;
        cout <<"[3] show average temperature " <<endl;
        cout <<"[4] show warmest month" <<endl;
        cout <<"[5] show temparature sorted" <<endl;
        cout <<"[0] Exit" << endl << endl;
        cout <<"Please make a selection";

        cin >> input;
        switch ( (input))
                {
        case 1:
        { 
            system("cls");
            string input_month;
            tmp = 0;
            cout << "Please enter a month : ";
            cin >> input_month;

            for (int i = 0 ; i < 12 ; i++)
            {
                if (input_month == month[i])
                {
                    tmp = 1;
                    outputColdWarm(month[i], temperature[i]);
                    
                    break;
                }
            }
            if (tmp != 1)
            {
                cerr << endl << "Month not found" << endl << endl;
            }
            system ("pause");
            break;
        }
        case 2:
        {
            system ("cls");
            for (int i = 0 ; i < 12 ; i ++)
            {
                cout << "[" << i+1 << "]" << month[i]<< endl;
            }
            cout << endl << " Please make a selection : " ;
            cin >> tmp;
            if (tmp > 12 || tmp <1) 
            {
                cerr << endl << "Month not Found" << endl << endl;
            }
            else 
            {
                outputColdWarm (month[tmp-1], temperature[tmp-1]);
            }
            system ("pause");
            break;
        }
        case 3:
        {
            system("cls");
            yearAverage(temperature);
            system ("pause");
            break;
            case 4:
            {
                system("cls");
                tmp = warmestMonthOfTheYear(temperature);
                cout<< "the warmest month of the year is: "<< month[tmp ]<<
                "with" << temperature[tmp] << "degree celsius" << endl <<endl;
                system ("pause");
                break;
            }
            case 5 :
            {
                system ("cls");
                sort(month , temperature);
                system ("pause");
                break;
            case 0:
            cout << endl << "Good bye" << endl;
            break;
            }
            default:
            {
                cout << endl << "Incorrect input!" << endl << endl;
                system ("pause");
            }
        }
    }
                return 0 ;
}
}
void outputColdWarm(string input_month , int temperature){
        cout << endl << " IN " << input_month << "the average temperature was "<<
        temperature << "degree celsius" ;

        if (temperature > 0)
        cout << "warm";
        else if ( temperature < 0)
        cout << "kalt";
        cout << endl << endl;
}
    void yearAverage (int temp[])
    {
        float summe = 0;
        for (int i = 0 ; i < 12 ; i++)
        {
            summe = summe + temp[i];
        }
        cout << "the average annual temperature is"<<
        (summe/12) << " degree celsisus" << endl <<endl;
    }
     int warmestMonthOfTheYear (int temp[])
     {
        int max = 0;
        int z = 0;
        for (int i = 0 ; i< 12 ; i++)
        {
            if (temp[i]> max)
            {
                max = temp[i];
                z=i;
            }
        }
        return z;
     }

     void sort (string mon [] , int temp[])
     {
        string tmp_monat;
        int tmp_temperature;
        string sortedMon[12];
        int sortedTemp[12];
        // store the original values in another arrat
        //otherwise we would override the original values
        for (int i=0 ; i < 12 ; i++)
        {
            sortedMon[i] = mon[i];
            sortedTemp[i]=temp[i];
    
        }
        for(int i =0; i <12 ; i ++)
        {
            for (int j =(i+1); j<12 ; j++)
            {
                if(sortedTemp[i] > sortedTemp[j])
                {
                tmp_monat = sortedMon [i];
                sortedMon[i] = sortedMon[j];
                sortedMon[j] = tmp_monat;

                tmp_temperature = sortedTemp[i];
                sortedTemp[i] = sortedTemp[j];
                sortedTemp[j] = tmp_temperature;
                }
            }
        }
     
        int x = 0;
        do 
     {
        cout << sortedTemp[x]<< "degree Celsius in month "<< sortedMon[x]<< endl;
        x++;
     }
     while(x<12);
     cout << endl;
    }
