#include <iostream>
#include <cstdlib>
using namespace std;

//global variable to have  participants limitation 
int program_course_participants=0;
int database_course_participants=0;
int software_course_participants=0;

//Parent class (PERSON) of two children (student and lecturer)

class PERSON
{
protected:
    string FirstName;
    string SurName;
    string Email;

public:
    PERSON()
        {
            FirstName = "";
            SurName="";
            Email="";
           
        }
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
    STUDENT()
    {
        FirstName = "";
        SurName="";
        Email="";
        MatriculationNumber=0;
        University="";
    }
    
    STUDENT(string FN, string SN, string EM, unsigned int MN, string UN)
        : PERSON(FN, SN, EM), MatriculationNumber(MN), University(UN) {}
    
    // counter defining
    static int counter;

    void setName(string n)
    {
        FirstName = n;
    }

    string getName()
    {
        return FirstName;
    }


    void setSurName(string sn)
    {
        SurName = sn;
    }
    string getSureName()
    {
        return SurName;
    }

    void setEmail(string em)
        {
            Email = em;
        }
    string getEmail()
        {
            return Email;
        }
        

    void uniSetter(string uni)
        {
                University= uni;
        }
    string getUni()
        {
            return University;
        }
        
        
        
    void matNoSetter(unsigned int mn)
        {
            MatriculationNumber = mn;
        }
    unsigned int MatGetter()
        {
            return MatriculationNumber;
        }
    
};

class COURSE
{
private:
    string CourseName;
    LECTURER Lecturer;

public:

    COURSE(string CN, LECTURER LEC) : CourseName(CN), Lecturer(LEC) {}
};




//counter initializing
int STUDENT ::counter =0;

//function prototypes:
void addStudentData(STUDENT arr[]);//rename to AllParticipants
void addCourse(STUDENT arr[]);
void showItem(STUDENT arr[]);//rename to showAllItem

//Implementatin
void addStudentData(STUDENT arr[])
{
        cout << "----Welcome to Course Registration----" << endl << endl;
        cout << "--Please Enter the Required Data--" << endl;
        
        
        cout << "FirstName: " << endl;
        string name;
        cin >> name;
        arr[STUDENT::counter].setName(name);

        cout << "SurName: " << endl;
        string sureName;
        cin >> sureName;
        arr[STUDENT::counter].setSurName(sureName);

        cout << "Email adress: " << endl;
        string Email_;
        cin >> Email_;
        arr[STUDENT::counter].setEmail(Email_);

        cout << "Matriculation Number : " << endl;
        unsigned int Matriculation_;
        cin >> Matriculation_;
        arr [STUDENT::counter].matNoSetter(Matriculation_);
        //---

        STUDENT::counter ++;
        cout << "The student added" << endl <<endl <<endl;
    
}


void showItem(STUDENT arr[]){

    for (int i=0; i < STUDENT ::counter; i++){
        cout << "firstName: " << arr[i].getName()<< endl;//
        cout << "SureName: " << arr[i].getSureName()<< endl;
        cout << "Email: " << arr[i].getEmail()<< endl;
        cout << "University: " << arr[i].getUni()<< endl;
        cout << "Matriculation: " << arr[i].MatGetter()<< endl;
        cout << endl;
    }
}



