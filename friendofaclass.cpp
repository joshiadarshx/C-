#include<iostream>
using namespace std;
class adarsh{
    int a;
    char b[6] ="hancy";
friend class anil;//friend clss declalaration



public :adarsh(){
    a=5;
}


};
class anil{
   public :
   void display(adarsh t){  //the value that is passed must be of type 1st class remember 
         cout<<"int value is "<<t.a<<"char value is "<<t.b<<endl;

    }
};

int main()
{
    adarsh a1;
    anil a2;
    a2.display(a1);//accessing thge data of first claass by its obj passing through fnc of 2nd class
 return 0;
}