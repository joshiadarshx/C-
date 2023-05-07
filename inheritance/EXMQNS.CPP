#include<iostream>
using namespace std;
// class departmernt{
//     public : 
//     void display()
//     {
//         cout<< "this is from head  department "<<endl;
//     }
// };
// class science : public departmernt{

//  public : 
//     void display()
//     {
//         cout<< "this is from science main department "<<endl;
//     }

// };
class Engineering {
 public : 
    void display()
    {
        cout<< "this is from engineering main  department "<<endl;
    }
};
class computer : public virtual Engineering{
 public : 
    // void display()
    // {
    //     cout<< "this is from  computer engineering  department "<<endl;
    // }
};
class civil : public virtual Engineering{
 public : 
    // void display()
    // {
    //     cout<< "this is from civil engineering  department   "<<endl;
    // }
};
class combo : public civil,computer {
     public : 
};
int main()
{
    civil c1;
    computer c2;
    // science s1;
    combo w;
    c2.display();//fnc overridden here 
    // c2.departmernt :: display();//fnc call by scope resolution operator 
    w.display();//virtual class concept
 return 0;
}