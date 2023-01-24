#include<iostream>
using namespace std;
class apple;
class mango{
    int x;
    public : void getandshow(){
        cin>>x;
        cout<<"the entered value opf x is   "<<x<<endl;
    }
    void swap(apple&);
    void show(){
        cout<<"after swapping value of x is "<<x<<endl;
    }
};

class apple{
   
    int y;
    public:
     void get(){
        cin>>y;
        cout<<"the entered value of y is "<<y<<endl;

    }
    friend void mango :: swap(apple &a1);
     void show(){
        cout<<"after swapping value of y is "<<y<<endl;
    }
};
void mango ::swap( apple &a1){
    int t = a1.y;
    a1.y= x;
    x=t;
   //remembr if you want to display outside swap fnc you have to pass address at given refrence variable
}
int main()
{
    apple a1;
    mango m1;
    a1.get();
    m1.getandshow();
    m1.swap(a1);
    a1.show();
    m1.show();
 return 0;
}