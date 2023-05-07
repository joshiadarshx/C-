#include<iostream>
using namespace std;
class celcius{
    public : 
    float temp;
    celcius():temp(0){}
    void gettemp(){
        cin>>temp;
    }
    operator float(){
        float fer;
        fer = temp+273.00;
        return fer;

    }

};
int main()
{
    celcius c1;

    c1.gettemp();
    float fer;
    fer = c1;
    cout<<"farenheit value is   "<<fer;
    
 return 0;
}