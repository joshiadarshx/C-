#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5];
    int i;
    for ( i = 0; i < 5; i++)//taking input
    {
      cin>>ar[i];
      cout<<"\n";

    }
    //sorting the given array by sort fnc
    sort(ar ,ar+5,greater<int>());

    for ( i = 0; i < 5; i++)//taking input
    {
      cout<<ar[i]<<endl;

    }
 return 0;
}