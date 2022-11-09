#include<iostream>
using namespace std;
class Student
{
 int rno,percentage;
 char name[10];
 double marks;
 public:
 Student()
 {
 cout<<"Enter the roll no: ";
 cin>>rno;
 cout<<"Enter the name: ";
 cin>>name;
 cout<<"Enter the marks: ";
 cin>>marks;
 }
 void display()
 {
    if(marks<=600)
    {
         percentage=marks/600*100;
        cout<<"\nRoll No: "<<rno<<"\nName: "<<name<<"\nMarks: "<<marks<<"\nPercentage: "<<percentage;
    }
    else{
        cout<<"Invalid Marks!";
    }

 }
};
 int main()
 {
    Student s;
    s.display();
    return 0;
 }
 