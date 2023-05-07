#include<iostream>
using namespace std;
const int size = 5;
template <class t>
class aray{
public :
t a[size];
void getaray();
t find();
};
template <class t>
void aray<t> :: getaray(){
    cout<<" enter 5 elements of array";
    for(int i = 0;i<size;i++){
        
        cin>>a[i];

    }}
    template <class t>
    t aray<t>::find(){
        t max= a[0];
        t c;
         for(int i = 0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
       
    }  cout<<" greasterst no in arraay is   "<<max<<endl;
    int i;
    int j =i +1;
    for(int i = 0;i<size;i++){
    for (j=0;j<size ;j++){ 
        if(a[i]<a[j]){
            c = a[j];
            a[j]=a[i];

            a[i]=c;
        }
        }}
  for(int i = 0;i<size;i++){ cout<< "     "<<a[i];}

    }
int main()
{
   aray<int>a1;
    a1.getaray();
    a1.find();
 return 0;
}