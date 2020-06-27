//Right Array Rotation HackerRank Problem
//https://www.hackerrank.com/challenges/circular-array-rotation/problem

#include<bits/stdc++.h>
using namespace std;

void rotate(int a[], int n){
	int temp, i;
	temp = a[n-1];
	for(int i=n-1; i>0; i--)
	a[i] = a[i-1];
	a[0] = temp;
}

void rotateRight(int a[], int n,  int k){
	for(int i=0; i<k; i++)
	rotate(a, n);
}

int main(){
    int n, k, q;
    cin>>n>>k>>q;
    int a[n], index[q];
    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<q; i++)
    cin>>index[i];
    
    rotateRight(a, n, k);
    for(int i=0; i<q; i++)
    cout<<a[index[i]];
    return 0;
}
