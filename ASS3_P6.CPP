#include<iostream.h>
#include<conio.h>
class exame ;
class student
{
 int roll_no;
 char name,course;
 public:
  void  input_student()
   {
     cout<<"enter a roll no";
     cin>>roll_no;
     cout<<"\n enter a name:"<<endl;
     cin>>name;
     }
   void display_student()
   {
    cout<<"student roll no"<<roll_no<<endl;
    cout<<"student name"<<name<<endl;
   }

};

class exame:public student
{
 int marks1,marks2,marks3;
 public:
     void input_marks()
     {
      cout<<"emetr marks1:"<<endl;
      cin>>marks1;
      cout<<"enetr marks2:"<<endl;
      cin>>marks2;
      cout<<"enetr marks3:"<<endl;
      cin>>marks3;
     }
     void display_marks()
     {
      cout<<"marks1,marks2,marks3"<<marks1<<":"<<marks2<<":"<<marks3;
     }
     void display_result()
     {
      display_student();
      display_marks();
     }
};

void main()
{
 clrscr();
 exame e1,e2,e3;
 e1.input_student();
 e1.input_marks();
 e2.input_student();
 e2.input_marks();
 e3.input_student();
 e3.input_marks();
 e1.display_result();
 e2.display_result();
 e3.display_result();
 getch();

}