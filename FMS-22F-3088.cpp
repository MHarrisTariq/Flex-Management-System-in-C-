#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <chrono>
#include <thread>
#include"FMS-22F-3088.h"
//made by M Harris Tariq and Najeeb Ullah-(22F-3088-22F-3124)
using namespace std;

int numberOfLines(string fileName)
{
    string line;
    int count = 0;

    ifstream myFile(fileName);

    while (myFile.peek() != EOF)
    {
        getline(myFile, line);
        count++;
    }
    myFile.close();
    return count;
}

void logoAnimation()
{

    string logo = "\t\t\t  ______ _             __  __                                                   _      _____           _                 \n"
        "\t\t\t |  ____| |           |  \\/  |                                                 | |    / ____|         | |                \n"
        "\t\t\t | |__  | | _____  __ | \\  / | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  | (___  _   _ ___| |_ ___ _ __ ___  \n"
        "\t\t\t |  __| | |/ _ \\ \\/ / | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __|  \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ \n"
        "\t\t\t | |    | |  __/>  <  | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_   ____) | |_| \\__ \\ ||  __/ | | | | |\n"
        "\t\t\t |_|    |_|\\___/_/\\_\\ |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__| |_____/ \\__, |___/\\__\\___|_| |_| |_|\n"
        "\t\t\t                                                 __/ |                                        __/ |                      \n"
        "\t\t\t                                                |___/                                        |___/                       \n";

    for (int i = 0; i < logo.length(); i++) {
        cout << logo[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(1));
    }
    cout << endl;
}

void logoAnimationNoFlush()
{

    string logo = "\t\t\t  ______ _             __  __                                                   _      _____           _                 \n"
        "\t\t\t |  ____| |           |  \\/  |                                                 | |    / ____|         | |                \n"
        "\t\t\t | |__  | | _____  __ | \\  / | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  | (___  _   _ ___| |_ ___ _ __ ___  \n"
        "\t\t\t |  __| | |/ _ \\ \\/ / | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __|  \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ \n"
        "\t\t\t | |    | |  __/>  <  | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_   ____) | |_| \\__ \\ ||  __/ | | | | |\n"
        "\t\t\t |_|    |_|\\___/_/\\_\\ |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__| |_____/ \\__, |___/\\__\\___|_| |_| |_|\n"
        "\t\t\t                                                 __/ |                                        __/ |                      \n"
        "\t\t\t                                                |___/                                        |___/                       \n";

    for (int i = 0; i < logo.length(); i++) {
        cout << logo[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(0));
    }
    cout << endl;
}

void logoAnimationColor()
{
    string logo = "\033[0;31m\t\t\t  ______ _             __  __                                                   _      _____           _                 \n"
        "\033[0;32m\t\t\t |  ____| |           |  \\/  |                                                 | |    / ____|         | |                \n"
        "\033[0;33m\t\t\t | |__  | | _____  __ | \\  / | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  | (___  _   _ ___| |_ ___ _ __ ___  \n"
        "\033[0;34m\t\t\t |  __| | |/ _ \\ \\/ / | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __|  \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ \n"
        "\033[0;35m\t\t\t | |    | |  __/>  <  | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_   ____) | |_| \\__ \\ ||  __/ | | | | |\n"
        "\033[0;36m\t\t\t |_|    |_|\\___/_/\\_\\ |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__| |_____/ \\__, |___/\\__\\___|_| |_| |_|\n"
        "\033[0;37m\t\t\t                                                 __/ |                                        __/ |                      \n"
        "\033[0;35m\t\t\t                                                |___/                                        |___/                       \n";

    for (int i = 0; i < logo.length(); i++) {
        cout << logo[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(1));
    }
    cout << endl;
    cout << "\033[37m\033[0m" << endl;// it reset the color default by white(boht mehnat lgti h boss eid waste kr rha ma written by harris)
}

void teacherTableAnimation() {

    cout << "\t\t\t\t\t\t" << " _____               _                 _____     _     _      \n";
    cout << "\t\t\t\t\t\t" << "|_   _|__  __ _  ___| |__   ___ _ __  |_   _|_ _| |__ | | ___ \n";
    cout << "\t\t\t\t\t\t" << "  | |/ _ \\/ _` |/ __| '_ \\ / _ \\ '__|   | |/ _` | '_ \\| |/ _ \\\n";
    cout << "\t\t\t\t\t\t" << "  | |  __/ (_| | (__| | | |  __/ |      | | (_| | |_) | |  __/\n";
    cout << "\t\t\t\t\t\t" << "  |_|\\___|\\__,_|\\___|_| |_|\\___|_|      |_|\\__,_|_.__/|_|\\___|\n";

}

void studentTableAnimation() {

    cout << "\t\t\t\t" << " ____  _             _            _     _____     _     _     " << endl;
    cout << "\t\t\t\t" << "/ ___|| |_ _   _  __| | ___ _ __ | |_  |_   _|_ _| |__ | | ___ " << endl;
    cout << "\t\t\t\t" << "\\___ \\| __| | | |/ _` |/ _ \\ '_ \\| __|   | |/ _` | '_ \\| |/ _ \\" << endl;
    cout << "\t\t\t\t" << " ___) | |_| |_| | (_| |  __/ | | | |_    | | (_| | |_) | |  __/" << endl;
    cout << "\t\t\t\t" << "|____/ \\__|\\__,_|\\__,_|\\___|_| |_|\__ |   |_|\\__,_|_.__/|_|\\___|" << endl;


}

void studentMarksAnimation()
{

    cout << "\t\t\t\t\t\t\t" << "  __  __            _        " << endl;
    cout << "\t\t\t\t\t\t\t" << " |  \\/  | __ _ _ __| | _____ " << endl;
    cout << "\t\t\t\t\t\t\t" << " | |\\/| |/ _` | '__| |/ / __|" << endl;
    cout << "\t\t\t\t\t\t\t" << " | |  | | (_| | |  |   <\\__ \\" << endl;
    cout << "\t\t\t\t\t\t\t" << " |_|  |_|\\__,_|_|  |_|\\_\\___/" << endl;

}

void studentGradesAnimation()
{

    cout << "\t\t\t\t\t\t\t   ____               _      " << endl;
    cout << "\t\t\t\t\t\t\t  / ___|_ __ __ _  __| | ___ " << endl;
    cout << "\t\t\t\t\t\t\t | |  _| '__/ _` |/ _` |/ _ \\" << endl;
    cout << "\t\t\t\t\t\t\t | |_| | | | (_| | (_| |  __/" << endl;
    cout << "\t\t\t\t\t\t\t  \\____|_|  \\__,_|\\__,_|\\___|" << endl;

}

void studentAttendenceAnimation()
{
    cout << "\t\t\t\t\t\t     _   _   _                 _     " << endl;
    cout << "\t\t\t\t\t\t    / \\ | |_| |_ ___ _ __   __| | ___ _ __   ___ ___" << endl;
    cout << "\t\t\t\t\t\t   / _ \\| __| __/ _ \\ '_ \\ / _` |/ _ \\ '_ \\ / __| __|" << endl;
    cout << "\t\t\t\t\t\t  / ___ \\ |_| ||  __/ | | | (_| |  __/ | | | (__  () " << endl;
    cout << "\t\t\t\t\t\t /_/   \\_\\__|\\__\\___|_| |_|\\__,_|\\___|_| |_|\\___\\___| " << endl;

}

void activitylogoAnimation() {
    cout << "\t\t\t\t\t\t               _   _       _ _   _           " << endl;
    cout << "\t\t\t\t\t\t     /\\       | | (_)     (_) | (_)          " << endl;
    cout << "\t\t\t\t\t\t    /  \\   ___| |_ ___   ___| |_ _  ___  ___ " << endl;
    cout << "\t\t\t\t\t\t   / /\\ \\ / __| __| \\ \\ / / | __| |/ _ \\/ __|" << endl;
    cout << "\t\t\t\t\t\t  / ____ \\ (__| |_| |\\ V /| | |_| |  __/\\__ \\" << endl;
    cout << "\t\t\t\t\t\t /_/    \\_\\___|\\__|_| \\_/ |_|\\__|_|\\___||___/" << endl;

}

void resetMarks()
{
    ofstream("marks.txt");
}

void resetGrades()
{
    ofstream("grades.txt");
}

void RemoveReduntancy(string name)
{

    int i = 0;
    int n = numberOfLines(name) + 1;
    string* arr = new string[n];
    fstream read(name);
    while (!read.eof())
    {
        getline(read, arr[i], '\n');
        i++;
    }
    int unique = n;
    for (int i = 0; i < unique; i++) {
        for (int j = i + 1; j < unique; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < unique - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                unique--;
                j--;
            }
        }
    }
    ofstream write(name);
    for (int i = 0; i < unique; i++)
    {
        if (!arr[i].empty())
            write << arr[i] << '\n';
    }

}

char loginMenu() //login menu funtion;
{
    //logoAnimation();
    cout << "\n\t\t\t Login As a:" << endl;
    cout << "\t\t\t 1-Administrator." << endl;
    cout << "\t\t\t 2-Head Of Department." << endl;
    cout << "\t\t\t 3-Teacher." << endl;
    cout << "\t\t\t 4-student." << endl;
    cout << "\t\t\t 5-Exit.";
    char choice;
    do {

        choice = _getche();

    } while (choice < 49 || choice>53);
    return choice;
}

char administratorMenu()
{
    cout << "\n\t\t\t Welcome To Administrator menu:" << endl;
    cout << "\t\t\t 1-Add New Teacher." << endl;
    cout << "\t\t\t 2-Add New Student." << endl;
    cout << "\t\t\t 3-Edit Student Details." << endl;
    cout << "\t\t\t 4-Edit Teacher Details." << endl;
    cout << "\t\t\t 5-View All Students." << endl;;
    cout << "\t\t\t 6-View All Teachers." << endl;
    cout << "\t\t\t 7-Logout.";
    char choice;
    do {

        choice = _getche();

    } while (choice < 49 || choice>55);
    return choice;
}

char teacherMenu()
{
    cout << "\n\t\t\t Welcome To Teacher Portal:" << endl;
    cout << "\t\t\t 1-Assign Marks." << endl;
    cout << "\t\t\t 2-Assign Grades." << endl;;
    cout << "\t\t\t 3-Marking Attendence." << endl;
    cout << "\t\t\t 4-Teacher time table." << endl;
    cout << "\t\t\t 5-Logout.";
    char choice;
    do {

        choice = _getche();

    } while (choice < 49 || choice>53);
    return choice;
}

char studentMenu()
{
    cout << "\n\t\t\t Welcome To Student Portal:" << endl;
    cout << "\t\t\t 1-View Attendence." << endl;
    cout << "\t\t\t 2-View Marks." << endl;;
    cout << "\t\t\t 3-View Grades." << endl;
    cout << "\t\t\t 4-view Registered course." << endl;
    cout << "\t\t\t 5-view Fee Status." << endl;
    cout << "\t\t\t 6-Logout.";
    char choice;
    do {

        choice = _getche();

    } while (choice < 49 || choice>54);
    return choice;
}

