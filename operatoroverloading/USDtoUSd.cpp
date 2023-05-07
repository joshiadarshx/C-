#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class polar{
    public :
    float r,theta;
    polar():r(0),theta(0){}
    polar(float x,float y){
        cout<<" enter value of radius and angle "<<endl;
        cin>>r>>theta;
    }
    void display(){
        cout <<" your entered value is "<<r<<" and angle is "<<theta;
    }

};
class cartesian
{

public:

float x,y;
  cartesian():x(0),y(0){}
  cartesian( polar p){
  x=p.r*cos(p.theta);
  y=p.r*sin(p.theta);
  }
  void display(){
    cout<<" changed value in cartesian is "<<x<<" and "<<y;
  }
};
int main()
{
    polar t(5.00,60.00);
    cartesian i;
    t.display();
    i = cartesian(t);
    i.display();

 return 0;
}