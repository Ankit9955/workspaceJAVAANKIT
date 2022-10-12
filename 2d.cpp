#include<iostream>
using namespace std;
void rowsum(int arr[3][3],int row,int colon)
{
	for(int i=0;i<row;i++)
	{
		//for each colon
		int sum=0;
		for(int j=0;j<colon;j++)
		{
		  sum=sum+arr[i][j];
		}
	cout<<sum<<" ";
}
cout<<endl;
	
}
int colonsum(int arr[3][3],int row,int colon)
{
	int maxi;
	for(int i=0;i<colon;i++)
	{
		//for each colon
		int sum=0;
		for(int j=0;j<row;j++)
		{
		  sum=sum+arr[j][i];
		}
	maxi=max(maxi,sum);
	cout<<sum<<" ";
}
cout<<endl;
	return maxi;
}
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int n=3;
	rowsum(arr,3,3);
	cout<<colonsum(arr,3,3);
	
}
