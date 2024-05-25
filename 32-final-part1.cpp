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

    LECTURER(string FN, string SN, string EM, string AT) : PERSON(FN, SN, EM), AcademicTitle(AT) {}

    void display_Info()
    {
        cout << " " << AcademicTitle << " ";
        cout << " " << FirstName << " ";
        cout << " " << SurName << " ";
        cout << "Email: " << Email << " " << endl;
    }
};


//child class (STUDENT) Of parent (PERSON)
class STUDENT : public PERSON
{
private:
    unsigned int MatriculationNumber;
    string University;

public:

    //default constructor
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
    
    // static counter for counting all participants
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
void addStudentData1(STUDENT arr[]);
void addStudentData2(STUDENT arr[]);
void addStudentData3(STUDENT arr[]);
void addCourse(STUDENT arr[]);
void showDetail(STUDENT arr[]);

//function Implementation-1
void addStudentData1(STUDENT arr[])
{
        cout << endl << endl <<endl << endl;
        cout << "----Welcome to Course Registration----" << endl << endl;
        cout << "--Please Enter the Required Data--" << endl;
        
        
        cout << "FirstName: " << endl;
        string name;
        cin >> name;
        arr[program_course_participants-1].setName(name);

        cout << "SurName: " << endl;
        string sureName;
        cin >> sureName;
        arr[program_course_participants-1].setSurName(sureName);

        cout << "Email adress: " << endl;
        string Email_;
        cin >> Email_;
        for (int i;i < program_course_participants;i++){
            if(arr[i].getEmail()==Email_){
                cout<< "repetitive Email!!!"<< endl<< endl;
                break;
            } else{
                arr[program_course_participants-1].setEmail(Email_);
                cout << "Matriculation Number : " << endl;
                unsigned int Matriculation_;
                cin >> Matriculation_;
                arr [program_course_participants-1].matNoSetter(Matriculation_);
                cout << endl << endl <<endl << endl;
                cout << "The student added" << endl <<endl <<endl;
                // increment total number of students
                STUDENT::counter ++;
            }
        }

        
}

//function Implementatin-2
void addStudentData2(STUDENT arr[])
{
        cout << endl << endl <<endl << endl;
        cout << "----Welcome to Course Registration----" << endl << endl;
        cout << "--Please Enter the Required Data--" << endl;
        
        
        cout << "FirstName: " << endl;
        string name;
        cin >> name;
        arr[database_course_participants-1].setName(name);

        cout << "SurName: " << endl;
        string sureName;
        cin >> sureName;
        arr[database_course_participants-1].setSurName(sureName);

        cout << "Email adress: " << endl;
        string Email_;
        cin >> Email_;
        for (int i;i < database_course_participants;i++){
            if(arr[i].getEmail()==Email_){
                cout<< "repetitive Email!!!"<< endl<< endl;
                break;
            } else{
                arr[database_course_participants-1].setEmail(Email_);
                cout << "Matriculation Number : " << endl;
                unsigned int Matriculation_;
                cin >> Matriculation_;
                arr [database_course_participants-1].matNoSetter(Matriculation_);
                cout << endl << endl <<endl << endl;
                cout << "The student added" << endl <<endl <<endl;
                // increment total number of students
                STUDENT::counter ++;
            }
        }

}
//function implementation3
void addStudentData3(STUDENT arr[])
{
        cout << endl << endl <<endl << endl;
        cout << "----Welcome to Course Registration----" << endl << endl;
        cout << "--Please Enter the Required Data--" << endl;
        
        
        cout << "FirstName: " << endl;
        string name;
        cin >> name;
        arr[software_course_participants-1].setName(name);

        cout << "SurName: " << endl;
        string sureName;
        cin >> sureName;
        arr[software_course_participants-1].setSurName(sureName);

        cout << "Email adress: " << endl;
        string Email_;
        cin >> Email_;
        for (int i;i < software_course_participants;i++){
            if(arr[i].getEmail()==Email_){
                cout<< "repetitive Email!!!"<< endl<< endl;
                break;
            } else{
                arr[software_course_participants-1].setEmail(Email_);
                cout << "Matriculation Number : " << endl;
                unsigned int Matriculation_;
                cin >> Matriculation_;
                arr [software_course_participants-1].matNoSetter(Matriculation_);
                cout << endl << endl <<endl << endl;
                cout << "The student added" << endl <<endl <<endl;
                // increment total number of students
                STUDENT::counter ++;
            }
        }
}

void showDetail(STUDENT arr[]){

    for (int i=0; i < 10; i++){
        cout << i+1 << "-  FirstName: " << arr[i].getName();
        cout << " SureName: " << arr[i].getSureName();
        cout << " Email: " << arr[i].getEmail();
        cout << " University: " << arr[i].getUni();
        cout << " Matriculation: " << arr[i].MatGetter()<< endl;
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
        cout << endl <<endl << endl << endl;
        cout << "-----MENU-----" << endl;
        cout << "[1] Register for the course" << endl;
        cout << "[2] Output of one/all courses with data of participants" << endl;
        cout << "[3] Output of all courses that are not fully booked yet" << endl;
        cout << "[4] Exit" << endl<< endl;
        cout<<"Please select: " << endl;
        int select;
        cin >> select;
        switch (select){
            case 1:
                cout <<endl << endl;
                cout << "(registration) selected" << endl;
                cout << "University name: " << endl;
                cout << "1: if you are from DIT university." << endl;
                cout << "2: if you are from other university." << endl;

                
                int uni;
                cin >> uni;

                if(uni==1){
                    cout<<"you can choose more than 1 courses"<< endl;
                    for (int i=0; i < 3; i++){          
                        cout << "select course name:"<< endl;
                        cout << "1: Programming " << endl;
                        cout << "2: Database " << endl;
                        cout << "3: SorEngineering" << endl;
                        cout << "4: Finish Course Election" << endl << endl << endl;
                        cout << "please select:"<< endl;
                        int course_select;
                        cin >> course_select ;
                        
                        if (course_select==1){
                            program_course_participants++;
                            cout << " programming participants till now:"
                            << program_course_participants<< endl<< endl << endl;

                            if (program_course_participants ==10){
                                cout << "the capacity in programming course is full"<< endl;
                            }else{
                                cout << "program lab selected" << endl;
                                addStudentData1(studentsOfProgramming);
                            }
                        }else if(course_select==2){
                            database_course_participants++;
                            cout << endl << endl << " DataBase participants till now:"
                            << database_course_participants<<endl;

                            if (database_course_participants ==10){
                                cout << "the capacity in Database course is full"<< endl;
                            }else{
                                cout << endl << endl << "Database course selected" << endl;
                                addStudentData2(studentsOfDatabase);
                            }
                        }else if(course_select==3){
                            software_course_participants++;
                            cout << endl << endl << " SoftWare participants till now:"
                            << software_course_participants<<endl;

                            if (software_course_participants ==10){
                                cout << "software_engineering course is full"<< endl;
                            
                            }else{
                                cout << "software_engineering course selected" << endl;
                                addStudentData3(studentsOfSoftware);
                            }
                            
                        }else if (course_select==4){
                            
                            break;
                        }
                    }
                } else if(uni== 2) { 
                    
                    cout<< endl <<endl<< endl << "you can choose only one course" << endl;
                    cout << endl << endl;
                    cout << "select course name:"<< endl;
                    cout << "1: Programming " << endl;
                    cout << "2: Database " << endl;
                    cout << "3: SorEngineering" << endl;
                    cout << "4: Finish Course Election" << endl << endl;
                    cout << "please select:"<< endl;
                    int course_select;
                    cin >> course_select ;
                    
                    if (course_select==1){

                        program_course_participants++;
                        cout << endl << " programming participants till now:"
                        << program_course_participants<<endl;

                        if (program_course_participants ==10){
                            cout << "the capacity in programming course is full"<< endl;
                            
                        }else{

                            cout << "program  selected" << endl;
                            addStudentData1(studentsOfProgramming);
                        }
                        
                    }else if(course_select==2){
                        database_course_participants++;
                        cout << " DataBase participants till now:"
                        <<  database_course_participants<<endl;

                        if (database_course_participants ==10){
                            cout << "the capacity in Database course is full"<< endl;
                        
                        }else{
                                
                            cout << "Database course selected" << endl;
                            addStudentData2(studentsOfDatabase);
                        }
                        
                    }else if( course_select==3){

                        software_course_participants++;
                        cout << " SoftWare participants till now:"
                        << software_course_participants<<endl;

                        if (software_course_participants ==10){
                            cout << "software_engineering course is full"<< endl;
                    
                        }else{
                                
                            cout << "software_engineering course selected" << endl;
                            addStudentData3(studentsOfSoftware);
                        }   
                    }
                }
                break;
            
            case 2:            
                cout << "Course with participants student details:" << endl<< endl << endl ;
                cout << "****** COURSE DETAIL*****" <<endl;
                cout << "total number of participants is:" << STUDENT ::counter << endl;
                cout<< "--------------------------------------------"<<endl;
                cout << " Programming Course Students Detail: "<<endl;
                showDetail(studentsOfProgramming);
                cout<< "--------------------------------------------"<<endl;
                cout << " Database Course Students Detail: "<<endl;
                showDetail(studentsOfDatabase);
                cout<< "--------------------------------------------"<<endl;
                cout << " SoftwareEngineering Students Detail: "<<endl;
                showDetail(studentsOfSoftware);
                cout<< "--------------------------------------------"<<endl;
                break;
            
            case 3:
            
                cout << "****** FREE CAPACITY OF COURSES*****" <<endl;
                cout <<"the Programming Course is provided by:" <<endl;
                lecturer1.display_Info();
                cout << endl;
                cout << "Programming Free Capacity: "<<endl;
                cout << 10-program_course_participants <<endl;
                if (program_course_participants < 3 ){
                    cout << "Course will not take place" << endl<< endl;

                }
                cout<< "--------------------------------------------"<<endl;
                cout <<"the DataBase Course is provided by:" <<endl;
                lecturer2.display_Info();
                cout << endl;
                cout << "Database Free Capacity: "<<endl;
                cout << 10-database_course_participants <<endl;
                if (database_course_participants < 3 ){
                    cout << "Course will not take place" << endl;
                } 
                cout<< "--------------------------------------------"<<endl;
                cout <<"the SoftwareEngineering Course is provided by:" <<endl;
                lecturer3.display_Info();
                cout << endl;
                cout << "SoftwareEngineering Free Capacity: "<<endl;
                cout << 10-software_course_participants <<endl;
                if (software_course_participants < 3){
                    cout << "Course will not take place" << endl;
                }
                cout << "--------------------------------------------"<< endl;
                break; 
            case 4:
                cout <<"Good Bye"<<endl;
                return 0;
        
            default: 
                cout << "wrong selection!" << endl;
        }
    
    } while (select != 0); 

return 0;
}