#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class nume{
    public : float num;
    class neg{
        public : float value;
        char des[30];
        neg(){
            value = 0;
            des[0]='\0';

        }
        neg(float a,const char *p)   
    {
        value =a;
        strcpy(des,p);

    }
    };
    void read(){
        cout<<" enter the number ";
        cin>>num;
    }
  float sqrot(){
    
    if(num<0)
        throw neg(num," is wrong entery");
        else 
        return(sqrt(num));
}};
int main()
{
    nume n1;
    n1.read();
    try{
        cout<<" try to find sqroot justt be patientt  ..........."<<endl;
        cout<<"squroot is "<<n1.sqrot();
    }
    catch(nume::neg x){
        cout<<x.value<<" "<<x.des<<endl;
    }

 return 0;
}