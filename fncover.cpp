#include<iostream>
using namespace std;
class hello{
    int a,b;
   public : void add();

};
void hello :: add(){
    cin>>a>>b;
    cout<<"\n"<<"sum is"<<a+b<<endl;
}
int main()
{
    hello a1;
    a1.add();
 return 0;
}