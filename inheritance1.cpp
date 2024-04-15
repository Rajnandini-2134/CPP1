#include<iostream>
using namespace std;

class father{
public:
        int father_property,total_father_property,property_father;
        void get_Datafather(){
        cout<<"Enter the total father property"<<endl;
         cin>>total_father_property;
}
    void Displayfather()
{
   cout<<"the total father's property:"<<total_father_property<<endl;
   
}
void passmyproperty(){
           char choice;
           cout<<"Do you want to pass the property to son?(y/n):";
           cin>>choice;
           if(choice=='y'||choice=='Y')
            property_father=total_father_property;
            else
            property_father=0;
}
};
class son:public father{
public:
        int son_property,total_son_property,property_son;
        void get_Datason(){
        cout<<"Enter the son property"<<endl;
        cin>>son_property;
        total_son_property=son_property+total_father_property;
}
    
    void Displayson()
{
   cout<<"the total son property:"<<total_son_property<<endl;
   
}
   
void passmyproperty(){
           char choice;
           cout<<"Do you want to pass the property to Grandson?(y/n):";
           cin>>choice;
           if(choice=='y'||choice=='Y')
            property_son=total_son_property;
            else
            property_son=0;
}
};
class grandson:public son{
public:
        int grandson_property,total_grandson_property;
        void get_Datagrandson()
{
        cout<<"Enter the grandson property"<<endl;
         cin>>grandson_property;
         total_grandson_property = grandson_property+property_son;
}
   
    void Displaygrandson()
{
   cout<<"the total grandson  property:"<<total_grandson_property<<endl;
  
}
};
int main(){
    grandson g;
    g.get_Datafather();
    g.passmyproperty();
    g.get_Datason();
    g.passmyproperty();
    g.get_Datagrandson();

    g.Displayfather();
    g.Displayson();
    g.Displaygrandson();

     return 0;
}
  



