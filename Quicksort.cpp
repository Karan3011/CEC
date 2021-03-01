#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr,int l, int r)
{
	int i,j;
int pivot=arr[r];
i=l-1;
for(j=l;j<r;j++){
	if(arr[j]<pivot)
	{
		i++;
		swap(arr[i],arr[j]);

	}	
	}
	swap(arr[i+1],arr[r]);
	return i+1;

}

void Quicksort(vector<int> &arr,int l,int r)
{
	
	if(l<r)
	{
		int pivot =partition(arr,l,r);
		Quicksort(arr,l,pivot-1);
		Quicksort(arr,pivot+1,r);
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
	int r=0;
	int l=n-1;
	Quicksort(arr,r,l);
	display(arr,n);
	return 0;
	
}