char hodMenu()
{
    cout << "\n\t\t\t Welcome To HOD Portal:" << endl;
    cout << "\t\t\t 1-Login As teacher." << endl;
    cout << "\t\t\t 2-view All activities of teachers." << endl;;
    cout << "\t\t\t 3-Have Access to Student Module." << endl;
    cout << "\t\t\t 4-View All Students." << endl;
    cout << "\t\t\t 5-View All Teachers." << endl;
    cout << "\t\t\t 6-Logout.";
    char choice;
    do {

        choice = _getche();

    } while (choice < 49 || choice>54);
    return choice;
}


bool checkAttendenceData(string date, string day)
{
    cout << endl;
    cout << "\t\t\t want to do which function:" << endl;
    cout << "\t\t\t 1-Add new attendence" << endl;
    cout << "\t\t\t 2-Edit Previous Attendence.";
    char c;
    do
    {
        c = _getche();
    } while (c < 49 || c>50);
    if (c == '1')
    {
        return true;
    }
    if (c == '2')
    {
        int i = 0;
        string* arr = new string[numberOfLines("attendenceData.txt") + 1];
        fstream read("attendenceData.txt");
        while (!read.eof())
        {
            getline(read, arr[i], '\n');
            i++;
        }
        for (int j = 0; j < numberOfLines("attendenceData.txt"); j++)
        {
            if (date + '-' + day == arr[j])
                return true;

        }

        return false;
    }
}

void dataNotExitAttendence()
{
    //it shows the attendence file how many data we ahve there
    int j = 0;
    fstream read("attendenceData.txt");
    string* arr = new string[numberOfLines("attendenceData.txt") + 1];
    while (!read.eof())
    {
        getline(read, arr[j], '\n');
        j++;
    }
    for (int i = 0; i < numberOfLines("attendenceData.txt"); i++)
    {
        cout << "\t\t\t" << arr[i] << endl;
    }
}


Student::Student() {


}

bool Student::signIntoSystem(string inputUserName, string inputPassword) {
    int index;
    int i = 0;

    string user, pass;

    fstream read("student.txt");

    index = numberOfLines("student.txt") + 1;

    string* student = new string[index];

    while (!read.eof()) {
        getline(read, student[i], '\n');
        i++;
    }

    for (int i = 0; i < index; i++)
    {
        user = student[i].substr(student[i].find('#') + 1, student[i].find('$') - student[i].find('#') - 1);
        pass = student[i].substr(student[i].find('$') + 1, student[i].find('%') - student[i].find('$') - 1);

        if (user == inputUserName && pass == inputPassword)
        {
            loggedAssStudent = student[i].substr(student[i].find('_') + 1, student[i].find('~') - student[i].find('_') - 1);
            loggedIDStudent = student[i].substr(0, 7);

            delete[] student;

            cout << "\n\t\t\t You Sucessfully logged in As:" << endl;
            cout << "\n\t\t\t Student  Name:" << loggedAssStudent << endl;
            cout << "\t\t\t Student ID:" << loggedIDStudent << endl;;

            //cout << loggedAss << ' ' << loggedID << endl;
            return true;
        }
    }

    return false;

}

void Student::viewAttendence()
{
    studentAttendenceAnimation();
    string OOP, OOPL, DLD, DLDL, DIFF, CP;
    int indexAD = numberOfLines("attendenceData.txt") + 1;
    string* AD = new string[indexAD];

    int i = 0;
    fstream read("attendenceData.txt");
    while (!read.eof())
    {
        getline(read, AD[i], '\n');
        AD[i] = "Attendence\\" + AD[i] + ".txt";
        i++;
    }
    //
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "  |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << loggedIDStudent << setw(25) << loggedAssStudent << setw(65) << "     |" << endl;

    //
    for (int i = 0; i < indexAD - 1; i++)
    {
        int j = 0;
        int index = numberOfLines(AD[i]) + 1;
        fstream read2(AD[i]);
        string* array = new string[index];


        while (!read2.eof())
        {
            getline(read2, array[j], '\n');
            j++;
        }

        //cout << array[0] << endl;
        //cout << "yes" << endl;
        for (int k = 0; k < indexAD; k++)
        {
            if (!array[k].empty() && array[k].substr(0, 7) == loggedIDStudent)
            {
                //display

                //oop
                if (array[k].substr(array[k].find('~') + 1, array[k].find('!') - array[k].find('~') - 1) == "\0")
                {
                    OOP = "0";
                }
                else {
                    OOP = array[k].substr(array[k].find('~') + 1, array[k].find('!') - array[k].find('~') - 1);
                }

                if (array[k].substr(array[k].find('!') + 1, array[k].find('@') - array[k].find('!') - 1) == "\0")
                {
                    OOPL = "0";
                }
                else {
                    OOPL = array[k].substr(array[k].find('!') + 1, array[k].find('@') - array[k].find('!') - 1);
                }
                //dld
                if (array[k].substr(array[k].find('@') + 1, array[k].find('#') - array[k].find('@') - 1) == "\0")
                {
                    DLD = "0";
                }
                else {
                    DLD = array[k].substr(array[k].find('@') + 1, array[k].find('#') - array[k].find('@') - 1);
                }

                if (array[k].substr(array[k].find('#') + 1, array[k].find('$') - array[k].find('#') - 1) == "\0")
                {
                    DLDL = "0";
                }
                else {
                    DLDL = array[k].substr(array[k].find('#') + 1, array[k].find('$') - array[k].find('#') - 1);
                }
                //DIFF
                if (array[k].substr(array[k].find('$') + 1, array[k].find('%') - array[k].find('$') - 1) == "\0")
                {
                    DIFF = "0";
                }
                else {
                    DIFF = array[k].substr(array[k].find('$') + 1, array[k].find('%') - array[k].find('$') - 1);
                }
                //CP
                if (array[k].substr(array[k].find('%') + 1, -1) == "\0")
                {
                    CP = "0";
                }
                else {
                    CP = array[k].substr(array[k].find('%') + 1, -1);
                }
                //display
                cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "\t\t\t" << "|" << setw(32) << AD[i] << setw(10) << OOP << setw(10) << OOPL << setw(10) << DLD << setw(10) << DLDL << setw(10) << DIFF << setw(10) << CP << "     |" << endl;

                //
            }
        }
        cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

    }

}

void Student::viewMarks()
{
    int i = 0;
    int Total = 0;
    int index = numberOfLines("marks.txt") + 1;
    string* marks = new string[index];
    fstream read("marks.txt");
    string OOP, OOPL, DLD, DLDL, DIFF, CP;

    while (!read.eof())
    {
        getline(read, marks[i], '\n');
        i++;
    }

    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "First Name" << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < index; i++)
    {
        if (!marks[i].empty() && marks[i].substr(0, 7) == loggedIDStudent)
        {
            //oop
            if (marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1) == "\0")
            {
                OOP = "0";
            }
            else {
                OOP = marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1);
            }

            if (marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1) == "\0")
            {
                OOPL = "0";
            }
            else {
                OOPL = marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1);
            }
            //dld
            if (marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1) == "\0")
            {
                DLD = "0";
            }
            else {
                DLD = marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1);
            }

            if (marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1) == "\0")
            {
                DLDL = "0";
            }
            else {
                DLDL = marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1);
            }
            //DIFF
            if (marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1) == "\0")
            {
                DIFF = "0";
            }
            else {
                DIFF = marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1);
            }
            //CP
            if (marks[i].substr(marks[i].find('%') + 1, -1) == "\0")
            {
                CP = "0";
            }
            else {
                CP = marks[i].substr(marks[i].find('%') + 1, -1);
            }
            Total = stoi(OOP) + stoi(OOPL) + stoi(DLD) + stoi(DLDL) + stoi(DIFF) + stoi(CP);
            //display
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t" << "|" << setw(8) << loggedIDStudent << setw(25) << loggedAssStudent << setw(10) << OOP << setw(10) << OOPL << setw(10) << DLD << setw(10) << DLDL << setw(10) << DIFF << setw(10) << CP << "     |" << endl;
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t" << "|" << "Total Marks :" << Total << "|" << endl;
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

        }
    }

}

void Student::viewGrades()
{
    int i = 0;
    int Total = 0;
    int index = numberOfLines("grades.txt") + 1;
    string* grades = new string[index];
    fstream read("grades.txt");
    string OOP, OOPL, DLD, DLDL, DIFF, CP;

    while (!read.eof())
    {
        getline(read, grades[i], '\n');
        i++;
    }

    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "First Name" << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < index; i++)
    {
        if (!grades[i].empty() && grades[i].substr(0, 7) == loggedIDStudent)
        {
            //oop
            if (grades[i].substr(grades[i].find('~') + 1, grades[i].find('!') - grades[i].find('~') - 1) == "\0")
            {
                OOP = "NULL";
            }
            else {
                OOP = grades[i].substr(grades[i].find('~') + 1, grades[i].find('!') - grades[i].find('~') - 1);
            }

            if (grades[i].substr(grades[i].find('!') + 1, grades[i].find('@') - grades[i].find('!') - 1) == "\0")
            {
                OOPL = "NULL";
            }
            else {
                OOPL = grades[i].substr(grades[i].find('!') + 1, grades[i].find('@') - grades[i].find('!') - 1);
            }
            //dld
            if (grades[i].substr(grades[i].find('@') + 1, grades[i].find('#') - grades[i].find('@') - 1) == "\0")
            {
                DLD = "NULL";
            }
            else {
                DLD = grades[i].substr(grades[i].find('@') + 1, grades[i].find('#') - grades[i].find('@') - 1);
            }

            if (grades[i].substr(grades[i].find('#') + 1, grades[i].find('$') - grades[i].find('#') - 1) == "\0")
            {
                DLDL = "NULL";
            }
            else {
                DLDL = grades[i].substr(grades[i].find('#') + 1, grades[i].find('$') - grades[i].find('#') - 1);
            }
            //DIFF
            if (grades[i].substr(grades[i].find('$') + 1, grades[i].find('%') - grades[i].find('$') - 1) == "\0")
            {
                DIFF = "NULL";
            }
            else {
                DIFF = grades[i].substr(grades[i].find('$') + 1, grades[i].find('%') - grades[i].find('$') - 1);
            }
            //CP
            if (grades[i].substr(grades[i].find('%') + 1, -1) == "\0")
            {
                CP = "NULL";
            }
            else {
                CP = grades[i].substr(grades[i].find('%') + 1, -1);
            }
            //display
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t" << "|" << setw(8) << loggedIDStudent << setw(25) << loggedAssStudent << setw(10) << OOP << setw(10) << OOPL << setw(10) << DLD << setw(10) << DLDL << setw(10) << DIFF << setw(10) << CP << "     |" << endl;
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

        }
    }
}

