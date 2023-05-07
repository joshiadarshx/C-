//  #include<iostream>
//     using namespace std;
//     template<class T>
//      T abso(T n){
//             if(n<0){
//                 return(-n);
//             }
//             else return(n);
//         }
//         int main(){
//            int a =5;
//            float b=2.5;
//           int  c=-5;
//           cout<<"hello world"<<" "<<abso(a)<<endl;
//           cout<<"hello world"<<" "<<abso(b)<<endl;
//           cout<<"hello world"<<" "<<abso(c)<<endl;
//           return 0;
//         }



 #include<iostream>
    using namespace std;
    template<class T>
     T abso(T n){
            if(n<0){
                return(-n);
            }
            else return(n);
        }
        int main(){
          cout<<"hello world"<<" "<<abso<int>(2)<<endl;
          cout<<"hello world"<<" "<<abso<float>(2.5)<<endl;
          cout<<"hello world"<<" "<<abso(-8)<<endl;
          return 0;
        }