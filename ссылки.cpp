#include <iostream>
using namespace std;
class MyClass{
      public:
      int a;
      int b;
      int c;
      void show() {
      cout<<"a= "<<a<<endl;
      cout<<"b= "<<b<<endl;
      cout<<"c= "<<c<<endl;
      }
      };
      int main() {
      sas a,b,c;
      sas *p,*q,*x;
      p=&a;
      q=&b;
      x=&c;
      p->a=10;
      q->b=25;
      x->c=6;
      cout<<(p->a+q->b+x->c)*p->a<<endl;
      system ("pause");
      return 0;
}
