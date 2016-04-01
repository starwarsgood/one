#include <iostream>
using namespace std;
 class One {
       protected:
                 int x;
                 public:
                 int y;
                 void set(int i) {x=i;} 
                 };
                 class B: public One{
                       public:
                       int z;
                       int sum;
                       void show() {
                       cout<<" x = " <<x<<endl;     
                       cout<<" y = " <<y<<endl; 
                       cout<<" z = " <<z<<endl; 
                       cout<<" Ñóììà = " <<sum<<endl; 
                       }
                       };
                       int main() {
                           B obj;
                           obj.set(5);
                           obj.y=1;
                           obj.z=2;
                           obj.show ();
                           
                           system("pause");
                           return 0 ; 
                           }
