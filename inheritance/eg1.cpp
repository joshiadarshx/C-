//inheritance is a concept used in C++ due to which we can derivwe a new class from existing class
//eg is given below 
#include<iostream>
using namespace std;
class vehicle{
    public :
    int fuel,cost;
    void getfuel(){
        cin>>fuel;
    }
    void getcost(){
cin>>cost;
    }
    void show(){
        cout<<" the cost and fuel of the given vechcle is  "<<cost<<"    "<<fuel;
    }
    protected :  void gettotal(){
        int sum;
        sum =  fuel+cost;
        cout<<sum;
    }
};
class truck : public vehicle{


};
class tractor : public vehicle{
      
};
class owner : protected vehicle{
  public : void shooowww(){
gettotal();
  }
};
int main()
{
    truck t;
    tractor t2;
    owner o;
    t.getcost();
    t.getfuel();
    t2.getfuel();
    t2.getcost();
    cout<<" for truck "<<endl;
    t.show();
    cout<<" \n for tractor "<<endl;
    t2.show();
    cout<<" for all information "<<endl;
    o.shooowww();
  
 return 0;
//polymorphism refers to the bearing  one name and having varietbof forms.
//polymorphism is of two types
//one is compile time eg operator overloading
//another is runtime eg concept of  virtual functions
//lets do an eg
