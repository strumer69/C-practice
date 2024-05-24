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

    void Request_Data()
    {
        cout << "----Welcome to Course Registration----" << endl
             << endl;
        cout << "--Please Enter the Required Data--" << endl;
        cout << "SurName: " << endl;
        cin >> SurName;
        cout << "FirstName: " << endl;
        cin >> FirstName;
        cout << "Email adress: " << endl;
        cin >> Email;
        cout << "from DIT university(y)other Universities(n) ?" << endl;
        string uni;
        cin >> uni;
    };


    PERSON(string FN, string SN, string EM) : FirstName(FN), SurName(SN), Email(EM) {}
};

class LECTURER : public PERSON
{
private:
    string AcademicTitle;

public:
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
    // STUDENT() { Request_Data(); };

    STUDENT(string FN, string SN, string EM, unsigned int MN, string UN)
        : PERSON(FN, SN, EM), MatriculationNumber(MN), University(UN) {}

    string UniversityNameGetter()
    {
        return University;
    }

    void display_Info()
    {
        cout << "Student: " << MatriculationNumber << "-";
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

    STUDENT student1;

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
            // Here you can put the code for registering a student
            // student1.Request_Data();
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