#include<iostream>
using namespace std;
class per
{
      public:
      int chislo;
};
int main()
{
    per obj1,obj2;
    int sum;
    cout<<"write obj1"<<endl;
    cin>>obj1.chislo;
    cout<<"write obj2"<<endl;
    cin>>obj2.chislo;
    sum=obj1.chislo+obj2.chislo;
    cout<<sum;
    system("pause");
    return 0;
}                        
