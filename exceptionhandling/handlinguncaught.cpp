#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
void handler(){
    cout<<" normal termination of progaem successfull";
    exit(0);

}

int main()
{
    set_terminate(handler);
    try{
        cout<<" inside try bloclk"<<endl;
        throw 20;
    }
    catch (char a ){
        cout<<" inside the handler ";
    }
 return 0;
}