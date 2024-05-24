#include <iostream>
#include <cstdlib>
using namespace std;

//Parent of two children (student and lecturer)
class PERSON
{
protected:
    string FirstName;
    string SurName;
    string Email;

public:
    void display_Info()
    {
        cout << "First Name:" << FirstName << "-";
        cout << "Sure Name:" << SurName << "-";
        cout << "Email: " << Email << "-" << endl;
    }

    string EmailGetter()
    {
        return Email;
    };

    PERSON(string FN, string SN, string EM) : FirstName(FN), SurName(SN), Email(EM) {}
};

class LECTURER : public PERSON
{
private:
    string AcademicTitle;

public:
    // PERSON(string FN, string SN, string EM) : FirstName(FN), SurName(SN), Email(EM) {}

    LECTURER(string FN, string SN, string EM, string AT) : PERSON(FN, SN, EM), AcademicTitle(AT) {}

    string AcademicTitleGetter()
    {
        return AcademicTitle;
    }

    void display_Info()
    {
        cout << "Academic Title: " << AcademicTitle << "-";
        cout << "First Name:" << FirstName << "-";
        cout << "Sure Name:" << SurName << "-";
        cout << "Email: " << Email << "-" << endl;
    }
};

class STUDENT : public PERSON
{
private:
    unsigned int MatriculationNumber;
    string University;

public:
    // LECTURER(string FN, string SN, string EM, string AT) 
    //: PERSON(FN, SN, EM), AcademicTitle(AT) {}
    
    STUDENT(string FN, string SN, string EM, unsigned int MN, string UN)
        : PERSON(FN, SN, EM), MatriculationNumber(MN), University(UN) {}

    string UniversityNameGetter()
    {
        return University;
    }

    void Request_Data()
    {
        cout << "----Welcome to Course Registration----" << endl << endl;
        cout << "--Please Enter the Required Data--" << endl;
        cout << "SurName: " << endl;
        cin >> SurName;
        cout << "FirstName: " << endl;
        cin >> FirstName;
        cout << "Email adress: " << endl;
        cin >> Email;
        cout << "from DIT university(y)other Universities(n) ?" << endl;
        // string uni;
        cin >> University;
        if (University=="y"){
            cout << "you can choose more than 1 course:";
        } else{
            cout << "you can choose only 1 course";

        }
        
        cout << "select course name:"<< endl;
        cout << "1: Programming Lab" << endl;
        cout << "2: Database " << endl;
        cout << "3: softwarEngineering" << endl;
        cout << "please select:"<< endl;
        int course_select;
        cin >> course_select ;
        
        switch (course_select)
        {
        case 1:
            cout << "program lab selected" << endl;
            break;
        case 2:
            cout << "Database selected" << endl;

            break;
        case 3:
            cout << "Software selected" << endl;

            break;
        default:
        cout << "wrong selection"<< endl;
            break;
        }
    };

    void display_Info()
    {
        cout << "MatriculationNumber: " << MatriculationNumber << "-";
        cout << "University Name: " << University << "-";
        cout << "First Name:" << FirstName << "-";
        cout << "Sure Name:" << SurName << "-";
        cout << "Email: " << Email << "-" << endl;
    }
};

class COURSE
{
private:
    string CourseName;
    LECTURER Lecturer;

public:
    static int Number_Of_participants;

    COURSE(string CN, LECTURER LEC) : CourseName(CN), Lecturer(LEC) {}
};

int COURSE::Number_Of_participants = 0;

int main()
{
    LECTURER lecturer1("Ali", "Rezaee", "Ali.Rezaee@gmail.com", "Prof.");
    LECTURER lecturer2("Saeed", "Zare", "Saeed.Zare@gmail.com", "Dr.");
    LECTURER lecturer3("Mostafa", "Danesh", "Mostafa.Danesh@gmail.com", "Prof.");

    COURSE programming("Programming", lecturer1);
    COURSE database("Database", lecturer2);
    COURSE software_engineering("Software_engineering", lecturer3);


    // STUDENT(string FN, string SN, string EM, unsigned int MN, string UN)
    //     : PERSON(FN, SN, EM), MatriculationNumber(MN), University(UN) {}

    STUDENT student1("","","",0,"");

    int select; // Move the declaration of select outside the do-while loop

    do
    {
        cout << "-----MENU-----" << endl;
        cout << "[1] Register for the course" << endl;
        cout << "[2] Output of one/all courses with data of participants" << endl;
        cout << "[3] Output of all courses that are not fully booked yet" << endl;
        cout << "[0] Exit" << endl;
        cout << endl
             << "Please select: ";
        cin >> select;

        switch (select)
        {
        case 1:
            cout << "(registration) selected" << endl;
            student1.Request_Data();
            student1.display_Info();

            

            break;
        case 2:
            cout << "Course with participants student details:" << endl;
            // Here you can put the code for displaying course details
            break;
        case 3:
            cout << "here you can see free capacity of courses:" << endl;
            // Here you can put the code for displaying available courses
            break;
        }

    } while (select != 0); // Now the loop will continue until select is 0

    return 0;
}