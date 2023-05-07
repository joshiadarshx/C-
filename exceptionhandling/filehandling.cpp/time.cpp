
#include<iostream> 
using namespace std;
class Time
{
    int hh,mm;
    public: void get_time( int h, int m)
            {
               hh=h;
               mm=m;
            }
            void display()
            {
                cout<<hh<<"hours and"<<mm<<"minutes";
            }
            void sum(Time , Time);
};
void Time::sum(Time t1, Time t2)
{
  mm=t1.mm+t2.mm;
    hh=mm/60;
    mm=mm%60;
    hh=hh+t1.hh+t2.hh;
}

int main()
{
    Time t1,t2,t3;
    t1.get_time(3,23);
    t2.get_time(4,52);
    t3.sum(t1,t2);
 t3.display();
    return 0;
}


