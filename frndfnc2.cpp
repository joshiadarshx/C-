#include<iostream>
using namespace std;
class xx{
    int a,b,d;
   public:  //default cronstructer
xx(){
    a=5;
    b=1;
    d=0;

    cout<<"value befor swap of a nad b is   "<<a<<" "<<b<<endl;
}
   friend void swap(xx&);
   void display()
{
cout<<"value after swap of a and b  "<<a<<" and "<<b<<endl;
}
};
void swap(xx &c){
c.d=c.a;
c.a=c.b;
c.b=c.d;

}
int main()

{
    xx a1;
    swap(a1);
    a1.display();
 return 0;
}