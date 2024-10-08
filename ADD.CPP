#include <iostream.h>
#include <conio.h>

void add(int a,int b)
{

 cout<<"\nAddition Of Intergers:"<<a+b;

}

void add(double a,double b)
{
 cout<<"\nAddition Of Doubles:"<<a+b;
}

void main()
{
 int n1,n2;
 double no1,no2;
 clrscr();

 cout<<"\nEnter 2 Int Numbers:";
 cin>>n1>>n2;

 cout<<"\nEnter 2 Double Numbers:";
 cin>>no1>>no2;

 add(n1,n2);
 add(no1,no2);
 getch();
}