void Student::viewRegisteredCourse()
{
    cout << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "First Name" << setw(27) << "Registered Courses Are" << setw(36) << " | " << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << loggedIDStudent << setw(25) << loggedAssStudent << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
}

void Student::viewFeeStatus()
{
    int i = 0;
    int Total = 0;
    int index = numberOfLines("student.txt") + 1;
    string* student = new string[index];
    fstream read("student.txt");
    string feeStatus = "NULL";

    while (!read.eof())
    {
        getline(read, student[i], '\n');
        i++;
    }

    for (int i = 0; i < index; i++)
    {
        if (!student[i].empty() && student[i].substr(0, 7) == loggedIDStudent)
        {

            feeStatus = student[i].substr(student[i].find('?') + 1, '\n');

        }
    }

    cout << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "First Name" << setw(27) << "Fee Status is:" << setw(36) << " | " << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << loggedIDStudent << setw(25) << loggedAssStudent << setw(22) << feeStatus << setw(42) << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
}





Teacher::Teacher() {

}

bool Teacher::signIntoSystem(string inputUserName, string inputPassword) {
    int index;
    int i = 0;

    string user, pass;

    fstream read("teacher.txt");

    index = numberOfLines("teacher.txt") + 1;

    string* teachers = new string[index];

    while (!read.eof()) {
        getline(read, teachers[i], '\n');
        i++;
    }

    for (int i = 0; i < index; i++)
    {
        user = teachers[i].substr(teachers[i].find('#') + 1, teachers[i].find('$') - teachers[i].find('#') - 1);
        pass = teachers[i].substr(teachers[i].find('$') + 1, teachers[i].find('%') - teachers[i].find('$') - 1);

        if (user == inputUserName && pass == inputPassword)
        {
            loggedAss = teachers[i].substr(teachers[i].find('_') + 1, teachers[i].find('~') - teachers[i].find('_') - 1);
            loggedID = teachers[i].substr(0, 6);

            delete[] teachers;

            cout << "\n\t\t\t You Sucessfully logged in As:" << endl;
            cout << "\n\t\t\t Teacher Name:" << loggedAss << endl;
            cout << "\t\t\t Teacher ID:" << loggedID << endl;;

            //cout << loggedAss << ' ' << loggedID << endl;

            ofstream Enter("activities.txt", ios::app);

            Enter << "INFO: " << loggedID << '-' << loggedAss << '-' << " Operation Performed: " << "Login succesfully !" << '\n';

            return true;
        }
    }

    return false;

}

void Teacher::teacherTimeTable()
{
    int whichTable = 0;

    if (loggedID.substr(0, 2) == "CS")
        whichTable = 1;
    if (loggedID.substr(0, 2) == "EE")
        whichTable = 2;
    if (loggedID.substr(0, 2) == "SE")
        whichTable = 3;
    if (loggedID.substr(0, 2) == "BB")
        whichTable = 4;
    if (loggedID.substr(0, 2) == "SS")
        whichTable = 5;

    switch (whichTable)
    {
    case 1:
        cout << endl;
        cout << "\t\t\t                           _____  _____            _______ _                  _______    _     _      " << endl;
        cout << "\t\t\t                           / ____|/ ____|          |__   __(_)                |__   __|  | |   | |     " << endl;
        cout << "\t\t\t                          | |    | (___    ______     | |   _ _ __ ___   ___     | | __ _| |__ | | ___ " << endl;
        cout << "\t\t\t                          | |     \\___ \\  |______|    | |  | | '_ ` _ \\ / _ \\    | |/ _` | '_ \\| |/ _ \\" << endl;
        cout << "\t\t\t                          | |____ ____) |             | |  | | | | | | |  __/    | | (_| | |_) | |  __/" << endl;
        cout << "\t\t\t                           \\_____|_____/              |_|  |_|_| |_| |_|\\___|    |_|\\__,_|_.__/|_|\\___|" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t|                            | 8:45 | 9:15 | 9:45 |      | 10:15 | 10:45 | 11:15 |        | 11:45 | 12:15 | 12:45 |     | 1:15 | 1:45 | 2:15  |     ||" << endl;
        cout << "\t\t|                            | 9:15 | 9:45 | 10:10|      | 10:45 | 11:15 | 11:45 |        | 12:15 | 12:45 | 1:15  |     | 1:45 | 2:15 | 2:45  |     ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __  __               |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |  \\/  |              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| | \\  / | ___          |     Dld Course               |                              |            CP Course         |          Islamiyat          ||" << endl;
        cout << "\t\t|| | |\\/| |/ _ \\         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| | |  | | (_) |        |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |_|  |_|\\___/         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______             |                                                            |                               |                             ||" << endl;
        cout << "\t\t||  |__   __|            |                                                            |                               |                             ||" << endl;
        cout << "\t\t||     | | | | |         |                            DLD Lab                         |                               |         CP LaB              ||" << endl;
        cout << "\t\t||     | | |_| |         |                                                            |                               |                             ||" << endl;
        cout << "\t\t||     |_|\\__,_|         |                                                            |                               |                             ||" << endl;
        cout << "\t\t||                       |                                                            |                               |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __          __       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  \\ \\        / /       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||   \\ \\  /\\  / /__      |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||    \\ \\/  \\/ / _       |     Diffrential Equation     |                              |           OOP Course         |         Islamiyat           ||" << endl;
        cout << "\t\t||     \\  /\\  /  __/     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||      \\/  \\/ \\___|     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______ _           |                              |                              |                                                            ||" << endl;
        cout << "\t\t||  |__   __| |          |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | |__        |            CP Lab            |       Cp Course              |                         Pf Lab                             ||" << endl;
        cout << "\t\t||     | |  | '_ \\       |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | | | |      |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     |_|  |_| |_|      |                              |                              |                                                            ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   ______              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |  ____|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  | |__ _ __           |     Diffrentail Equation     |                              |         CP Course            |                             ||" << endl;
        cout << "\t\t||  | |  | |             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |_|  |_|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        break;
    case 2:
        cout << endl;
        cout << "\t\t\t\t                            ______ ______   _______ _                  _______    _     _      " << endl;
        cout << "\t\t\t\t                           |  ____|  ____| |__   __(_)                |__   __|  | |   | |     " << endl;
        cout << "\t\t\t\t                           | |__  | |__       | |   _ _ __ ___   ___     | | __ _| |__ | | ___ " << endl;
        cout << "\t\t\t\t                           |  __| |  __|      | |  | | '_ ` _ \\ / _ \\    | |/ _` | '_ \\| |/ _ \\" << endl;
        cout << "\t\t\t\t                           | |____| |____     | |  | | | | | | |  __/    | | (_| | |_) | |  __/" << endl;
        cout << "\t\t\t\t                           |______|______|    |_|  |_|_| |_| |_|\\___|    |_|\__,_|_.__/|_|\\___|" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t|                            | 8:45 | 9:15 | 9:45 |      | 10:15 | 10:45 | 11:15 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t|                            | 9:15 | 9:45 | 10:10|      | 10:45 | 11:15 | 11:45 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __  __               |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |  \\/  |              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| | \\  / | ___          |                              |  Digital And Logical Design  |                              |          Islamiyat          ||" << endl;
        cout << "\t\t|| | |\\/| |/ _ \\         |                              |              LaB             |                              |                             ||" << endl;
        cout << "\t\t|| | |  | | (_) |        |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |_|  |_|\\___/         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______             |                              |                                                             |                             ||" << endl;
        cout << "\t\t||  |__   __|            |                              |                                                             |                             ||" << endl;
        cout << "\t\t||     | | | | |         |          DLD Course          |                           OOP Lab                           |         CP LaB              ||" << endl;
        cout << "\t\t||     | | |_| |         |                              |                                                             |                             ||" << endl;
        cout << "\t\t||     |_|\\__,_|         |                              |                                                             |                             ||" << endl;
        cout << "\t\t||                       |                              |                                                             |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __          __       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  \\ \\        / /       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||   \\ \\  /\\  / /__      |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||    \\ \\/  \\/ / _       |     Diffrential Equation     |                              |           OOP Course         |         Islamiyat           ||" << endl;
        cout << "\t\t||     \\  /\\  /  __/     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||      \\/  \\/ \\___|     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______ _           |                              |                              |                               |                            ||" << endl;
        cout << "\t\t||  |__   __| |          |                              |                              |                               |                            ||" << endl;
        cout << "\t\t||     | |  | |__        |            CP Lab            |                              |        DLD Course             |                            ||" << endl;
        cout << "\t\t||     | |  | '_ \\       |                              |                              |                               |                            ||" << endl;
        cout << "\t\t||     | |  | | | |      |                              |                              |                               |                            ||" << endl;
        cout << "\t\t||     |_|  |_| |_|      |                              |                              |                               |                            ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   ______              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |  ____|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  | |__ _ __           |     Diffrentail Equation     |                              |         CP Course            |                             ||" << endl;
        cout << "\t\t||  | |  | |             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |_|  |_|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        break;
    case 3:
        cout << endl;
        cout << "\t\t\t                            _____         _______ _                  _______    _     _      " << endl;
        cout << "\t\t\t                           / ____|       |__   __(_)                |__   __|  | |   | |     " << endl;
        cout << "\t\t\t                           | (___   ___      | |   _ _ __ ___   ___     | | __ _| |__ | | ___ " << endl;
        cout << "\t\t\t                           \\___ \\ / _ \\     | |  | | '_ ` _ \\ / _ \\    | |/ _` | '_ \\| |/ _ \\" << endl;
        cout << "\t\t\t                           ____) |  __/     | |  | | | | | | |  __/    | | (_| | |_) | |  __/" << endl;
        cout << "\t\t\t                           |_____/ \\___|     |_|  |_|_| |_| |_|\\___|    |_|\\__,_|_.__/|_|\\___|" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t|                            | 8:45 | 9:15 | 9:45 |      | 10:15 | 10:45 | 11:15 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t|                            | 9:15 | 9:45 | 10:10|      | 10:45 | 11:15 | 11:45 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __  __               |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |  \\/  |              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| | \\  / | ___          |                              |  Digital And Logical Design  |            CP Course         |          Islamiyat          ||" << endl;
        cout << "\t\t|| | |\\/| |/ _ \\         |                              |              LaB             |                              |                             ||" << endl;
        cout << "\t\t|| | |  | | (_) |        |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |_|  |_|\\___/         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |__   __|            |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||     | | | | |         |          DLD Course          |           OOP Course         |                              |         CP LaB              ||" << endl;
        cout << "\t\t||     | | |_| |         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||     |_|\\__,_|         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __          __       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  \\ \\        / /       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||   \\ \\  /\\  / /__      |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||    \\ \\/  \\/ / _       |     Diffrential Equation     |                              |           OOP Course         |         Islamiyat           ||" << endl;
        cout << "\t\t||     \\  /\\  /  __/     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||      \\/  \\/ \\___|     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______ _           |                              |                              |                                                            ||" << endl;
        cout << "\t\t||  |__   __| |          |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | |__        |            CP Lab            |                              |                         OOP Lab                            ||" << endl;
        cout << "\t\t||     | |  | '_ \\       |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | | | |      |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     |_|  |_| |_|      |                              |                              |                                                            ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   ______              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |  ____|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  | |__ _ __           |     Diffrentail Equation     |                              |         CP Course            |                             ||" << endl;
        cout << "\t\t||  | |  | |             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |_|  |_|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        break;
    case 4:
        cout << endl;
        cout << "\t\t\t                            ____  ____    _______ _                  _______    _     _      " << endl;
        cout << "\t\t\t                           |  _ \\/  _ \\  |__   __(_)                |__   __|  | |   | |     " << endl;
        cout << "\t\t\t                           | |_) | |_) |    | |   _ _ __ ___   ___     | | __ _| |__ | | ___ " << endl;
        cout << "\t\t\t                           |  _ <|  _ <     | |  | | '_ ` _ \\ / _ \\    | |/ _` | '_ \\| |/ _ \\" << endl;
        cout << "\t\t\t                           | |_) | |_) |    | |  | | | | | | |  __/    | | (_| | |_) | |  __/" << endl;
        cout << "\t\t\t                           |____/|____/     |_|  |_|_| |_| |_|\\___|    |_|\\__,_|_.__/|_|\\___|" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t|                            | 8:45 | 9:15 | 9:45 |      | 10:15 | 10:45 | 11:15 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t|                            | 9:15 | 9:45 | 10:10|      | 10:45 | 11:15 | 11:45 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __  __               |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |  \\/  |              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| | \\  / | ___          |                              |  Digital And Logical Design  |            CP Course         |          Islamiyat          ||" << endl;
        cout << "\t\t|| | |\\/| |/ _ \\         |                              |              LaB             |                              |                             ||" << endl;
        cout << "\t\t|| | |  | | (_) |        |                              |                              |                              |                             ||" << endl;
        cout << "\t\t|| |_|  |_|\\___/         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |__   __|            |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||     | | | | |         |          DLD Course          |                              |        OOP Course            |         CP LaB              ||" << endl;
        cout << "\t\t||     | | |_| |         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||     |_|\\__,_|         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __          __       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  \\ \\        / /       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||   \\ \\  /\\  / /__      |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||    \\ \\/  \\/ / _       |     Diffrential Equation     |     DLd Course               |           OOP Course         |         Islamiyat           ||" << endl;
        cout << "\t\t||     \\  /\\  /  __/     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||      \\/  \\/ \\___|     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______ _           |                              |                              |                                                            ||" << endl;
        cout << "\t\t||  |__   __| |          |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | |__        |            CP Lab            |                              |                         OOP Lab                            ||" << endl;
        cout << "\t\t||     | |  | '_ \\       |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | | | |      |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     |_|  |_| |_|      |                              |                              |                                                            ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   ______              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |  ____|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  | |__ _ __           |     Diffrentail Equation     |                              |         CP Course            |                             ||" << endl;
        cout << "\t\t||  | |  | |             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |_|  |_|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << endl;
        break;
    case 5:
        cout << endl;
        cout << "\t\t\t                            _____ _____   _______ _                  _______    _     _      " << endl;
        cout << "\t\t\t                           / ____/ ____| |__   __(_)                |__   __|  | |   | |     " << endl;
        cout << "\t\t\t                           | (___| (___      | |   _ _ __ ___   ___     | | __ _| |__ | | ___ " << endl;
        cout << "\t\t\t                           \\___ \\\\___ \\     | |  | | '_ ` _ \\ / _ \\    | |/ _` | '_ \\| |/ _ \\" << endl;
        cout << "\t\t\t                           ____) |___) |    | |  | | | | | | |  __/    | | (_| | |_) | |  __/" << endl;
        cout << "\t\t\t                           |_____/_____/     |_|  |_|_| |_| |_|\\___|    |_|\__,_|_.__/|_|\\___|" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t|                            | 8:45 | 9:15 | 9:45 |      | 10:15 | 10:45 | 11:15 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t|                            | 9:15 | 9:45 | 10:10|      | 10:45 | 11:15 | 11:45 |        | 10:15 | 10:45 | 11:15 |     | 10:15 | 10:45 | 11:15 |   ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __  __               |                                                           |                              |                               ||" << endl;
        cout << "\t\t|| |  \\/  |              |                                                           |                              |                               ||" << endl;
        cout << "\t\t|| | \\  / | ___          |                      CP LAB                               |            CP Course         |          Islamiyat            ||" << endl;
        cout << "\t\t|| | |\\/| |/ _ \\         |                                                           |                              |                               ||" << endl;
        cout << "\t\t|| | |  | | (_) |        |                                                           |                              |                               ||" << endl;
        cout << "\t\t|| |_|  |_|\\___/         |                                                           |                              |                               ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |__   __|            |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||     | | | | |         |          DLD Course          |           OOP Course         |                              |         CP LaB              ||" << endl;
        cout << "\t\t||     | | |_| |         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||     |_|\\__,_|         |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||  __          __       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  \\ \\        / /       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||   \\ \\  /\\  / /__      |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||    \\ \\/  \\/ / _       |     Diffrential Equation     |                              |           OOP Course         |         Islamiyat           ||" << endl;
        cout << "\t\t||     \\  /\\  /  __/     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||      \\/  \\/ \\___|     |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||                       |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   _______ _           |                              |                              |                                                            ||" << endl;
        cout << "\t\t||  |__   __| |          |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | |__        |            CP Lab            |                              |                         PF Lab                             ||" << endl;
        cout << "\t\t||     | |  | '_ \\       |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     | |  | | | |      |                              |                              |                                                            ||" << endl;
        cout << "\t\t||     |_|  |_| |_|      |                              |                              |                                                            ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t||   ______              |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |  ____|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  | |__ _ __           |     Diffrentail Equation     |                              |         CP Course            |                             ||" << endl;
        cout << "\t\t||  | |  | |             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t||  |_|  |_|             |                              |                              |                              |                             ||" << endl;
        cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        break;
    default:
        break;
    }

}


