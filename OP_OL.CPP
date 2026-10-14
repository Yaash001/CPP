#include <iostream.h>
#include <conio.h>
class demo
{
  int n1,no1,n2,no2;
  public:
  void set()
  {
   cout<<"\nEnter 2 Values: ";
   cin>>n1>>n2;
   no1=n1;
   no2=n2;
  }
  int operator ++()
  {
    n1++;
  }
  int operator --()
  {
   n2--;
  }

  void dis()
  {
   cout<<"\nBefore Increament:"<<no1<<"\nAfter Increament:"<<n1;
  cout<<"\nBefore Decrement:"<<no2<<"\nAfter Decreament:"<<n2;
   }
};

void main()
{
 demo d;
 clrscr();
 d.set();
 ++d;
 --d;
 d.dis();
 getch();

}
