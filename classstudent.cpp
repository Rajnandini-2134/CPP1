#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    char gender;

    void setname( string s)
    {
        name=s;
    }
    void getname()
    {
        cout<<name<<endl;
    }
     void setage( int a)
    {
        age=a;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    void setgender( char g)
    {
        gender=g;
    }
    void getgender()
    {
        cout<<gender<<endl;
    }
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
    

     string s;
     int a;
     char g;

   student arr[3];
   for(int i=0;i<3;i++)
{
     cout<<"name";
     cin>>s;
     arr[i].setname(s);
     cout<<"age";
     cin>>a;
     arr[i].setage(a);
     cout<<"gender";
     cin>>g;
     arr[i].setgender(g);

}


   for(int i=0;i<3;i++)
   {
     arr[i].printInfo();
   }

return 0;
}
