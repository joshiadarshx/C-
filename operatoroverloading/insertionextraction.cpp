#include<iostream>
#include<string.h>
using namespace std;
class  abc{
      public :   int budi;
    char item[20];

    abc(){
        strcpy(item,"pen");
       budi =0;
    }
    friend istream& operator >>(istream &,abc &);
   friend ostream& operator <<(ostream & dout,abc &n);
};
 istream& operator >>(istream &din,abc &m){
    din>>m.budi>>m.item;
    return din;

 }
 ostream& operator <<(ostream &dout,abc &n){

   dout<<n.budi<<"    "<<n.item;
    return dout;

 }

int main()
{
    abc a1, a2;
    cin>>a1>>a2;
    cout<<a1<<a2;

 return 0;
}