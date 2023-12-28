#include<iostream.h>
#include<conio.h>
class number
{
 int no1;

 public:
    void getdata();
    void display();
    void operator+(number n);
    void operator-(number n);
    void operator*(number n);
    void operator/(number n);
};

void number::getdata()
{
 cout<<"enter a number:";
 cin>>no1;
}
void number::display()
{
 cout<<"n1 number of object:"<<no1;
}

void number::operator+(number n)
{
 cout<<"addition of n1 and n2 :"<<no1+n.no1<<endl;
}

void number::operator-(number n)
{
 cout<<"subtraction of n1 and n2 :"<<no1-n.no1<<endl;
}

void number::operator*(number n)
{
 cout<<"multiplication of n1 and n2 :"<<no1*n.no1<<endl;
}

void number::operator/(number n)
{
 cout<<"divition of n1 and n2  :"<<no1/n.no1<<"."<<no1%n.no1<<endl;
}

void main()
{
 clrscr();
 number n1,n2;
 int a;
 do{
    cout<<"/n 1 adition:"<<endl;
    cout<<"2 subtraction:"<<endl;
    cout<<"3 multiplction:"<<endl;
    cout<<"4 divition:"<<endl;
    cout<<"5 exit"<<endl;
   cout<<" enter your choice"<<endl;
   cin>>a;
   switch(a)
   {


    case 1:
	  n1.getdata();
	 n2.getdata();
	 n1+n2;
	 break;
    case 2:
	  n1.getdata();
	 n2.getdata();
	 n1-n2;
	 break;
    case 3:
	 n1.getdata();
	 n2.getdata();
	 n1*n2;
	 break;
    case 4:
	 n1.getdata();
	 n2.getdata();
	 n1/n2;
	 break;
    case 5:
	 a=5;
	 break;
    default:
		cout<<"enter propar number"<<endl;
    }
 }while(a!=5);

 getch();

}