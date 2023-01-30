#include<iostream>
using namespace std;
class op{
    int x ,y;
    public:
    int count;
    op(): count(0){}
    void dis(){
        cout<<"value of count is  "<<count<<endl;
    }
    friend void operator ++(op &a,int);
    };
    void operator ++(op &a,int){
        a.count++;
    }
int main()
{
    op a1;
    a1.dis();
    a1++;
    a1++;
    a1.dis();
 return 0;
}