bool Teacher::assignMarks(string studentId)
{
    setAndDisplayMarks();

    int index;
    int i = 0;
    int current = -1;
    char choice;
    index = numberOfLines("marks.txt") + 1;

    string* marks = new string[index];
    string data;
    string oop, oopl, dld, dldl, diff, cp;

    fstream read("marks.txt");

    while (!read.eof())
    {
        getline(read, marks[i], '\n');
        i++;
    }

    for (int i = 0; i < index; i++)
    {
        if (marks[i].substr(0, 7) == studentId)
            current = i;
    }

    if (current == -1)
    {
        return false;
    }

    data = marks[current].substr(0, marks[current].find('~'));
    //cout << data;
    oop = marks[current].substr(marks[current].find('~') + 1, marks[current].find('!') - marks[current].find('~') - 1);
    oopl = marks[current].substr(marks[current].find('!') + 1, marks[current].find('@') - marks[current].find('!') - 1);
    dld = marks[current].substr(marks[current].find('@') + 1, marks[current].find('#') - marks[current].find('@') - 1);
    dldl = marks[current].substr(marks[current].find('#') + 1, marks[current].find('$') - marks[current].find('#') - 1);
    diff = marks[current].substr(marks[current].find('$') + 1, marks[current].find('%') - marks[current].find('$') - 1);
    cp = marks[current].substr(marks[current].find('%') + 1, -1);

    /* cout << oop << endl
         << oopl << endl
         << dld << endl
         << dldl << endl
         << diff << endl
         << cp << endl;*/

    cout << "\t\t\t" << "Which Subject Marks You Want To Update/Insert:" << endl;
    cout << "\t\t\t" << "1-OOP" << endl
        << "\t\t\t" << "2-OOP LAB" << endl
        << "\t\t\t" << "3-DLD" << endl
        << "\t\t\t" << "4-DLD LAB" << endl
        << "\t\t\t" << "5-DIFFERNTIAL EQUATION" << endl
        << "\t\t\t" << "6-COMMUNICATON AND PRESENTAION SKILLS" << endl
        << "\t\t\t" << "7-Reset All Marks" << endl
        << "\t\t\t" << "8-EXIT";
    do {

        choice = _getche();

    } while (choice < 49 || choice>56);

    switch (choice)
    {
    case '1':
        cout << "\n\t\t\t" << "Enter Marks of OOP: ";
        getline(cin >> ws, oop);
        break;
    case '2':
        cout << "\n\t\t\t" << "Enter Marks of OOP Lab: ";
        getline(cin >> ws, oopl);
        break;
    case '3':
        cout << "\n\t\t\t" << "Enter Marks of DLD: ";
        getline(cin >> ws, dld);
        break;
    case '4':
        cout << "\n\t\t\t" << "Enter Marks of DLD Lab: ";
        getline(cin >> ws, dldl);
        break;
    case '5':
        cout << "\n\t\t\t" << "Enter Marks of Differential equation: ";
        getline(cin >> ws, diff);
        break;
    case '6':
        cout << "\n\t\t\t" << "Enter Marks of CP: ";
        getline(cin >> ws, cp);
        break;
    case '7':
        resetMarks();
        break;
    default:
        break;
    }
    if (choice != '7' && current != -1)
    {

        marks[current] = data + '~' + oop + '!' + oopl + '@' + dld + '#' + dldl + '$' + diff + '%' + cp;

        ofstream write("marks.txt");

        for (int i = 0; i < index; i++)
        {
            if (!marks[i].empty())
                write << marks[i] << '\n';
        }

    }

    ofstream Enter("activities.txt", ios::app);

    if (choice != '7')
        Enter << "INFO: " << loggedID << '-' << loggedAss << '-' << " Operation Performed: " << "Updated the marks of student whose roll number is " << studentId << '\n';
    else
        Enter << "INFO: " << loggedID << '-' << loggedAss << '-' << " Operation Performed: " << "Reset All marks of students" << '\n';

    delete[] marks;
    return true;
}

