#include<iostream>
#include<vector>

using namespace std;
void sort(vector<int> &arr,int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(arr[j]>temp && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
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
