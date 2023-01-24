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
    sort(ar,ar+9);//using sort fnc to sort array
    cout<<"\n"<<ar[8]<<"is the greatest numer"<<endl;//printing the last element of ascendengly sorted array
    sort(ar,ar+9,greater<int>());
    cout<<"smallest no is "<<ar[8];//printing last element of desecdindly sorted array
    delete ar;
 return 0;
}