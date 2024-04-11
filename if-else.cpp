#include<iostream>
using namespace std;
int main()
{

int savings;
cin>>savings;

if(savings>500000)
{
	cout<<"bye a car\n"<<endl;
}
else if(savings>100000)
{
	cout<<"bye a scooter\n"<<endl;
}
else
{
	cout<<"bye a bicycle\n"<<endl;
}
return 0;
}
