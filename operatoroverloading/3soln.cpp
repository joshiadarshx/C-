#include<iostream>
#include<cstring>
using namespace std;

class money {
public:
   char name[10];
   int salary, rent, expense;
   money(): salary(0), rent(0), expense(0) {}
   friend istream& operator >>(istream &, money &);
   friend ostream& operator <<(ostream &, money &);
};

istream& operator >>(istream &d, money &b) {
   d.getline(b.name, 10);
   d >> b.salary >> b.rent >> b.expense;
   return d;
}

ostream& operator <<(ostream &v, money &n) {
   v << n.name << " " << n.salary << " " << n.rent << " " << n.expense << endl;
   return v;
}

int main() {
   money a1, a2;
   cout << "Enter name of 1st: ";
   cin >> a1;
   cout << "Details of 1st: " << a1 << endl;

   return 0;
}
