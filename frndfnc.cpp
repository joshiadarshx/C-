#include<iostream>
using namespace std;
class inte{
    int i,a[5];
    public:
   void in();
   void out(){
    
   }
   friend void avg(inte);

};
void  inte:: in(){
    for ( i = 0; i < 5; i++)
    {
        cin>>a[i];
    }}
    void avg(inte c){
        float v = 0.00;
        for(int i=0;i<5;i++){
        v = v+c.a[i];

        }
        cout<<"average is "<<" "<<v/5;

    }
    

int main()
{
    inte a1;
a1.in();
avg (a1);

 return 0;
}