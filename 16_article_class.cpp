/*
Create a class called Article. The class should have the following characteristics:

-	Name
-	Price

The class should contain the following member functions:

-	get_ Name() -> returns the name of the article
-	get_ Price() -> returns the price of the article
-	set_ Name() -> sets the name of the article
-	set_ Price() -> sets the price of the article
-	Enter_data() -> set the name and price of the article using setter functions
-	Show_data() -> returns the name and the price of the article
-	Calculate_TotalPrice() -> A quantity is passed to the function
				   The total price (Quantity*Price) is calculated.

Create an object of type Article in the main program. 
Enter the data and then output it again. 
The user should then be able to enter a quantity, which will determine the total price.

*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Article
{
    private:
        string name;
        float price;
    public:
        string get_name(){
            return name;
        }

        float get_price(){
            return price;
        }

        void set_name(){
            cout << "please enter a name:" << endl;
            cin >> name;
        }

        void set_price(){
            cout << "please enter the price:" << endl;
            cin >> price;
        }

        void enter_data(){
            set_name();
            set_price();
        }

        void show_data(){
            cout << "the name is:" << get_name() << endl;
            cout << "the price is:" << get_price() << endl;
        }

        void calculate_total_price(){
            cout << "enter the quantity:" << endl;
            int quantity ;
            float total_price;
            cin >> quantity;
            total_price = quantity*price;
            cout << "the total price is: " << total_price << endl;
        }
};

int main(){
    Article article1;
    article1.enter_data();//covers both set_name & set_price
    article1.show_data();//covers both get_name & get_data
    article1.calculate_total_price();
}