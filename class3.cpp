#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    char gender;

    void printInfo()
    {
        cout<<"Name=";
        cout<<name<<endl;
        cout<<"age=";
        cout<<age<<endl;
        cout<<gender<<endl;
        
    }
};

int main()
{
    string name;
    int age;
    char gender;

     

   student arr[3];
   for(int i=0;i<3;i++)
{
     cout<<"name";
     cin>>arr[i].name;
     cout<<"age";
     cin>>arr[i].age;
     cout<<"gender";
     cin>>arr[i].gender;

}


   for(int i=0;i<3;i++)
   {
     arr[i].printInfo();
   }

return 0;
}
