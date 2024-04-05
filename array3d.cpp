#include<iostream>
using namespace std;
int main()
{
	int arr[2][2][3];
	int i,j,k;
	cout<<"enter the array element for 3x3 matrices"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				cin>>arr[i][j][k];
			}
		}
	}
	cout<<"array element are \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				cout<<arr[i][j][k]<<"\t";
			}
			cout<<endl;
	}
	}
}
