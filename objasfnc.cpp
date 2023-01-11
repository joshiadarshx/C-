//WAp to add two time given in mins and hour using pass obj as fnc argument concept 
#include<iostream>
using namespace std;
class time{
   int hour, minut;
    public:
    void get_time(int a ,int b){ // for t1 takes 2 and 50 and pastes to hour and minut 
        hour = a;
        minut = b;

    }
    void display_time(){
        cout<<"in hour is "<<"\n"<<hour<<"\n"<<"in minutes is "<<"\n"<<minut<<endl;


    }
void add_time(time t1, time t2)
    {
        minut=t1.minut+t2.minut; // adds minut
        hour= minut/60;  //changes sminut to hour 
           minut = minut% 60;   //erros < % ANT BE USED FOT DOUBLE OR float>  and remaining minuts to hour

        hour=hour+t1.hour+t2.hour; //finally adding all hours
    }
};
int main()
{
    time t1,t2,t3;
    t1.get_time(2,60); // directly passes value 2 and 50 to a and b of obj t1 
    t2.get_time(3,60);
    t3.add_time(t1,t2);// < fnc arguments as obj should e mentioned>
    t3.display_time();

    
 return 0;
}