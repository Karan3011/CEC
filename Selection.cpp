#include<iostream>
#include<vector>

using namespace std;
void sort(vector<int> &arr,int n)
{
	int i,j,temp,index;
	for(i=0;i<n-1;i++)
	{
		temp=arr[i];
		index=i;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<temp)
			{
				temp=arr[j];
				index=j;
			}
		}
		swap(arr[i],arr[index]);
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
