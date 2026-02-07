// Student Result Management System
// Language: C++
// Concepts: Structures, Functions, Arrays, Loops
#include<iostream>
using namespace std;
class student
{
    private:
        string name;
        int roll_no;
        int m1,m2,m3,m4,m5;
        int total;
        float percentage;

    public:
        student()
        {
            total = 0;
            percentage = 0.0;
        }

    void input_details()
    {
        cout<<"Enter the Name of Student : "<<endl;
        cin>>name;
        cout<<"Enter the Roll Number of Student : "<<endl;
        cin>>roll_no;
        cout<<"Enter Marks in Maths , English , Physics , Chemistry , Coding (all in sequence and out of 100) : "<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
        }

        void calculate_result()
        {
            total = m1 + m2 + m3 + m4 + m5;
            percentage = (total / 500.0) * 100;
        }

        char calculate_grades()
        {
            if (percentage >= 90) return 'A';
            else if (percentage >= 80) return 'B';
            else if (percentage >= 70) return 'C';
            else if (percentage >= 60) return 'D';
            else return 'F';
            }

            void display()
            {
                cout<<"Student Result"<<endl;
                cout<<"NAME        : "<<name<<endl;
                cout<<"ROLL NUMBER : "<<roll_no<<endl;
                cout<<"TOTAL       : "<<total<<endl;
                cout<<"PERCENTAGE  : "<<percentage<<endl;
                cout<<"GRADE       : "<<calculate_grades()<<endl;

                }
};

int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    class student S[50];

    for(int i = 0; i < n; i++)
    {
        S[i].input_details();
        S[i].calculate_result();
        S[i].display();
    }

    float max =
    return 0;
}

