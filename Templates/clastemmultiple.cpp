#include<iostream>
using namespace std;
template<class t,class x>
class show{
    public :
    t a; 
    x b;
    show(t a1, x &x1){
        a = a1;
        b = x1;

    }
    void display(){
        cout<<" firwst entered is "<<a<<"  sebd enter is   "<<b;
    }

};
int main()
{
    int c =5;
    string m=" adarsh";
    show<int,string>s(c,m);
    s.display();

 return 0;
}