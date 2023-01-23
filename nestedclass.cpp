#include<iostream>
using namespace std;
class damodar{
    int a ;
    char name[10];

    public:
    void getdata(){
    cout<<"enter name and age";
    cin>>a>>name;
    }
    void showdata();
                        class birth{
                            int day,month,year;
                            public :
                            void getdate();
                            void showdate();
                        };

};
void damodar::showdata(){
    cout<<"name is"<<" "<<name<<"  "<<"age is" <<" "<<a<<endl;
}

void damodar::birth::getdate(){
    cin>>year>>month>>day;

}
void damodar::birth::showdate(){
    cout<<"birth date of "<<"is "<<endl;
    cout<<day<<month<<year<<endl;
}
int main()
{
    damodar a1;
   damodar::birth b1;
   a1.getdata();
   a1.showdata();
 b1.getdate();
   b1.showdate();


 return 0;
}