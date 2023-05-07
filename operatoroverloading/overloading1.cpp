#include<iostream>
using namespace std;
class load{
    int a,b;
    public :
    load():a(5),b(6){}
  
   
  friend void operator -(load &);
 
  void display(){
    cout<<a<<endl<<b;
  }
};
void operator -(load &x){
x.a=-x.a;
x.b=-x.b;
}

int main()
{
  load v;
  -v;
  v.display();

 return 0;
}