void Teacher::assignGrades()
{
    char choice;
    char criteria;

    int index = numberOfLines("marks.txt") + 1;
    int i = 0;

    string* marks = new string[index];
    string* grades = new string[index];
    string* awarded = new string[index];

    string oop, oopl, dld, dldl, diff, cp;
    string oopG, ooplG, dldG, dldlG, diffG, cpG;
    int OOP, OOPL, DLD, DLDL, DIFF, CP;
    string willward;

    fstream read("marks.txt");
    fstream read2("grades.txt");
    while (!read.eof())
    {
        getline(read, marks[i], '\n');
        getline(read2, grades[i], '\n');
        i++;
    }

    cout << "\t\t\t" << "Which Subject Grade You Want To Awarded:" << endl;
    cout << "\t\t\t" << "1-OOP Grade" << endl
        << "\t\t\t" << "2-OOP LAB Grade" << endl
        << "\t\t\t" << "3-DLD Grade" << endl
        << "\t\t\t" << "4-DLD LAB Grade" << endl
        << "\t\t\t" << "5-DIFFERNTIAL EQUATION Grade" << endl
        << "\t\t\t" << "6-COMMUNICATON AND PRESENTAION SKILLS Grade" << endl
        << "\t\t\t" << "7-Reset All Grades" << endl
        << "\t\t\t" << "8-EXIT";
    do {

        choice = _getche();

    } while (choice < 49 || choice>55);

    cout << endl;
    cout << "\t\t\t" << "Which Type of Graing You want to Awarded:" << endl;
    cout << "\t\t\t" << "1-Absolute Grading" << endl;
    cout << "\t\t\t" << "2-Relative Grading";

    do {

        criteria = _getche();

    } while (criteria < 49 || criteria>50);

    if (choice == '7')
    {
        resetGrades();
    }

    for (int i = 0; i < index - 1; i++)
    {

        oop = marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1);
        oopl = marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1);
        dld = marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1);
        dldl = marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1);
        diff = marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1);
        cp = marks[i].substr(marks[i].find('%') + 1, -1);

        /*oopG = grades[i].substr(grades[i].find('~') + 1, grades[i].find('!') - grades[i].find('~') - 1);
        ooplG = grades[i].substr(grades[i].find('!') + 1, grades[i].find('@') - grades[i].find('!') - 1);
        dldG = grades[i].substr(grades[i].find('@') + 1, grades[i].find('#') - grades[i].find('@') - 1);
        dldlG = grades[i].substr(grades[i].find('#') + 1, grades[i].find('$') - grades[i].find('#') - 1);
        diffG = grades[i].substr(grades[i].find('$') + 1, grades[i].find('%') - grades[i].find('$') - 1);
        cpG = grades[i].substr(grades[i].find('%') + 1, -1);*/


        OOP = stoi(oop);
        OOPL = stoi(oopl);
        DLD = stoi(dld);
        DLDL = stoi(dldl);
        DIFF = stoi(diff);
        CP = stoi(cp);

        if (choice == '1')
        {
            if (OOP >= 80)
                willward = 'A';
            if (OOP >= 70 && OOP < 80)
                willward = 'B';
            if (OOP >= 60 && OOP < 70)
                willward = 'C';
            if (OOP >= 40 && OOP < 60)
                willward = 'D';
            if (OOP < 40)
                willward = 'F';

            awarded[i] = grades[i].substr(0, grades[i].find('~') + 1) + willward + grades[i].substr(grades[i].find('!'), -1);
            //cout << awarded[i] << endl;
        }

        if (choice == '2')
        {
            if (OOPL >= 80)
                willward = 'A';
            if (OOPL >= 70 && OOPL < 80)
                willward = 'B';
            if (OOPL >= 60 && OOPL < 70)
                willward = 'C';
            if (OOPL >= 40 && OOPL < 60)
                willward = 'D';
            if (OOPL < 40)
                willward = 'F';

            awarded[i] = grades[i].substr(0, grades[i].find('!') + 1) + willward + grades[i].substr(grades[i].find('@'), -1);
            //cout << awarded[i] << endl;
        }

        if (choice == '3')
        {
            if (DLD >= 80)
                willward = 'A';
            if (DLD >= 70 && DLD < 80)
                willward = 'B';
            if (DLD >= 60 && DLD < 70)
                willward = 'C';
            if (DLD >= 40 && DLD < 60)
                willward = 'D';
            if (DLD < 40)
                willward = 'F';

            awarded[i] = grades[i].substr(0, grades[i].find('@') + 1) + willward + grades[i].substr(grades[i].find('#'), -1);
            cout << awarded[i] << endl;
        }

        if (choice == '4')
        {
            if (DLDL >= 80)
                willward = 'A';
            if (DLDL >= 70 && DLDL < 80)
                willward = 'B';
            if (DLDL >= 60 && DLDL < 70)
                willward = 'C';
            if (DLDL >= 40 && DLDL < 60)
                willward = 'D';
            if (DLDL < 40)
                willward = 'F';

            awarded[i] = grades[i].substr(0, grades[i].find('#') + 1) + willward + grades[i].substr(grades[i].find('$'), -1);
            //cout << awarded[i] << endl;
        }

        if (choice == '5')
        {
            if (DIFF >= 80)
                willward = 'A';
            if (DIFF >= 70 && DIFF < 80)
                willward = 'B';
            if (DIFF >= 60 && DIFF < 70)
                willward = 'C';
            if (DIFF >= 40 && DIFF < 60)
                willward = 'D';
            if (DIFF < 40)
                willward = 'F';

            awarded[i] = grades[i].substr(0, grades[i].find('$') + 1) + willward + grades[i].substr(grades[i].find('%'), -1);
            //cout << awarded[i] << endl;
        }

        if (choice == '6')
        {
            if (CP >= 80)
                willward = 'A';
            if (CP >= 70 && CP < 80)
                willward = 'B';
            if (CP >= 60 && CP < 70)
                willward = 'C';
            if (CP >= 40 && CP < 60)
                willward = 'D';
            if (CP < 40)
                willward = 'F';

            awarded[i] = grades[i].substr(0, grades[i].find('%') + 1) + willward;

            //cout << awarded[i] << endl;
        }

    }

    ofstream write("grades.txt");

    for (int i = 0; i < index; i++)
    {

        if (!awarded[i].empty())
            write << awarded[i] << '\n';
    }

    ofstream Enter("activities.txt", ios::app);

    if (choice != '7')
        Enter << "INFO: " << loggedID << '-' << loggedAss << '-' << " Operation Performed: " << "Updated the Grade of students " << '\n';
    else
        Enter << "INFO: " << loggedID << '-' << loggedAss << '-' << " Operation Performed: " << "Reset All Grade of students" << '\n';


    delete[] marks, grades, awarded;
}

bool Teacher::assignAttendence(string studentId, string date, string day)
{
    setAndDisplayAttendence(date, day);
    string path = "Attendence";
    string full = path + "\\" + date + '-' + day + ".txt";

    int index;
    int i = 0;
    int current = -1;
    char choice;
    index = numberOfLines(full) + 1;

    string* marks = new string[index];
    string data;
    string oop, oopl, dld, dldl, diff, cp;

    fstream read(full);

    while (!read.eof())
    {
        getline(read, marks[i], '\n');
        i++;
    }

    for (int i = 0; i < index; i++)
    {
        if (marks[i].substr(0, 7) == studentId)
            current = i;
    }

    if (current == -1)
    {
        return false;
    }

    data = marks[current].substr(0, marks[current].find('~'));
    //cout << data;
    oop = marks[current].substr(marks[current].find('~') + 1, marks[current].find('!') - marks[current].find('~') - 1);
    oopl = marks[current].substr(marks[current].find('!') + 1, marks[current].find('@') - marks[current].find('!') - 1);
    dld = marks[current].substr(marks[current].find('@') + 1, marks[current].find('#') - marks[current].find('@') - 1);
    dldl = marks[current].substr(marks[current].find('#') + 1, marks[current].find('$') - marks[current].find('#') - 1);
    diff = marks[current].substr(marks[current].find('$') + 1, marks[current].find('%') - marks[current].find('$') - 1);
    cp = marks[current].substr(marks[current].find('%') + 1, -1);

    cout << "\t\t\t" << "Which Subject Attendence To Update/Insert:" << endl;
    cout << "\t\t\t" << "1-OOP" << endl
        << "\t\t\t" << "2-OOP LAB" << endl
        << "\t\t\t" << "3-DLD" << endl
        << "\t\t\t" << "4-DLD LAB" << endl
        << "\t\t\t" << "5-DIFFERNTIAL EQUATION" << endl
        << "\t\t\t" << "6-COMMUNICATON AND PRESENTAION SKILLS" << endl
        << "\t\t\t" << "7-EXIT";

    do {

        choice = _getche();

    } while (choice < 49 || choice>55);

    switch (choice)
    {
    case '1':
        cout << "\n\t\t\t" << "Enter Attendence of OOP--(P/A): ";
        getline(cin >> ws, oop);
        break;
    case '2':
        cout << "\n\t\t\t" << "Enter Attendence of OOP Lab--(P/A): ";
        getline(cin >> ws, oopl);
        break;
    case '3':
        cout << "\n\t\t\t" << "Enter Attendence of DLD--(P/A): ";
        getline(cin >> ws, dld);
        break;
    case '4':
        cout << "\n\t\t\t" << "Enter Attendence of DLD Lab--(P/A): ";
        getline(cin >> ws, dldl);
        break;
    case '5':
        cout << "\n\t\t\t" << "Enter Attendence of Differential equation--(P/A): ";
        getline(cin >> ws, diff);
        break;
    case '6':
        cout << "\n\t\t\t" << "Enter Attendence of CP--(P/A): ";
        getline(cin >> ws, cp);
        break;
    default:
        break;
    }
    if (choice != '7' && current != -1)
    {

        marks[current] = data + '~' + oop + '!' + oopl + '@' + dld + '#' + dldl + '$' + diff + '%' + cp;

        ofstream write(full);

        for (int i = 0; i < index; i++)
        {
            if (!marks[i].empty())
                write << marks[i] << '\n';
        }

    }

    ofstream Enter("activities.txt", ios::app);


    Enter << "INFO: " << loggedID << '-' << loggedAss << '-' << " Operation Performed: " << "Updated the Attendence of student whose roll number is " << studentId << '\n';


    delete[] marks;
    return true;
}


void Teacher::setAndDisplayMarks() {

    studentMarksAnimation();

    int index;
    int i = 0;

    index = numberOfLines("student.txt") + 1;

    string* students = new string[index];
    string* marks = new string[index];
    string* marksNew = new string[index];

    string OOP, OOPL, DLD, DLDL, DIFF, CP;

    string studentName = "\0", studentID = "\0";

    fstream read("student.txt");
    fstream read2("marks.txt");

    while (!read.eof())
    {
        getline(read, students[i], '\n');
        getline(read2, marks[i], '\n');
        i++;
    }
    //display
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    //
    for (int i = 0; i < index; i++)
    {

        studentID = students[i].substr(0, 7);
        studentName = students[i].substr(students[i].find('_') + 1, students[i].find('~') - students[i].find('_') - 1);

        if (!students[i].empty())
        {
            //oop
            if (marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1) == "\0")
            {
                OOP = "0";
            }
            else {
                OOP = marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1);
            }

            if (marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1) == "\0")
            {
                OOPL = "0";
            }
            else {
                OOPL = marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1);
            }
            //dld
            if (marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1) == "\0")
            {
                DLD = "0";
            }
            else {
                DLD = marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1);
            }

            if (marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1) == "\0")
            {
                DLDL = "0";
            }
            else {
                DLDL = marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1);
            }
            //DIFF
            if (marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1) == "\0")
            {
                DIFF = "0";
            }
            else {
                DIFF = marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1);
            }
            //CP
            if (marks[i].substr(marks[i].find('%') + 1, -1) == "\0")
            {
                CP = "0";
            }
            else {
                CP = marks[i].substr(marks[i].find('%') + 1, -1);
            }
            if (!students[i].empty())
            {
                marksNew[i] = studentID + '_' + studentName + '~' + OOP + '!' + OOPL + '@' + DLD + '#' + DLDL + '$' + DIFF + '%' + CP;
            }
            //display
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t" << "|" << setw(8) << studentID << setw(25) << studentName << setw(10) << OOP << setw(10) << OOPL << setw(10) << DLD << setw(10) << DLDL << setw(10) << DIFF << setw(10) << CP << "     |" << endl;

        }

    }

    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

    ofstream write("marks.txt");

    for (int i = 0; i < index; i++)
    {
        //cout << marksNew[i] << endl;
        if (!marksNew[i].empty())
            write << marksNew[i] << '\n';
    }
    delete[] students, marks, marksNew;
}

