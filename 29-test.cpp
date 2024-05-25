switch (select)
        {
        case 1:
        
            cout << "(registration) selected" << endl;//inja
            cout << "University name: " << endl;
            cout << "a: if you are from DIT university." << endl;
            cout << "b: if you are from other university." << endl;//inja
            string University_;
            cin >> University_;

            if(University_=="a"){
                cout<<"you can choose more than courses"<< endl;
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
                            break;
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
                            break;
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
                            break;
                        }else{
                        cout << "software_engineering course selected" << endl;
                        addStudentData(studentsOfSoftware);
                        }
                    }else if (course_select==4){
                        break;
                    }
                }
            } else if(University_=="b") {  
                    cout<< "you can choose only one course" << endl;
                                   
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
                            break;
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
                            break;
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
                            break;
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
            
            
        }
    

    } while (select != 0); // Now the loop will continue until select is 0

    return 0;
}