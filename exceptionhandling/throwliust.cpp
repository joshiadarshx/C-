#include<iostream>
using namespace std;
class dayer{};
class monther{};
class yearr{};

class date {

    public :

    int day,mon,year;
    public :
    void read()throw(dayer,monther){
        cout<<"enter your birth date win day month and year";
        cin>>day;
        if(day>31){
            throw dayer();

        }
        cin>>mon;
         if(mon>12){
            throw monther();

        }

        cin>>year;
         if(year<0){
            throw yearr();

        }

    }
    void show(){
        cout<<" your birth date is  "<<year<<" / "<<mon<<" / "<<day<<endl;
    }

};
int main()
{
    date d;
    try {
        d.read();
        d.show();
    }
    catch(dayer){
        cout<<" day cant be greater than 31";
    }
     catch(monther){
        cout<<" month cant be greater than 12";
    }
     catch(yearr){
        cout<<" year cant be zero ";
    }

 return 0;
}