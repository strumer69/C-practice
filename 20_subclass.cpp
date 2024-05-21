/*
Given is the following program: 

#include <iostream> 
#include <cstdlib>

using namespace std;

class Animal 
{
public: 
	float Number; 
	float Weight;

	void displaydata()
	{ 
		cout <<"There are "<<Number << " animals with " <<Weight <<" kg each availableÒ<<endl; 
	} 
}; 

int main()
{ 
	Animal Pig; 
	Pig.Number=50; 
	Pig.Weight=20; 
	Pig.displaydata(); 

	system("PAUSE");
	return 0; 
}; 

Modify the program as follows:

There should be 3 classes in the program:

- The base class Animals (here only the number of animals is to be administered) 
- The subclass SlaughterCattle (with the data member weight)
- The subclass DairyCattle (with the data member milkyield)

Use a constructor with a member initialization list that attaches values to the data members.
Create an instance of the class SlaughterCattle and DairyCattle and display the data on the screen.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Animal
{
    protected:
    float number;

    public:
    Animal(){};//default constructor
    Animal(int numb):number(numb){};//constructor with member initialization list
};

class SlaughterCattle: public Animal
{
private:
    float weight;

public:
    SlaughterCattle(int numb , float wei) : Animal(numb), weight(wei){};
    void displaydata()
    {
        cout<< "there is " << number << "animal with " << weight << "kg each available " << endl;}
    };

    class DairyCattle :public Animal{
        private:
        float milkyield;
        public:
        DairyCattle(int numb , float m_y): Animal (numb),milkyield (m_y){};
        void displaydata()
        {
            cout << "there are " << number << " animal with an average milk yield of" << milkyield <<"L available" << endl;
        }
    };

int main()
{
    SlaughterCattle Pig(100,50);
    Pig.displaydata();

    DairyCattle Cow(25,5);
    Cow.displaydata();

    return 0;
}
