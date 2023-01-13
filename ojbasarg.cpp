#include<iostream>
using namespace std;
class time {
    int hour, minu;
    public:
    void gtime(){
        cin>>hour>>minu;
    }
 
    void showtime(){
        cout<<"time in hour is"<<hour<<" "<<endl;
        cout<<"time in min"<<" "<<minu<<endl;

    }
    void addtime( time t1,time t2){
        hour = t1.hour+t2.hour;
        minu = t1.minu+t2.minu;
        hour = hour+ (minu/60);
        minu = minu%60;

    }

};
int main()
{
    time T1,T2,t3;
    T1.gtime();
    T2.gtime();
    t3.addtime(T1,T2);
    t3.showtime();

    
 return 0;
}