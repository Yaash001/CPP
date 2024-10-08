#include<iostream.h>
#include <conio.h>

void swap(int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

void swap(float *a,float *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

void swap(char *a,char *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

void main()
{

  int n1,n2;
  char num1,num2;
  float no1,no2;
  clrscr();
  cout<<"\nEnter 2 Numbers:";
  cin>>n1>>n2;
  cout<<"\nBefore Swap ";
  cout<<"\nA:"<<n1<<" B:"<<n2;
  swap(&n1,&n2);
  cout<<"\nAfter Swap ";
  cout<<"\nA:"<<n1<<" B:"<<n2;
  cout<<"\n\n";


  cout<<"\nEnter 2 Chars:";
  cin>>num1>>num2;
  cout<<"\nBefore Swap ";
  cout<<"\nA:"<<num1<<" B:"<<num2;
  swap(&num1,&num2);
  cout<<"\nAfter Swap ";
  cout<<"\nA:"<<num1<<" B:"<<num2;
  cout<<"\n\n";


  cout<<"\nEnter 2 Float Numbers:";
  cin>>no1>>no2;
  cout<<"\nBefore Swap ";
  cout<<"\nA:"<<no1<<" B:"<<no2;
  swap(&no1,&no2);
  cout<<"\nAfter Swap ";
  cout<<"\nA:"<<no1<<" B:"<<no2;
  getch();
}