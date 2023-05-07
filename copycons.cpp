#include<iostream>
using namespace std;
class uni{
    public :
    int a;
    uni(int x) :a(x){}
    uni(uni &b){
        this->a = b.a;

    }
    void display(){
        cout<<" the enter value th is copoed is "<<a;

    }
};
int main()
{
    uni s1(10),s2(s1);
    s2.display();
 return 0;
}