//IT IS THE PROCESS OF USING A OPERATOR TO OPERAND ON USER DEFINED DATA TYPES OT OTHER THAN FUNDAMANTLE DATA TYPE
//WAP TO SHOW UNARY -- AND UNARY ++
#include<iostream>
using namespace std;
class UNARY{
    int count,sount;
    public:
    UNARY():count(4),sount(5){};
    void operator --(){
        --count;
        cout<<count<<endl;

    }
    void operator --(int);
    void operator ++(int){
        count++;
        count++;
        sount++;
        sount++;
        cout<<count<<endl;
    }



};
void UNARY::operator --(int){
    sount--;
    cout<<sount<<endl;


}

int main()
{
    UNARY s1,s2;
    --s1;
  s2--;
 s2++;

 return 0;
}