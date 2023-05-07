#include<iostream>
using namespace std;
template <class t1,class t2>
void dis(t1 x, t2 y){
    cout<<" this is firsst passed value   "<<x<<endl;
    cout<<" this is 2nd passed value    "<<y<<endl;
}
int main()
{
    dis(5,"hello");
 return 0;
}