void Teacher::setAndDisplayGrades() {

    studentGradesAnimation();

    int index;
    int i = 0;

    index = numberOfLines("student.txt") + 1;

    string* students = new string[index];
    string* grades = new string[index];
    string* gradesNew = new string[index];

    string OOP, OOPL, DLD, DLDL, DIFF, CP;

    string studentName = "\0", studentID = "\0";

    fstream read("student.txt");
    fstream read2("grades.txt");

    while (!read.eof())
    {
        getline(read, students[i], '\n');
        getline(read2, grades[i], '\n');
        i++;
    }
    //display
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    //
    for (int i = 0; i < index; i++)
    {

        studentID = students[i].substr(0, 7);
        studentName = students[i].substr(students[i].find('_') + 1, students[i].find('~') - students[i].find('_') - 1);

        if (!students[i].empty())
        {
            //oop
            if (grades[i].substr(grades[i].find('~') + 1, grades[i].find('!') - grades[i].find('~') - 1) == "\0")
            {
                OOP = "Null";
            }
            else {
                OOP = grades[i].substr(grades[i].find('~') + 1, grades[i].find('!') - grades[i].find('~') - 1);
            }

            if (grades[i].substr(grades[i].find('!') + 1, grades[i].find('@') - grades[i].find('!') - 1) == "\0")
            {
                OOPL = "Null";
            }
            else {
                OOPL = grades[i].substr(grades[i].find('!') + 1, grades[i].find('@') - grades[i].find('!') - 1);
            }
            //dld
            if (grades[i].substr(grades[i].find('@') + 1, grades[i].find('#') - grades[i].find('@') - 1) == "\0")
            {
                DLD = "Null";
            }
            else {
                DLD = grades[i].substr(grades[i].find('@') + 1, grades[i].find('#') - grades[i].find('@') - 1);
            }

            if (grades[i].substr(grades[i].find('#') + 1, grades[i].find('$') - grades[i].find('#') - 1) == "\0")
            {
                DLDL = "Null";
            }
            else {
                DLDL = grades[i].substr(grades[i].find('#') + 1, grades[i].find('$') - grades[i].find('#') - 1);
            }
            //DIFF
            if (grades[i].substr(grades[i].find('$') + 1, grades[i].find('%') - grades[i].find('$') - 1) == "\0")
            {
                DIFF = "Null";
            }
            else {
                DIFF = grades[i].substr(grades[i].find('$') + 1, grades[i].find('%') - grades[i].find('$') - 1);
            }
            //CP
            if (grades[i].substr(grades[i].find('%') + 1, -1) == "\0")
            {
                CP = "Null";
            }
            else {
                CP = grades[i].substr(grades[i].find('%') + 1, -1);
            }
            if (!students[i].empty())
            {
                gradesNew[i] = studentID + '_' + studentName + '~' + OOP + '!' + OOPL + '@' + DLD + '#' + DLDL + '$' + DIFF + '%' + CP;
            }
            //display
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t" << "|" << setw(8) << studentID << setw(25) << studentName << setw(10) << OOP << setw(10) << OOPL << setw(10) << DLD << setw(10) << DLDL << setw(10) << DIFF << setw(10) << CP << "     |" << endl;

        }

    }

    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

    ofstream write("grades.txt");

    for (int i = 0; i < index; i++)
    {
        //cout << marksNew[i] << endl;
        if (!gradesNew[i].empty())
            write << gradesNew[i] << '\n';
    }
    delete[] students, grades, gradesNew;
}

void Teacher::setAndDisplayAttendence(string date, string day) {

    cout << endl;
    studentAttendenceAnimation();

    string path = "Attendence";
    string full = path + "\\" + date + '-' + day + ".txt";

    int index;
    int i = 0;

    index = numberOfLines("student.txt") + 1;

    string* students = new string[index];
    string* marks = new string[index];
    string* attendence = new string[index];

    string OOP, OOPL, DLD, DLDL, DIFF, CP;

    string studentName = "\0", studentID = "\0";

    fstream read("student.txt");
    fstream read2(full);

    while (!read.eof())
    {
        getline(read, students[i], '\n');
        getline(read2, marks[i], '\n');
        i++;
    }
    //display
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << full << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "OOP" << setw(10) << "OOP-LAB" << setw(10) << "DLD" << setw(10) << "DLD-LAB" << setw(10) << "DIFF" << setw(10) << "CP" << "   |" << endl;
    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
    //
    for (int i = 0; i < index; i++)
    {

        studentID = students[i].substr(0, 7);
        studentName = students[i].substr(students[i].find('_') + 1, students[i].find('~') - students[i].find('_') - 1);

        if (!students[i].empty())
        {
            //oop
            if (marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1) == "\0")
            {
                OOP = "0";
            }
            else {
                OOP = marks[i].substr(marks[i].find('~') + 1, marks[i].find('!') - marks[i].find('~') - 1);
            }

            if (marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1) == "\0")
            {
                OOPL = "0";
            }
            else {
                OOPL = marks[i].substr(marks[i].find('!') + 1, marks[i].find('@') - marks[i].find('!') - 1);
            }
            //dld
            if (marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1) == "\0")
            {
                DLD = "0";
            }
            else {
                DLD = marks[i].substr(marks[i].find('@') + 1, marks[i].find('#') - marks[i].find('@') - 1);
            }

            if (marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1) == "\0")
            {
                DLDL = "0";
            }
            else {
                DLDL = marks[i].substr(marks[i].find('#') + 1, marks[i].find('$') - marks[i].find('#') - 1);
            }
            //DIFF
            if (marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1) == "\0")
            {
                DIFF = "0";
            }
            else {
                DIFF = marks[i].substr(marks[i].find('$') + 1, marks[i].find('%') - marks[i].find('$') - 1);
            }
            //CP
            if (marks[i].substr(marks[i].find('%') + 1, -1) == "\0")
            {
                CP = "0";
            }
            else {
                CP = marks[i].substr(marks[i].find('%') + 1, -1);
            }
            if (!students[i].empty())
            {
                attendence[i] = studentID + '_' + studentName + '~' + OOP + '!' + OOPL + '@' + DLD + '#' + DLDL + '$' + DIFF + '%' + CP;
            }
            //display
            cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t" << "|" << setw(8) << studentID << setw(25) << studentName << setw(10) << OOP << setw(10) << OOPL << setw(10) << DLD << setw(10) << DLDL << setw(10) << DIFF << setw(10) << CP << "     |" << endl;

        }

    }

    cout << "\t\t\t" << "----------------------------------------------------------------------------------------------------" << endl;

    ofstream write("attendenceData.txt", ios::app);
    ofstream write2(full);

    for (int i = 0; i < index; i++)
    {
        //cout << marksNew[i] << endl;
        if (!attendence[i].empty())
            write2 << attendence[i] << '\n';
    }
    write << date + '-' + day + '\n';
    RemoveReduntancy("attendenceData.txt");
    delete[] students, marks, attendence;
}


bool Hod::signIntoSystem(string inputUserName, string inputPassword) {
    int index;
    int i = 0;

    string user, pass;

    fstream read("hod.txt");

    index = numberOfLines("hod.txt") + 1;

    string* teachers = new string[index];

    while (!read.eof()) {
        getline(read, teachers[i], '\n');
        i++;
    }

    for (int i = 0; i < index; i++)
    {
        user = teachers[i].substr(teachers[i].find('#') + 1, teachers[i].find('$') - teachers[i].find('#') - 1);
        pass = teachers[i].substr(teachers[i].find('$') + 1, teachers[i].find('%') - teachers[i].find('$') - 1);

        if (user == inputUserName && pass == inputPassword)
        {
            loggedAss = teachers[i].substr(teachers[i].find('_') + 1, teachers[i].find('~') - teachers[i].find('_') - 1);
            loggedID = teachers[i].substr(0, 6);

            delete[] teachers;

            cout << "\n\t\t\t You Sucessfully logged in As:" << endl;
            cout << "\n\t\t\t HOD Name:" << loggedAss << endl;
            cout << "\t\t\t HOD ID:" << loggedID << endl;;

            //cout << loggedAss << ' ' << loggedID << endl;
            return true;
        }
    }

    return false;

}

void Hod::hodAsTeacher()
{
    cout << endl;
    cout << "\t\t\t" << "------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << "Your data has been added to Teacher Module Now u can login to teacher module and Teach" << " |" << endl;
    cout << "\t\t\t" << "|" << "Username :usman" << setw(40) << "Password :112233" << setw(35) << "   |" << endl;
    cout << "\t\t\t" << "------------------------------------------------------------------------------------------" << endl;

}

void Hod::viewTeacherActivities()
{
    system("cls");
    activitylogoAnimation();

    int lines;

    lines = numberOfLines("activities.txt") + 1;

    string* activity = new string[lines];
    int i = 0;

    fstream read("activities.txt");
    while (!read.eof())
    {
        getline(read, activity[i], '\n');
        i++;
    }

    cout << "\n\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < lines; i++)
    {
        if (!activity[i].empty())
            cout << "\t\t\t|" << activity[i] << endl;
    }

    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;

}

void Hod::accessStudentModule()
{
    cout << endl;
    cout << "\t\t\t" << "------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << "Login To teacher module as Hod and access all Students" << setw(34) << "|" << endl;
    cout << "\t\t\t" << "|" << "Username :usman" << setw(40) << "Password :112233" << setw(35) << "   |" << endl;
    cout << "\t\t\t" << "------------------------------------------------------------------------------------------" << endl;

}

