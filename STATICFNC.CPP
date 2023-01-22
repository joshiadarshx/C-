#include<iostream>
using namespace std;
class CO{
    int code;
    static int count;
    public :
    void showcode(){
        count++;
        code = count;
    }
    void show(){
        cout<<"student code"<<code<<" "<<"BCT/2078"<<endl;
    }
    static void showcount(){
        cout<<"records of "<<count<<" " << "student found"<< endl;
    }
};
int CO::count;
int main()
{
    CO s1,s2;
    s1.showcode();
    s2.showcode();
  
    CO::showcount();
      s1.show();
    s2.show();

 return 0;
}