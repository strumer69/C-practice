// Create a shopping list for a maximum of 10 products.
// For this purpose, the product name and price should be entered and then saved in an array.
// Create a menu with the following functions:

// - New item
// - Show items
// - Sort items
// - Exit

// It should also be possible to output the current number of items in the menu.
// Sorting is based on the price (the name should be sorted accordingly)
#include <iostream>
#include <cstdlib>
using namespace std;

//Shopping list

//Declaration of global variables
string product[10];
float price[10];
int counter = 0 ;

//Function prototypes
void addItem();
void showItem();
void sortItem();

//adds new item to the shopping list
void addItem()
{
    if (counter < 10 )
    { //The array can only hold ten items
        string name;
        float value;
        cout <<"Please enter the name of the item: "<< endl;
        cin >> name;
        cout <<"Please enter the price of the item:" << endl;
        cin >> value;
        product[counter] = name;
        price[counter] = value;
        counter++;
        cout << "The  item has been added." << endl;
    }
    else
    {
        cout << "The list is full. you can not add any more Item" << endl;
    }
}

// Outputs all items and their prices
void showItem()
{
    for (int i= 0; i < counter; i++)
    {
        cout << "name: " << product[i] <<endl;
        cout << "price: " << price[i] << endl;
        cout << endl;
    }
}

//Sorts all elements according to the price in an ascending order
void sortItem()
{
    for(int i = 1; i < counter; i++){
        for (int j = 0; j < i; j++){

            if(price[j]> price[i]){
                float value;
                string item;
                value = price[j];
                item = product[j];
                product[j] = product[i];
                price[i] = value;
                product[i] = item;
            }
        }
    }
    cout << "The items have been sorted." <<endl;
}

int main (int argc, char *argv[])
{
    int choice;
    do
    {
        cout <<"*******************shopping list******"<<endl;
        cout << "Number of Items: " <<counter << endl << endl;
        cout <<" add Item (1) " <<endl;
        cout <<"Show items (2)" << endl;
        cout << "sort items (3) " << endl;
        cout << "Exit (0) " << endl << endl;
        cout << "Selection:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:{
            system ("cls");
            addItem();
            break;
        }
        case 2:{
            system ("cls");
            showItem();
            break;
        }
        case 3:{
            system ("cls");
            sortItem();
            break;
        }
        }
        if (choice !=0){
            system("cls");
        }
    } while (choice !=0);
    return 0;
    
}