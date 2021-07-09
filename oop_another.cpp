#include <iostream>
#include <vector>

using namespace std;

//base Class
class Subject
{
private:
public:
    string subject_name;
    int Subject_Code;
    vector<double> quiz_marks;
    double final_marks;

    double term_final_marks;
    Subject()
    {
        final_marks = 0;
    }

    // Subject Name, Quiz Calculation
    void subject_info()
    {
        cout << "Enter Subject Name :";
        cin >> subject_name;

        cout << "Enter Subject Code :";
        cin >> Subject_Code;

        int no_of_quiz; // Here no_of_quiz is considered as the totl taken quizes by teachers
                        //& here the quiz marks is averaged by the no_of_quiz
        float quiz_mark;

        cout << "Enter No of Quiz :";
        cin >> no_of_quiz;
        cout << "Enter Quiz Marks:";

        for (int i = 0; i < no_of_quiz; i++)
        {
            cin >> quiz_mark;
            quiz_marks.push_back(quiz_mark);
            final_marks += quiz_mark / (no_of_quiz);
        }

        cout << "Enter term final Marks:";
        cin >> term_final_marks;
    }

    //  print_marks();
    void print_marks()
    {
        cout << "Subject Name : " << subject_name << endl;
        cout << "Subject Code : " << Subject_Code << endl;
        cout << "=== QUIZ MARKS of " << subject_name << "===" << endl;
        for (int i = 0; i < quiz_marks.size(); i++)
        {
            cout << "Quiz" << i + 1 << ":" << quiz_marks[i] << "  ";
        }
        cout << endl;
        cout << "== == == == ==" << endl;
        cout << "Term final Marks: " << term_final_marks << endl;
        cout << "Final Marks from Subject " << subject_name << " is : " << final_marks + term_final_marks << endl;
        cout << endl;
    }
};

//derived Student Class
class Student : public Subject
{

    //Member
private:
    string student_name;
    int roll_number;
    double final_marks;
    int no_of_subject;
    Subject *course;

public:
    //Constructor
    Student()
    {
        //This funciton will take input of Student's Name and Roll Number Only
        user_basic_info();
    }
    ~Student()
    {
        //destructor is created because destructor is created above
    }

    void user_basic_info()
    {

        cout << "Enter Student Name :";
        getline(cin, student_name);
        cout << "Enter Student Roll Number :";
        cin >> roll_number;

        cout << "Enter the Number of Subject:";

        cin >> no_of_subject;
        course = new Subject[no_of_subject];

        for (int i = 0; i < no_of_subject; i++)
        {
            course[i].subject_info();
        }

        printAll();
        delete course;
    }

    void printAll()
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "\t****Marks Sheet****" << endl;
        cout << "Student Name : " << student_name << endl;
        cout << "Roll : " << roll_number << endl;
        cout << endl;

        for (int i = 0; i < no_of_subject; i++)
        {
            course[i].print_marks();
        }
    }
};

int main()
{
    Student *marksheet;
    marksheet = new Student();

    return 0;
}
/*
working process of this code:

Enter student Name: A.K.M. Aktaruzzaman Shuvo
Enter student roll:190105050
Enter subject number:2
Enter subject name:EEE
Enter subject code:2103
Enter No of quiz:2
Enter Quiz Marks: 12 13
Enter Best quiz No: 2
Enter term final marks:56

*/