int main()
{
    LECTURER lecturer1("Ali", "Rezaee", "Ali.Rezaee@gmail.com", "Prof.");
    LECTURER lecturer2("Saeed", "Zare", "Saeed.Zare@gmail.com", "Dr.");
    LECTURER lecturer3("Mostafa", "Danesh", "Mostafa.Danesh@gmail.com", "Prof.");

    COURSE programming("Programming", lecturer1);
    COURSE database("Database", lecturer2);
    COURSE software_engineering("Software_engineering", lecturer3);

    // STUDENT student1("","","",0,"");
    STUDENT studentsOfProgramming[10];
    STUDENT studentsOfDatabase[10];
    STUDENT studentsOfSoftware[10];


    do
    {
        cout << "-----MENU-----" << endl;
        cout << "[1] Register for the course" << endl;
        cout << "[2] Output of one/all courses with data of participants" << endl;
        cout << "[3] Output of all courses that are not fully booked yet" << endl;
        cout << "[4] Exit" << endl;
        cout << endl;
        cout<<"Please select: " << endl;
        int select;
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "(registration) selected" << endl;//inja
            cout << "University name: " << endl;
            cout << "1: if you are from DIT university." << endl;
            cout << "2: if you are from other university." << endl;//inja
            // string University_;
            int uni;
            cin >> uni;

            if(uni==1){
                cout<<"you can choose more than 1 courses"<< endl;
                for (int i=0; i<3;i++){          
                    cout << "select course name:"<< endl;
                    cout << "1: Programming Lab" << endl;
                    cout << "2: Database " << endl;
                    cout << "3: SorEngineering" << endl;
                    cout << "4: Finish Course Election" << endl;
                    cout << "please select:"<< endl;
                    int course_select;
                    cin >> course_select ;
                    
                    if (course_select==1){
                        program_course_participants++;
                        cout << " programming participants till now:"
                        << program_course_participants<<endl;

                        if (program_course_participants ==10){
                            cout << "the capacity in programming course is full"<< endl;
                        }else{
                            cout << "program lab selected" << endl;
                            addStudentData(studentsOfProgramming);
                        }
                    }else if(course_select==2){
                        database_course_participants++;
                        cout << " DataBase participants till now:"
                        << database_course_participants<<endl;

                        if (database_course_participants ==10){
                            cout << "the capacity in Database course is full"<< endl;
                        }else{
                            cout << "Database course selected" << endl;
                            addStudentData(studentsOfDatabase);
                        }
                    }else if(course_select==3){
                        software_course_participants++;
                        cout << " SoftWare participants till now:"
                        << software_course_participants<<endl;

                        if (software_course_participants ==10){
                            cout << "software_engineering course is full"<< endl;
                        
                        }else{
                            cout << "software_engineering course selected" << endl;
                            addStudentData(studentsOfSoftware);
                        }
                        
                    }else if (course_select==4){
                        true;
                        break;
                    }
                }
            } else if(uni== 2) { 
                
                cout<< endl <<endl<< endl << "you can choose only one course" << endl;
                cout << endl << endl;
                cout << "select course name:"<< endl;
                cout << "1: Programming Lab" << endl;
                cout << "2: Database " << endl;
                cout << "3: SorEngineering" << endl;
                cout << "4: Finish Course Election" << endl;
                cout << "please select:"<< endl;
                int course_select;
                cin >> course_select ;
                
                if (course_select==1){

                    program_course_participants++;
                    cout << " programming participants till now:"
                    << program_course_participants<<endl;

                    if (program_course_participants ==10){
                        cout << "the capacity in programming course is full"<< endl;
                        
                    }else{

                        cout << "program lab selected" << endl;
                        addStudentData(studentsOfProgramming);
                    }
                    
                }else if(course_select==2){
                    database_course_participants++;
                    cout << " DataBase participants till now:"
                    << database_course_participants<<endl;

                    if (database_course_participants ==10){
                        cout << "the capacity in Database course is full"<< endl;
                    
                    }else{
                            
                        cout << "Database course selected" << endl;
                        addStudentData(studentsOfDatabase);
                    }
                    
                }else if( course_select==3){

                    software_course_participants++;
                    cout << " SoftWare participants till now:"
                    << software_course_participants<<endl;

                    if (software_course_participants ==10){
                        cout << "software_engineering course is full"<< endl;
                
                    }else{
                            
                        cout << "software_engineering course selected" << endl;
                        addStudentData(studentsOfSoftware);
                    }   
                }
            }
            break;
        case 2:
            
            cout << "Course with participants student details:" << endl;
            cout << "****** COURSE DETAIL*****" <<endl;
            cout << "Programming: "<<endl;
            showItem(studentsOfProgramming);
            cout<< "--------------------------------------------"<<endl;
            cout << "Database: "<<endl;
            showItem(studentsOfDatabase);
            cout<< "--------------------------------------------"<<endl;
            cout << "SoftwareEngineering: "<<endl;
            showItem(studentsOfSoftware);
            cout<< "--------------------------------------------"<<endl;
            break;

        case 3:
            cout << "****** FREE CAPACITY OF COURSES*****" <<endl;
            cout << "Programming Free Capacity: "<<endl;
            cout << 10-program_course_participants <<endl;
            cout<< "--------------------------------------------"<<endl;
            cout << "Database Free Capacity: "<<endl;
            cout << 10-database_course_participants <<endl;
            cout<< "--------------------------------------------"<<endl;
            cout << "SoftwareEngineering Free Capacity: "<<endl;
            cout << 10-software_course_participants <<endl;
            cout<< "--------------------------------------------"<<endl;
            break;   
        }
        
 
    } while (select != 0); 

    return 0;
}