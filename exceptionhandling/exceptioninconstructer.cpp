#include<iostream>
using namespace std;
class demo{
    public : demo(){
        cout<<" from constructer .";}

        ~demo(){
            cout<<" from destructerp";

        }
    };
int main()
{
    try{
        demo d;
        throw 2;
    }
    catch( int a ){
        cout<<" exception caught";
    }
 return 0;
}