void Hod::viewAllStudents() {

    fstream read("student.txt");
    int i = 0;
    char choice = '1';
    int index = numberOfLines("student.txt") + 1;
    string* students = new string[index];

    string uniqueID, name, firstName, lastName, gender, departmentName, address;

    string data;

    char selestion;

    while (!read.eof()) {
        getline(read, students[i], '\n');
        i++;
    }

    do {

        if (choice == '2') {

            cout << "\t\t\t" << "Enter Student ID:";
            cin >> data;

        }


        if (choice == '3') {

            cout << "\t\t\t" << "Enter Department" << endl;
            cout << "\t\t\t" << "1. Computer Science" << endl
                << "\t\t\t" << "2. Electric Engineering" << endl
                << "\t\t\t" << "3. Software Engineering" << endl
                << "\t\t\t" << "4. Business" << endl
                << "\t\t\t" << "5. Social Sciences";
            do
            {
                cin >> selestion;
            } while (selestion > 53 || selestion <= 48);
            switch (selestion)
            {
            case '1':
                data = "Computer Science";
                break;
            case '2':
                data = "Electric Engineering";
                break;
            case '3':
                data = "Software Engineering";
                break;
            case '4':
                data = "Business";
                break;
            case '5':
                data = "Social Sciences";
                break;
            }

        }
        system("cls");
        studentTableAnimation();
        cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "Gender" << setw(20) << "Department Name" << setw(15) << "Address" << "   |" << endl;
        cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;


        for (int i = 0; i < index; i++)
        {
            firstName = students[i].substr(students[i].find('_') + 1, students[i].find('~') - students[i].find('_') - 1);
            lastName = students[i].substr(students[i].find('~') + 1, students[i].find('@') - students[i].find('~') - 1);

            name = firstName + ' ' + lastName;
            uniqueID = students[i].substr(0, 7);
            gender = students[i].substr(students[i].find('&') + 1, students[i].find('|') - students[i].find('&') - 1);
            address = students[i].substr(students[i].find('*') + 1, students[i].find('+') - students[i].find('*') - 1);
            departmentName = students[i].substr(students[i].find('@') + 1, students[i].find('#') - students[i].find('@') - 1);

            if (choice == '1') {

                if (!students[i].empty()) {
                    cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                }

            }

            if (choice == '2') {



                if (!students[i].empty() && (uniqueID == data)) {
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                    cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                }

            }

            if (choice == '3') {


                if (!students[i].empty() && (students[i].substr(students[i].find('@') + 1, students[i].find('#') - students[i].find('@') - 1) == data)) {
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                    cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                }

            }

        }
        cout << "\t\t\t" << "|" << "Registered Numbers of Students:" << numberOfLines("student.txt") << setw(52) << "|" << endl;
        cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t" << "Want To Search Students By:" << endl
            << "\t\t\t" << "1-show All students." << endl
            << "\t\t\t" << "2-Roll Number." << endl
            << "\t\t\t" << "3-By Department." << endl
            << "\t\t\t" << "4-Exit.";
        cin >> choice;

    } while (choice == '1' || choice == '2' || choice == '3');

    delete[] students;

}

void Hod::viewAllTeachers() {

    fstream read("teacher.txt");
    int i = 0;
    int index = numberOfLines("teacher.txt") + 1;
    string* teachers = new string[index];

    string uniqueID, name, firstName, lastName, gender, qualification, contact, uniqueUsername;

    while (!read.eof()) {
        getline(read, teachers[i], '\n');
        i++;
    }

    teacherTableAnimation();
    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Teacher ID" << setw(25) << "Full Name" << setw(10) << "Gender" << setw(20) << "Qualification" << setw(20) << "Contact" << "" << setw(15) << "Username" << "   |" << endl;
    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;


    for (int i = 0; i < index; i++)
    {
        firstName = teachers[i].substr(teachers[i].find('_') + 1, teachers[i].find('~') - teachers[i].find('_') - 1);
        lastName = teachers[i].substr(teachers[i].find('~') + 1, teachers[i].find('@') - teachers[i].find('~') - 1);

        name = firstName + ' ' + lastName;
        uniqueID = teachers[i].substr(0, 6);
        gender = teachers[i].substr(teachers[i].find('^') + 1, teachers[i].find('|') - teachers[i].find('^') - 1);
        qualification = teachers[i].substr(teachers[i].find('/') + 1, teachers[i].find('*') - teachers[i].find('/') - 1);
        contact = teachers[i].substr(teachers[i].find('|') + 1, teachers[i].find('/') - teachers[i].find('|') - 1);
        uniqueUsername = teachers[i].substr(teachers[i].find('#') + 1, teachers[i].find('$') - teachers[i].find('#') - 1);

        if (!teachers[i].empty()) {
            cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << qualification << "|" << setw(20) << contact << "|" << setw(15) << uniqueUsername << "|" << endl;
            cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;
        }
    }
    cout << "\t\t\t" << "|" << "Total NUmbers of Teachers:" << numberOfLines("teacher.txt") << setw(77) << "|" << endl;
    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;


    delete[] teachers;
}




Administrator::Administrator()
{
    tId = numberOfLines("teacher.txt") + 101;
    sId = numberOfLines("student.txt") + 101;
    RemoveReduntancy("attendenceData.txt");
}

bool Administrator::SignIntoSystem()
{

    cout << "\n\t\t\t Administrator Portal sign in:" << endl;
    cout << "\t\t\t USER NAME:";
    getline(cin >> ws, enteredUsername);
    cout << "\t\t\t PASSWORD:";
    getline(cin, enteredPassword);

    return (enteredUsername == userName && enteredPassword == password ? true : false);
}

void Administrator::addNewTeacher(string fileName)
{
    char num;
    ofstream write(fileName, ios::app);
    string data;
    string dept;
    cout << "\n\t\t\tEnter Department" << endl;
    cout << "\t\t\t1. Computer Science\n\t\t\t2. Electric Engineering\n\t\t\t3. Software Engineering\n\t\t\t4. Business\n\t\t\t5. Social Sciences";
    do
    {
        num = _getche();
    } while (num > 53 || num <= 48);
    switch (num)
    {
    case '1':
        dept = "Computer Science";
        data = "CS-";
        break;
    case '2':
        dept = "Electric Engineering";
        data = "EE-";
        break;
    case '3':
        dept = "Software Engineering";
        data = "SE-";
        break;
    case '4':
        dept = "Business";
        data = "BB-";
        break;
    case '5':
        dept = "Social Sciences";
        data = "SS-";
        break;
    }
    cout << endl;
    write << data << tId << "_";
    cout << "\t\t\tEnter First Name: ";
    getline(cin, data);
    write << data << "~";
    cout << "\t\t\tEnter Second Name: ";
    getline(cin, data);
    write << data << "@";
    write << dept << "#";

    cout << "\t\t\tEnter Username: ";
    getline(cin >> ws, data);
    write << data << "$";
    cout << "\t\t\tEnter Password: ";
    getline(cin, data);
    write << data << "%";
    cout << "\t\t\tEnter Registration Date: ";
    getline(cin, data);
    write << data << "^";
    cout << "\t\t\tEnter Gender: ";
    getline(cin, data);
    write << data << "|";
    cout << "\t\t\tEnter Contact No.: ";
    getline(cin, data);
    write << data << "/";
    cout << "\t\t\tEnter Qualification: ";
    getline(cin, data);
    write << data << "*";
    cout << "\t\t\tEnter Address: ";
    getline(cin, data);
    write << data << "+";
    cout << "\t\t\tEnter Salary: ";
    getline(cin, data);
    write << data << endl;
    tId++;
}


bool Administrator::editTeacher(string id)
{
    fstream read("teacher.txt");
    int i = 0;
    int index = -1;
    string data;
    int size = numberOfLines("teacher.txt") + 1;
    string* teachers = new string[size];
    string address, qualification, contact, salary;
    char choice;
    while (!read.eof())
    {
        getline(read, teachers[i], '\n');
        i++;
    }
    for (int i = 0; i < size; i++)
    {
        if (teachers[i].substr(0, 6) == id)
        {
            index = i;
        }

    }
    if (index == -1)
    {
        return false;
    }
    data = teachers[index].substr(0, teachers[index].find('|'));
    //cout<<data<<endl;
    contact = teachers[index].substr(teachers[index].find('|') + 1, teachers[index].find('/') - teachers[index].find('|') - 1);
    //cout << contact << endl;
    qualification = teachers[index].substr(teachers[index].find('/') + 1, teachers[index].find('*') - teachers[index].find('/') - 1);
    //cout << qualification << endl;
    address = teachers[index].substr(teachers[index].find('*') + 1, teachers[index].find('+') - teachers[index].find('*') - 1);
    //cout << address << endl;
    salary = teachers[index].substr(teachers[index].find('+') + 1, -1);
    //cout << salary << endl;



    cout << "\t\t\t" << "Which Field You Want To Update:" << endl;
    cout << "\t\t\t" << "1-Contact" << endl
        << "\t\t\t" << "2-Qualification" << endl
        << "\t\t\t" << "3-Address" << endl
        << "\t\t\t" << "4-Salary" << endl
        << "\t\t\t" << "5-Exit";

    do {

        cin >> choice;

    } while (choice < 49 || choice>53);

    switch (choice)
    {
    case '1':
        cout << "\t\t\t" << "Enter New Contact Number: ";
        getline(cin >> ws, contact);
        break;
    case '2':
        cout << "\t\t\t" << "Enter New Qualification: ";
        getline(cin >> ws, qualification);
        break;
    case '3':
        cout << "\t\t\t" << "Enter New Address: ";
        getline(cin >> ws, address);
        break;
    case '4':
        cout << "\t\t\t" << "Enter New Salary: ";
        getline(cin >> ws, salary);
        break;
    default:
        break;
    }
    data = data + '|' + contact + '/' + qualification + '*' + address + '+' + salary;
    teachers[index] = data;

    if (choice == '1' || choice == '2' || choice == '3' || choice == '4')
    {

        ofstream write("teacher.txt");
        string line;
        for (int i = 0; i < size; i++)
        {
            line = teachers[i];
            if (!line.empty())
                write << line << endl;
        }
        write.close();
        cout << "\t\t\t" << "Data Updated Successfully" << endl;

    }
    read.close();
    delete[] teachers;
    return true;
}


void Administrator::viewAllTeachers() {

    fstream read("teacher.txt");
    int i = 0;
    int index = numberOfLines("teacher.txt") + 1;
    string* teachers = new string[index];

    string uniqueID, name, firstName, lastName, gender, qualification, contact, uniqueUsername;

    while (!read.eof()) {
        getline(read, teachers[i], '\n');
        i++;
    }

    teacherTableAnimation();
    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Teacher ID" << setw(25) << "Full Name" << setw(10) << "Gender" << setw(20) << "Qualification" << setw(20) << "Contact" << "" << setw(15) << "Username" << "   |" << endl;
    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;


    for (int i = 0; i < index; i++)
    {
        firstName = teachers[i].substr(teachers[i].find('_') + 1, teachers[i].find('~') - teachers[i].find('_') - 1);
        lastName = teachers[i].substr(teachers[i].find('~') + 1, teachers[i].find('@') - teachers[i].find('~') - 1);

        name = firstName + ' ' + lastName;
        uniqueID = teachers[i].substr(0, 6);
        gender = teachers[i].substr(teachers[i].find('^') + 1, teachers[i].find('|') - teachers[i].find('^') - 1);
        qualification = teachers[i].substr(teachers[i].find('/') + 1, teachers[i].find('*') - teachers[i].find('/') - 1);
        contact = teachers[i].substr(teachers[i].find('|') + 1, teachers[i].find('/') - teachers[i].find('|') - 1);
        uniqueUsername = teachers[i].substr(teachers[i].find('#') + 1, teachers[i].find('$') - teachers[i].find('#') - 1);

        if (!teachers[i].empty()) {
            cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << qualification << "|" << setw(20) << contact << "|" << setw(15) << uniqueUsername << "|" << endl;
            cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;
        }
    }
    cout << "\t\t\t" << "|" << "Total NUmbers of Teachers:" << numberOfLines("teacher.txt") << setw(77) << "|" << endl;
    cout << "\t\t\t" << "--------------------------------------------------------------------------------------------------------" << endl;


    delete[] teachers;
}


