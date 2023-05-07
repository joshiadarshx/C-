
//using + operator add two given complex number




#include<iostream>
using namespace std;
class complex{
    int x,y;
    public :
    void getdata(){
        cin>>x>>y;
    }
    void show(){
        cout<<x<<" + "<<"i"<<y;    }
       complex operator +(complex n){
n.x=x+n.x;
n.y=y+n.y;
return n;

        }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c1+c2;
    c3.show();
 return 0;
}