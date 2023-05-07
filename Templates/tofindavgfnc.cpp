#include<iostream>
using namespace std;
template <class t1 , class t2>
void avg(t1 a[],int size,t2 sum,t2 avg){
    for(int i=0;i<size;i++){
        sum+=a[i];
        avg=sum/size;

    }
    cout<<" enterred array is "<<endl;
   for(int i=0;i<size;i++){
    cout<<a[i]<<",";
   }cout<<endl;
   cout<<" the sum of elements of array is  "<<sum<<endl;
   cout<<" the avg of elements of array is  "<<avg<<endl; }




int main()
{
    int a[] = {1,2,3};
    float b[] = {1.2,3.2,3.3};
 int i;
 float c=0.0,d=0.00;
 cout<<" enter size of array you want to get average and sum";
 int f;
 cin>>f;
avg(b,3,c,d);

 return 0;}
