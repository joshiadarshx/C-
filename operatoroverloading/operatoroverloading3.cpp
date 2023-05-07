//in this program we will learn about overloading the insertion<< and extraction >> operator
//points to be noted 
//these operator can only be overloaded by frnd fnc 
//it is because they are member of anotherclass ie istream and ostream class
#include<iostream>
#include<cstring>
using namespace std;
class money{
   
  
    public :
     char name[10];
      int salary,rent,expense;
    money():salary(0),rent(0),expense(0){}

    friend ostream& operator >>(ostream &d ,money &);
     friend istream& operator <<(istream &,money &);
};
ostream& operator >>(ostream &d,money &b){

d>>b.salary;
d>>b.rent;
d>>b.expense;
return d;

}
istream& operator <<(istream &v,money &n){
v<<n.salary;
v<<n.rent;
v<<n.expense;
return v;
}
int main()
{
money a1,a2;
    cout<<"enter name od 1st";
    cin >> a1;
    cout<<a1;


 return 0;
}