//static data are thoes data member which can be used or  shared by objects in the class.
#include<iostream>
using namespace std;
class countting{
    static int count;
    int b;
    public :
    void getdata(){
        count++;
    }
    void show(){
        int i;
        for (size_t i = 0; i < 3; i++)
        {
             cout<<count<<" "<<i<<endl;
        
        }
        
     

    }
};
int countting :: count;
int main()
{
    countting a,b,c;
    a.show();
    b.show();
    c.show();
     a.getdata();
    b.getdata();
    c.getdata();
       a.show();
    b.show();
    c.show();
 return 0;
}
//we understood that the value of static data member is always same for every fnc while it is unchanges by other fnc