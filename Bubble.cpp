#include<iostream>
#include<vector>

using namespace std;
void sort(vector<int> &arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void display(vector<int> &arr,int n)
{
	int i;
	cout<<"Sorted Array";
	for(i=0;i<n;i++)
	cout<<arr[i];
}
int main()
{
	int n,input;
	vector<int>arr;
	cout<<"Enter n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>input;
		arr.push_back(input);
	}
	sort(arr,n);
	display(arr,n);
	return 0;
	
}
