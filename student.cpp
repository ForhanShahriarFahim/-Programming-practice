#include <iostream>

using namespace std;

class Student
{
    int s_roll;
    char s_name[20];
    string s_subjectN;
    float s_quiz;

public:
    Student();
    ~Student();
    //void setter();

    void getter();
};

Student ::Student()
{
    cout << "\nEnter Student Roll: ";
    cin >> s_roll;
    cout << "\nEnter Student name: ";
    cin >> s_name;
    cout << "\nEnter subject name: ";
    cin >> s_subjectN;
    cout << "\nEnter Quiz marks: ";
    cin >> s_quiz;
}

void Student::getter()
{
    cout << "\n\n**** Mark sheet ****";
    cout << "\nStudent Name     :  " << s_name;
    cout << "\nStudent roll     :  " << s_roll;
    cout << "\nSubject name     :  " << s_subjectN;
    cout << "\nQuiz marks       :  " << s_quiz;
    cout << "\nfinal marks      :  " << s_quiz;
    cout << "\n-------------------------------\n\n";
}

Student::~Student()
{
}

int main()
{
    Student s;

    s.getter();

    //s.getter();

    return 0;
}