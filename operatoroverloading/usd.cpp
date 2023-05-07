#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class cart{
    public :
float x,y;
 cart(){ x=0.00;
       y=0.00;}

    cart(float a, float b){
        x=a;y=b;
    }
void display (){
    cout<<x<<y;
}

};
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
    operator cart(){
        float x = float(r* cos(theta));
        float y = float(r* sin(theta));
        return cart(x,y);
    }

};
int main(){
polar p(5,60);
cart c;
c = p;
c.display();
return 0;

}
