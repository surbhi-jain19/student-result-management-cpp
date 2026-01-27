// Student Result Management System
// Language: C++
// Concepts: Structures, Functions, Arrays, Loops
#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll_no;
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;
};

void input_details(struct student &S)
{
        cout<<"Enter the Name of Student : "<<endl;
        cin>>S.name;
        cout<<"Enter the Roll Number of Student : "<<endl;
        cin>>S.roll_no;
        cout<<"Enter Marks in Maths , English , Physics , Chemistry , Coding (all in sequence and out of 100) : "<<endl;
        cin>>S.m1>>S.m2>>S.m3>>S.m4>>S.m5;
}
void calculate_result(struct student &S)
{
    S.total = S.m1 + S.m2 + S.m3 + S.m4 + S.m5;
    S.percentage = (S.total / 500.0) * 100;
}
char calculate_grades(float percentage)
{
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

void display(struct student &S)
{
    char grade = calculate_grades(S.percentage);

    cout<<"Student Result"<<endl;
    cout<<"NAME        : "<<S.name<<endl;
    cout<<"ROLL NUMBER : "<<S.roll_no<<endl;
    cout<<"TOTAL       : "<<S.total<<endl;
    cout<<"PERCENTAGE  : "<<S.percentage<<endl;
    cout<<"GRADE       : " <<grade<<endl;

}
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    struct student S[n];

    for(int i = 0; i < n; i++)
    {
        input_details(S[i]);
        calculate_result(S[i]);
        display(S[i]);
    }
    return 0;
}
