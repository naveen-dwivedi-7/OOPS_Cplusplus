#include<iostream>
using namespace std;
class Base{
 private :
    int a;
 // a=10;
   public:
       int b;


    void takedata() {
         cout<<"Enter a:";
          cin>>a;
        cout<<"Enter b:";
         cin>>b;
     }
   void showdata() {












    
        cout<<"a is :"<<a;   
        cout<<" b is:"<<b;
     }

};
 class Derived: public
  Base{
   private :int c;
      public:
       int d;
                  
void takedata() {
        Base::takedata();
        cout<<"Enter c:";
         cin>>c;
        cout<<"Enter d:";
         cin>>d;
     }
     void showdata() {
         Base::showdata();
        cout<<"c is :"<<c;
        cout<<" d is:"<<d;
     }     


 };
 int main(){
   Base b;
   Derived d;
   d.takedata();
   d.showdata();
    
 return 0;
 }