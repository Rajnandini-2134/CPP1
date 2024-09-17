#include<iostream>
using namespace std;

int main()
{
     int n=10;
	int A[10]={9,11,25,8,7,12,20,9,14,15};
	int key=12;
	for(int i=0;i<10;i++)
	{
		if(A[i]==key)
		{
			cout<<i<<endl;
		}
	}
	
}
