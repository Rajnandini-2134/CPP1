#include<iostream>
using namespace std;
class Addition
{
   private:int num1,num2;
           int sum;
   public:void getdata();
           void putdata();
};
void Addition::getdata()
{
   cout<<"enter the num1:"<<endl;
   cin>>num1;
   cout<<"enter the num2:"<<endl;
   cin>>num2;
}
void Addition::putdata()
{  
   int sum=num1+num2;
   cout<<"sum="<<sum<<endl;
}
int main()
{
  Addition Add;    
  Add.getdata();
  Add.putdata();
  return 0;
}
