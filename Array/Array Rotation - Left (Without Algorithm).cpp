//Left Rotation of Array
#include<bits/stdc++.h>
using namespace std;

void rotation(int arr[], int n){
	int temp = arr[0], i;
	for(i=0; i<n-1; i++)
	arr[i] = arr[i+1];
	arr[i] = temp;
}

void rotate(int arr[], int n, int r){
	for(int i=0; i<r; i++)
	rotation(arr, n);
}

int main(){
	int n, r;
	cout<<"\nEnter no. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter "<<n<<" elements: ";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	cout<<"\nEnter no. of rotations: ";
	cin>>r;
	
	rotate(arr, n, r);
	
	cout<<"\nRotated elements are: ";
	for(int i=0; i<n; i++)
	cout<<"\t"<<arr[i];
	return 0;
}
