#include<iostream.h>
#include <conio.h>
int area(int l,int b)
{
  return(l*b);
}

double area(double r)
{
 return(3.14*r*r);
}

float area(float br,int h)
{
return (0.5*(br*h));
}

void main()
{
 int l,b,h;
 float r;
 clrscr();
 cout<<"\nEnter Lenght And Braedth For Rectangle:";
 cin>>l>>b;
 cout<<"\nEnter Height And Braedth For Triangle:";
 cin>>h>>b;
 cout<<"\nEnter Radius For Circle:";
 cin>>r;

 cout<<"\nArea Of Rectangle:"<<area(l,b);
 cout<<"\nArea Of Circle:"<<area(r);
 cout<<"\nArea Of Triangle:"<<area(l,h);


getch();
}