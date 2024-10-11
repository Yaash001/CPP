#include <iostream.h>
#include <conio.h>

class demo {
  int n1, no1, n2, no2;
public:
  void set() {
    cout << "\nEnter 2 Values: ";
    cin >> n1 >> n2;
    no1 = n1;
    no2 = n2;
  }

  friend void operator ++(demo& d);
  friend void operator --(demo& d);

  void dis() {
    cout << "\nBefore Increment: " << no1 << "\nAfter Increment: " << n1;
    cout << "\nBefore Decrement: " << no2 << "\nAfter Decrement: " << n2;
  }
};

void operator ++(demo& d) {
  d.n1++;
}

void operator --(demo& d) {
  d.n2--;
}

void main() {
  demo d;
  clrscr();
  d.set();
  ++d;
  --d;
  d.dis();

  getch();
}