void Administrator::addNewStudent(string fileName) {

    char num;
    ofstream write(fileName, ios::app);
    string data;
    string dept;
    cout << "\n\t\t\tEnter Department" << endl;
    cout << "\t\t\t1. Computer Science\n\t\t\t2. Electric Engineering\n\t\t\t3. Software Engineering\n\t\t\t4. Business\n\t\t\t5. Social Sciences";

    do
    {
        num = _getche();
    } while (num > 53 || num <= 48);

    switch (num)
    {
    case '1':
        dept = "Computer Science";
        break;
    case '2':
        dept = "Electric Engineering";
        break;
    case '3':
        dept = "Software Engineering";
        break;
    case '4':
        dept = "Business";
        break;
    case '5':
        dept = "Social Sciences";
        break;
    }

    cout << endl;
    cout << "\t\t\tEnter Batch:";
    getline(cin >> ws, data);
    write << data << "F-" << sId << "_";
    cout << "\t\t\tEnter First Name: ";
    getline(cin, data);
    write << data << "~";
    cout << "\t\t\tEnter Second Name: ";
    getline(cin, data);
    write << data << "@";
    write << dept << "#";

    cout << "\t\t\tEnter Username: ";
    getline(cin >> ws, data);
    write << data << "$";
    cout << "\t\t\tEnter Password: ";
    getline(cin, data);
    write << data << "%";
    cout << "\t\t\tEnter Registration Date: ";
    getline(cin, data);
    write << data << "^";
    cout << "\t\t\tEnterBlood Group: ";
    getline(cin, data);
    write << data << "&";
    cout << "\t\t\tEnter Gender: ";
    getline(cin, data);
    write << data << "|";
    cout << "\t\t\tEnter Contact No.: ";
    getline(cin, data);
    write << data << "/";
    cout << "\t\t\tEnter Qualification: ";
    getline(cin, data);
    write << data << "*";
    cout << "\t\t\tEnter Address: ";
    getline(cin, data);
    write << data << "+";
    cout << "\t\t\tEnter Marks: ";
    getline(cin, data);
    write << data << "?";
    cout << "\t\t\tEnter Fee Status: ";
    getline(cin, data);
    write << data << endl;

    sId++;

}


bool Administrator::editStudent(string id) {

    fstream read("student.txt");
    char choice;
    int i = 0;
    int  index = -1;
    int size = numberOfLines("student.txt") + 1;
    string* students = new string[size];
    string data, data2, data3, data4;
    string firstName, lastName, contact, address, feeStatus;
    while (!read.eof())
    {
        getline(read, students[i], '\n');
        i++;
    }
    for (int i = 0; i < size; i++) {
        if (students[i].substr(0, 7) == id)
        {

            index = i;

        }
    }
    if (index == -1)
    {
        return false;
    }

    data = students[index].substr(0, students[index].find('_'));
    // cout << data << endl;
    data2 = students[index].substr(students[index].find('@'), students[index].find('|') - students[index].find('@') + 1);
    //cout << data2<< endl;
    data3 = students[index].substr(students[index].find('/'), students[index].find('*') - students[index].find('/') + 1);
    //cout << data3 << endl;
    data4 = students[index].substr(students[index].find('+'), students[index].find('?') - students[index].find('+') + 1);
    //cout << data4 << endl;
    firstName = students[index].substr(students[index].find('_') + 1, students[index].find('~') - students[index].find('_') - 1);
    //cout << firstName << endl;
    lastName = students[index].substr(students[index].find('~') + 1, students[index].find('@') - students[index].find('~') - 1);
    //cout << lastName << endl;
    contact = students[index].substr(students[index].find('|') + 1, students[index].find('/') - students[index].find('|') - 1);
    //cout << contact << endl;
    address = students[index].substr(students[index].find('*') + 1, students[index].find('+') - students[index].find('*') - 1);
    //cout << address << endl;
    feeStatus = students[index].substr(students[index].find('?') + 1, -1);
    //cout << feeStatus << endl;


    cout << "\n\t\t\tWhich Field You Want To Update:" << endl;
    cout << "\t\t\t1-First Name" << endl
        << "\t\t\t2-Last Name" << endl
        << "\t\t\t3-Address" << endl
        << "\t\t\t4-Fee Status" << endl
        << "\t\t\t5-Contact" << endl
        << "\t\t\t6-Exit";

    do {
        cin >> choice;
    } while (choice < 49 || choice>54);

    switch (choice)
    {
    case '1':
        cout << "\t\t\tEdit First Name: ";
        getline(cin >> ws, firstName);
        break;
    case '2':
        cout << "\t\t\tEdit  Last Name: ";
        getline(cin >> ws, lastName);
        break;
    case '3':
        cout << "\t\t\tEnter New Address: ";
        getline(cin >> ws, address);
        break;
    case '4':
        cout << "\t\t\tEnter New FEE Status: ";
        getline(cin >> ws, feeStatus);
        break;
    case '5':
        cout << "\t\t\tEnter New Contact Number: ";
        getline(cin >> ws, contact);
        break;
    default:
        break;
    }

    students[index] = data + '_' + firstName + '~' + lastName + data2 + contact + data3 + address + data4 + feeStatus;

    if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
    {
        string line;
        ofstream write("student.txt");
        for (int i = 0; i < size; i++)
        {
            line = students[i];
            if (!line.empty())
                write << line << endl;
        }
        write.close();
        cout << "\t\t\tData Updated Successfully" << endl;

    }
    read.close();
    delete[] students;

    return true;
}


void Administrator::viewAllStudents() {

    fstream read("student.txt");
    int i = 0;
    char choice = '1';
    int index = numberOfLines("student.txt") + 1;
    string* students = new string[index];

    string uniqueID, name, firstName, lastName, gender, departmentName, address;

    string data;

    char selestion;

    while (!read.eof()) {
        getline(read, students[i], '\n');
        i++;
    }

    do {

        if (choice == '2') {

            cout << "\t\t\t" << "Enter Student ID:";
            cin >> data;

        }


        if (choice == '3') {

            cout << "\t\t\t" << "Enter Department" << endl;
            cout << "\t\t\t" << "1. Computer Science" << endl
                << "\t\t\t" << "2. Electric Engineering" << endl
                << "\t\t\t" << "3. Software Engineering" << endl
                << "\t\t\t" << "4. Business" << endl
                << "\t\t\t" << "5. Social Sciences";
            do
            {
                cin >> selestion;
            } while (selestion > 53 || selestion <= 48);
            switch (selestion)
            {
            case '1':
                data = "Computer Science";
                break;
            case '2':
                data = "Electric Engineering";
                break;
            case '3':
                data = "Software Engineering";
                break;
            case '4':
                data = "Business";
                break;
            case '5':
                data = "Social Sciences";
                break;
            }

        }
        system("cls");
        studentTableAnimation();
        cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "Gender" << setw(20) << "Department Name" << setw(15) << "Address" << "   |" << endl;
        cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;


        for (int i = 0; i < index; i++)
        {
            firstName = students[i].substr(students[i].find('_') + 1, students[i].find('~') - students[i].find('_') - 1);
            lastName = students[i].substr(students[i].find('~') + 1, students[i].find('@') - students[i].find('~') - 1);

            name = firstName + ' ' + lastName;
            uniqueID = students[i].substr(0, 7);
            gender = students[i].substr(students[i].find('&') + 1, students[i].find('|') - students[i].find('&') - 1);
            address = students[i].substr(students[i].find('*') + 1, students[i].find('+') - students[i].find('*') - 1);
            departmentName = students[i].substr(students[i].find('@') + 1, students[i].find('#') - students[i].find('@') - 1);

            if (choice == '1') {

                if (!students[i].empty()) {
                    cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                }

            }

            if (choice == '2') {



                if (!students[i].empty() && (uniqueID == data)) {
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                    cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                }

            }

            if (choice == '3') {


                if (!students[i].empty() && (students[i].substr(students[i].find('@') + 1, students[i].find('#') - students[i].find('@') - 1) == data)) {
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                    cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
                    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
                }

            }

        }
        cout << "\t\t\t" << "|" << "Registered Numbers of Students:" << numberOfLines("student.txt") << setw(52) << "|" << endl;
        cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t" << "Want To Search Students By:" << endl
            << "\t\t\t" << "1-show All students." << endl
            << "\t\t\t" << "2-Roll Number." << endl
            << "\t\t\t" << "3-By Department." << endl
            << "\t\t\t" << "4-Exit.";
        cin >> choice;

    } while (choice == '1' || choice == '2' || choice == '3');

    delete[] students;

}

void Administrator::viewAllStudentsWithoutOption() {

    fstream read("student.txt");
    int i = 0;
    int index = numberOfLines("student.txt") + 1;
    string* students = new string[index];

    string uniqueID, name, firstName, lastName, gender, departmentName, address;

    string data;

    while (!read.eof()) {
        getline(read, students[i], '\n');
        i++;
    }

    studentTableAnimation();
    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t" << "|" << setw(8) << "Student ID" << setw(25) << "Full Name" << setw(10) << "Gender" << setw(20) << "Department Name" << setw(15) << "Address" << "   |" << endl;
    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;


    for (int i = 0; i < index - 1; i++)
    {
        firstName = students[i].substr(students[i].find('_') + 1, students[i].find('~') - students[i].find('_') - 1);
        lastName = students[i].substr(students[i].find('~') + 1, students[i].find('@') - students[i].find('~') - 1);

        name = firstName + ' ' + lastName;
        uniqueID = students[i].substr(0, 7);
        gender = students[i].substr(students[i].find('&') + 1, students[i].find('|') - students[i].find('&') - 1);
        address = students[i].substr(students[i].find('*') + 1, students[i].find('+') - students[i].find('*') - 1);
        departmentName = students[i].substr(students[i].find('@') + 1, students[i].find('#') - students[i].find('@') - 1);



        if (!students[i].empty()) {
            cout << "\t\t\t" << "|" << setw(8) << uniqueID << "|" << setw(25) << name << "|" << setw(10) << gender << "|" << setw(20) << departmentName << "|" << setw(15) << address << " |" << endl;
            cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;
        }

    }
    cout << "\t\t\t" << "|" << "Registered Numbers of Students:" << numberOfLines("student.txt") << setw(52) << "|" << endl;
    cout << "\t\t\t" << "-------------------------------------------------------------------------------------" << endl;

    delete[] students;
}

