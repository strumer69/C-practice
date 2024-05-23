#include <iostream>
#include <cstdlib>
using namespace std;


//Parent of two child (student and lecturer)
class PERSON
{
    protected:
        string FirstName;
        string SurName;
        string Email;
    public:
    
    // Declaration of registration function member.
    // It is being called if Number 1 in Menu pressed.
    // void registeration();//

    void display_Info()
    {
        cout <<"First Name:" << FirstName << "-";
        cout << "Sure Name:" << SurName << "-";
        cout << "Email: " << Email <<  "-" << endl;
    }

    //For detecting repetitive emails(CHECK it)
    string EmailGetter()
    {
        return Email;
    };

    void Request_Data()
    {
    cout << "----Welcome to Course Registration----" << endl << endl;
    cout << "--Please Enter the Required Data--"<< endl;
    cout << "SurName: " << endl;
    cin >> SurName;
    cout << "FirstName: " << endl;
    cin >> FirstName;
    cout << "Email adress: "<< endl;
    cin >> Email;
    cout << "from DIT university(y)other Universities(n) ?"<< endl;
    string uni;
    cin >> uni;
    }

    PERSON()
    {
        Request_Data();
    };
    
    //Constructor for the class PERSON
    PERSON(string FN, string SN , string EM):FirstName(FN),SurName(SN),Email(EM){}

};

//Definition of above declared
// void PERSON::registeration()
    // if ((uni=="y")||(uni =="Y"))
    //     {
    //         cout << "you can choose more than one lecture registration."<< endl;
    //     }
    // else if ((uni=="n")||(uni=="N"))
    //     {
    //         cout << "you can have only one lecture registration." << endl;
    //     }
    // else 
    //         cout << "Incorrect Input!!!"<< endl;

    // cout << "----Choose one of the following courses ---" << endl << endl;
    // cout << "1: Programming " << endl;
    // cout << "2: Database " << endl;
    // cout << "3: Software_engineering " << endl<< endl;

    // cout << "Please Select: " << endl;
    // int lecture_choice;
    // cin >> lecture_choice;
    // if (lecture_choice==1)
    // {
    //     cout<< "oo"<< endl;
    // }
    // cout << "--Congradulation---your registration was successfull--";

//Child of PERSON
class LECTURER :public PERSON 
{
    private:
        string AcademicTitle;
    public:
    
    //constructor
    LECTURER(string FN , string SN, string EM, string AT )
    :PERSON(FN,SN ,EM),AcademicTitle(AT){}


    //function member to return academic title (where to use?)
    string AcademicTitleGetter()
    {
        return AcademicTitle;
    }

    //display_info -- override
    void display_Info()
    {
        cout << "Academic Title: "<< AcademicTitle << "-";
        cout <<"First Name:" << FirstName << "-";
        cout << "Sure Name:" << SurName << "-";
        cout << "Email: " << Email <<  "-"<< endl;
    }

};


//Child of PERSON
class STUDENT :public PERSON
{
    private:
        unsigned int MatriculationNumber;
        string University;

    public:
    STUDENT()
    {
        Request_Data();
    };
    //Constructor
    STUDENT(string FN,string SN,string EM,unsigned int MN,string UN)
    :PERSON(FN,SN,EM),MatriculationNumber(MN),University(UN){}

    string UniversityNameGetter()
    {
        return University;
    }

     //display_info -- override
    void display_Info()
    {
        cout << "Student: "<< MatriculationNumber << "-";
        cout << "University Name: "<< University << "-";
        cout <<"First Name:" << FirstName << "-";
        cout << "Sure Name:" << SurName << "-";
        cout << "Email: " << Email <<  "-"<< endl;
    } 
};

class COURSE
{
    private:
        string CourseName;
        LECTURER Lecturer;// lecturer stored as a dataMember of type LECTURER

    public:

        //Static to count participants
        static int Number_Of_participants;

        //Constructor
        COURSE(string CN, LECTURER LEC): CourseName(CN),Lecturer(LEC){};
};

int COURSE:: Number_Of_participants=0;


int main(){

    LECTURER lecturer1("Ali","Rezaee","Ali.Rezaee@gmail.com","Prof.");
    LECTURER lecturer2("Saeed","Zare","Saeed.Zare@gmail.com","Dr.");
    LECTURER lecturer3("Mostafa","Danesh","Mostafa.Danesh@gmail.com","Prof.");

    COURSE programming("Programming",lecturer1);
    COURSE database ("Database" , lecturer2);
    COURSE software_engineering ("Software_engineering" , lecturer3);

    STUDENT students[1];
    
    do
    {
        cout << "-----MENU-----" << endl;
        cout << "[1] Register for the course" << endl;
        cout << "[2] Output of one/all courses with data of participants" << endl;
        cout << "[3] Output of all courses that are not fully booked yet" << endl;
        cout << "[0] Exit" << endl;
        cout << endl << "Please select: ";
        int select;
        cin >> select;

        switch(select)
        {
        case 1:
            {
                cout <<"(registration) selected"<< endl; 
                // students[0].Request_Data();
                break;
            }
        case 2:
            {
                cout << "Course with participants student details:" <<endl;
                break;
            }
        case 3:
            {
                cout << "here you can see free capacity of courses:" << endl;
                break;
            }

        }
    }while(select!= 0);
    return 0;
}
    


