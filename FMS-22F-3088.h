#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include<Windows.h>
#include <chrono>
#include <thread>
//made by M Harris Tariq and Najeeb Ullah-(22F-3088-22F-3124)
using namespace std;
int numberOfLines(string fileName);
void logoAnimation();
void logoAnimationNoFlush();
void logoAnimationColor();
void teacherTableAnimation();
void studentTableAnimation();
void studentMarksAnimation();
void studentGradesAnimation();
void studentAttendenceAnimation();
void activitylogoAnimation();
void resetMarks();
void resetGrades();
void RemoveReduntancy(string name);
char loginMenu(); //login menu funtion;
char administratorMenu();
char teacherMenu();
char studentMenu();
char hodMenu();
bool checkAttendenceData(string date, string day);
void dataNotExitAttendence();
class Student {
protected:
    string loggedAssStudent, loggedIDStudent;
public:
    Student();
    virtual bool signIntoSystem(string inputUserName, string inputPassword);
    void viewAttendence();
    void viewMarks();
    void viewGrades();
    void viewRegisteredCourse();
    void viewFeeStatus();
};
class Teacher : public Student {
protected:
    string loggedAss, loggedID;
public:
    Teacher();
    bool signIntoSystem(string inputUserName, string inputPassword);
    void teacherTimeTable();
    bool assignMarks(string studentId);
    void assignGrades();
    bool assignAttendence(string studentId, string date, string day);
    void setAndDisplayMarks();
    void setAndDisplayGrades();
    void setAndDisplayAttendence(string date, string day);
};

class Hod : public Teacher, public Student {
public:
    bool signIntoSystem(string inputUserName, string inputPassword);
    void hodAsTeacher();
    void viewTeacherActivities();
    void accessStudentModule();
    void viewAllStudents();
    void viewAllTeachers();
};
class Administrator :public Teacher, public Student, public Hod {
    const string userName = "admin";
    const string password = "admin";
    string enteredUsername;
    string enteredPassword;
    int tId;
    int sId;
public:
    Administrator();
    bool SignIntoSystem();
    void addNewTeacher(string fileName);
    bool editTeacher(string id);
    void viewAllTeachers();
    void addNewStudent(string fileName);
    bool editStudent(string id);
    void viewAllStudents();
    void viewAllStudentsWithoutOption();
};

