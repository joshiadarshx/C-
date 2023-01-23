#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int i;    int *ar = new int[10] ;
    for ( i = 0; i < 9; i++)
    {
        /* code */cin>>ar[i]; //taking input for array
    }
    sort(ar,ar+9);
    cout<<"\n"<<ar[8]<<"is the greatest numer"<<endl;
    sort(ar,ar+9,greater<int>());
    cout<<"smallest no is "<<ar[8];
    delete ar;
 return 0;
}