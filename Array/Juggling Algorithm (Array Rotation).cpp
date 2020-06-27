#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

void arrayRotate(int A[], int n, int k){
	int temp, i, j, d=-1;
	for(i=0; i<gcd(n,k); i++){
		j=i;
		temp=A[i];
		while(1){
			d=(j+k)%n;
			if(d==i)
			break;
			A[j]=A[d];
			j=d;
		}
		A[j]=temp;
	}
}

void display(int A[], int n){
	for(int i=0; i<n; i++)
	cout<<A[i]<<" ";
	cout<<"\n";
}

int main(){
	int i,n,k;
	cout<<"\nEnter size of Array: ";
	cin>>n;
	int A[n];
	cout<<"\nEnter array elements: ";
	for(i=0; i<n; i++)
	cin>>A[i];
	cout<<"\nEnter the no. of rotations: ";
	cin>>k;
	display(A, n);
	arrayRotate(A, n, k);
	display(A, n);
	return 0;
}
