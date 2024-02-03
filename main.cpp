#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <chrono>
#include<Windows.h>
#include <thread>
#include"FMS-22F-3088.h"
using namespace std;
int main()
{
    system("color 70");
    logoAnimation();

    Administrator objectA; Hod objectH; Teacher objectT; Student objectS;
    string data, pdata;
    string day, date;



    bool moduleOne = true, moduleTwo = true, moduleThree = true, moduleFour = true, modulZero = true;

    while (moduleOne == true)

    {
        system("cls");
        logoAnimationNoFlush();

        moduleOne = true, moduleTwo = true, moduleThree = true, moduleFour = true, modulZero = true;


        switch (loginMenu()) //1
        {
        case'1':
            while (objectA.SignIntoSystem() == false)
            {
                system("cls");
                logoAnimationNoFlush();
                cout << "\n\t\t\t You Entered a Wrong Password or Username";
            }
            system("cls");
            logoAnimationNoFlush();
            while (moduleTwo == true)
            {
                system("cls");
                logoAnimationNoFlush();

                switch (administratorMenu()) //2 
                {
                case'1':
                    system("cls");
                    logoAnimationNoFlush();
                    objectA.addNewTeacher("teacher.txt");
                    cout << "\t\t\tNew Teacher Added Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    break;
                case'2':
                    system("cls");
                    logoAnimationNoFlush();
                    objectA.addNewStudent("student.txt");
                    cout << "\t\t\New Student Added Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    break;
                case'3':

                    system("cls");
                    logoAnimationNoFlush();
                    cout << endl;
                    objectA.viewAllStudentsWithoutOption();
                    cout << "\n\t\t\t Enter the Student  ID:";
                    getline(cin >> ws, data);
                    while (objectA.editStudent(data) == false)
                    {

                        cout << "\n\t\t\t You Entereed wrong Student  ID" << endl;
                        cout << "\t\t\t Enter again:";
                        getline(cin >> ws, data);
                    }
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    break;

                case'4':
                    system("cls");
                    logoAnimationNoFlush();
                    cout << endl;
                    objectA.viewAllTeachers();
                    cout << "\n\t\t\t Enter the teacher  ID:";
                    getline(cin >> ws, data);
                    while (objectA.editTeacher(data) == false)
                    {

                        cout << "\n\t\t\t You Entereed wrong Teacher ID" << endl;
                        cout << "\t\t\t Enter again:";
                        getline(cin >> ws, data);
                    }
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    break;

                case'5':

                    cout << endl;
                    system("cls");
                    logoAnimationNoFlush();
                    objectA.viewAllStudents();

                    break;
                case'6':

                    cout << endl;
                    objectA.viewAllTeachers();
                    _getche();
                    break;
                case'7':
                    moduleTwo = false;
                    break;
                default:
                    break;
                }
            }
            break;
        case'2':

            cout << endl;
            cout << "\n\t\t\t Enter the Username:";
            getline(cin >> ws, data);
            cout << "\n\t\t\t Enter the Password:";
            getline(cin >> ws, pdata);
            while (objectH.signIntoSystem(data, pdata) == false)
            {
                system("cls");
                logoAnimationNoFlush();
                cout << "\n\t\t\t You Entereed wrong Username or Password" << endl;
                cout << "\n\t\t\t Enter the Username:";
                getline(cin >> ws, data);
                cout << "\n\t\t\t Enter the Password:";
                getline(cin >> ws, pdata);
            }
            while (modulZero == true)
            {
                switch (hodMenu())
                {
                case'1':
                    objectH.hodAsTeacher();
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'2':
                    objectH.viewTeacherActivities();
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'3':
                    objectH.accessStudentModule();
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'4':
                    objectH.viewAllStudents();
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'5':
                    objectH.viewAllTeachers();
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'6':
                    modulZero = false;
                    break;
                default:
                    break;
                }

            }

            //
            break;
        case'3':

            cout << endl;
            cout << "\n\t\t\t Enter the Username:";
            getline(cin >> ws, data);
            cout << "\n\t\t\t Enter the Password:";
            getline(cin >> ws, pdata);
            while (objectT.signIntoSystem(data, pdata) == false)
            {
                system("cls");
                logoAnimationNoFlush();
                cout << "\n\t\t\t You Entereed wrong Username or Password" << endl;
                cout << "\n\t\t\t Enter the Username:";
                getline(cin >> ws, data);
                cout << "\n\t\t\t Enter the Password:";
                getline(cin >> ws, pdata);
            }

            while (moduleThree == true)
            {


                switch (teacherMenu())    //3
                {

                case'1':
                    system("cls");
                    logoAnimationNoFlush();
                    cout << endl;
                    objectT.setAndDisplayMarks();
                    cout << "\n\t\t\t Enter the Student  ID:";
                    getline(cin >> ws, data);
                    while (objectT.assignMarks(data) == false)
                    {

                        cout << "\n\t\t\t You Entereed wrong Student  ID" << endl;
                        cout << "\t\t\t Enter again:";
                        getline(cin >> ws, data);
                    }
                    //---------------
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;

                case'2':

                    cout << endl;
                    objectT.setAndDisplayGrades();
                    objectT.assignGrades();
                    cout << endl;
                    objectT.setAndDisplayGrades();
                    //-----------
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'3':
                    cout << endl;
                    cout << "\t\t\t" << " Enter the Date -Format(1-10-2003):";
                    getline(cin >> ws, date);
                    cout << "\t\t\t" << " Enter the Day-Format (Monday ,Tuesday.....) :";
                    getline(cin >> ws, day);
                    while (checkAttendenceData(date, day) == false)
                    {

                        cout << endl << endl;
                        cout << "\t\t\t" << "Data Not Exist" << endl;
                        dataNotExitAttendence();
                        cout << "\t\t\t" << "Enter the Date -Format(1-10-2003):";
                        getline(cin >> ws, date);
                        cout << "\t\t\t" << "Enter the Day-Format (Monday ,Tuesday.....) :";
                        getline(cin >> ws, day);
                    }
                    objectT.setAndDisplayAttendence(date, day);
                    cout << "\n\t\t\t Enter the Student  ID:";
                    getline(cin >> ws, data);
                    while (objectT.assignAttendence(data, date, day) == false)
                    {

                        cout << "\n\t\t\t You Entereed wrong Student  ID" << endl;
                        cout << "\t\t\t Enter again:";
                        getline(cin >> ws, data);
                    }
                    //-------------
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'4':
                    objectT.teacherTimeTable();
                    cout << "\t\t\tUpdated Succesfully--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'5':
                    RemoveReduntancy("attendenceData.txt");
                    moduleThree = false;
                    break;
                default:
                    break;
                }
            }
            break;
        case'4':
            cout << endl;
            cout << "\n\t\t\t Enter the Username:";
            getline(cin >> ws, data);
            cout << "\n\t\t\t Enter the Password:";
            getline(cin >> ws, pdata);
            while (objectS.signIntoSystem(data, pdata) == false)
            {
                system("cls");
                logoAnimationNoFlush();


                cout << "\n\t\t\t You Entereed wrong Username or Password" << endl;
                cout << "\n\t\t\t Enter the Username:";
                getline(cin >> ws, data);
                cout << "\n\t\t\t Enter the Password:";
                getline(cin >> ws, pdata);
            }

            while (moduleFour == true)
            {
                switch (studentMenu()) //
                {
                case'1':
                    cout << endl;
                    objectS.viewAttendence();
                    //------------
                    cout << "\t\t\t--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'2':
                    cout << endl;
                    objectS.viewMarks();
                    //--------------
                    cout << "\t\t\t--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'3':
                    cout << endl;
                    objectS.viewGrades();
                    //-----------
                    cout << "\t\t\t--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'4':
                    cout << endl;
                    objectS.viewRegisteredCourse();
                    //----
                    cout << "\t\t\t\--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'5':
                    cout << endl;
                    objectS.viewFeeStatus();
                    //-------------
                    cout << "\t\t\t--Press any key to Back to the menu" << endl;
                    _getche();
                    system("cls");
                    logoAnimationNoFlush();
                    break;
                case'6':
                    moduleFour = false;
                    break;
                default:
                    break;
                }
            }
            break;
        case'5':
            exit(0);
            break;
        default:
            break;
        }

    }
    return 0;
}