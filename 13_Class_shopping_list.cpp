#include<iostream>
#include<cstdlib>
using namespace std;

//Shopping list item
class item
{
private:
    float price;
    string name;
public:
    item()
    {
        name = "";
        price = 0;
    }
    
    static int counter;

    void setName(string n)
    {
        name = n;
    }

    void setPrice(float p)
    {
        price = p;
    }

    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }
};

int item ::counter =0;

//Function prototypes
void addItem(item arr[]);
void showItem(item arr[]);
void sortItem(item arr[]);

//add new item to shopping list
void addItem(item arr[])
{
    if(item::counter < 10 )
    { //the array can only hold ten items
        string name;
        float value;
        cout << "please enter the name of the Item:" << endl;
        cin >> name;
        cout <<endl;
        cout << "please enter the price of the Item:" << endl;
        cin >> value;
        cout << endl;
        arr[item::counter].setName(name);
        arr[item::counter].setPrice(value);
        item::counter ++;
        cout << "The Item has been added." << endl;
    }
    else{
        cout << "The list is full"<< endl;
    }
}

//Outputs all items and their prices
void showItem(item arr[]){
    for (int i=0; i < item ::counter; i++){
        cout << "name: " << arr[i].getName()<< endl;
        cout << "price: " << arr[i].getPrice()<< endl;
        cout << endl;
    }
}

// sorts all elements according to the price in an ascending order

void sortItems(item arr[])
{
   for(int i = 1;i<item::counter;i++){ //Take an element of the array (not necessary the first one)
     for(int j = 0; j < i;j++){  //and all the items that precede this item in the list
        if(arr[j].getPrice() > arr[i].getPrice()){ //and check if all preceding elements are smaller. If one is larger than we swap them.
           float value;
           string name;  //The name of the corresponding product must also be swapped in the same way.
           value = arr[j].getPrice();
           name = arr[j].getName();
           arr[j].setPrice(arr[i].getPrice());
           arr[j].setName(arr[i].getName());
           arr[i].setPrice(value);
           arr[i].setName(name);
        }
     }
   }
   cout << "The items have been sorted." << endl;
}
int main()
{
    item products[10];
    int choice;
    do{ //Show menu first
       cout << "**************** Shopping list ********** " << endl << endl;
       cout << "Number of items: " << item::counter << endl << endl;
       cout << "Add item (1) " << endl;
       cout << "Show items (2) " << endl;
       cout << "Sort items (3) " << endl;
       cout << "Exit (0) " << endl << endl;

       cout << "Selection: ";
       cin >> choice;
       cout << endl;

       //Do something depending of the selection
       switch(choice){
          case 1:{
               system("cls");
                addItem(products);
                break;
          }
          case 2:{
               system("cls");
                showItem(products);
                break;
          }
          case 3:{
               system("cls");
                sortItems(products);
                break;
          }
       }
       if(choice != 0){ //As long as it has not been decided to terminate the program.
          system("PAUSE");
          system("cls");
       }
    }while(choice != 0); //The menu is displayed until the program is exited.
    return EXIT_SUCCESS;
}