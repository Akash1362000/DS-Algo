//https://youtu.be/di7gNqxfU1g
#include<bits/stdc++.h>
using namespace std;

int main(){
	//int a[] = {1,3,4,2,7,8};
	int a[] = {5,1,3,2,4};
	int n = sizeof(a)/sizeof(int);
	
	//Go to every 2nd element, try to create a peak
	for(int i=0; i<n; i+=2){
		
		//Check for left element
		if(i>0 && a[i-1]>a[i])
		swap(a[i], a[i-1]);
		
		//Check for right element
		if(i<=n-2 && a[i+1]>a[i])
		swap(a[i], a[i+1]);
	}
	
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
	return 0;
}
