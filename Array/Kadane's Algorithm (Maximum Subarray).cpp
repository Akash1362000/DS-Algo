//https://www.youtube.com/watch?v=86CQq3pKSUw

#include<bits/stdc++.h>
using namespace std;

int kadane(int A[], int n){
	int max_current, max_global;
	max_current = max_global = A[0];
	for(int i=1; i<n; i++){
		max_current = max(A[i], max_current + A[i]);
		if(max_current > max_global)
			max_global = max_current;
	}	
	return max_global;
}

int main(){
	//int A[] = {-163, -20}; //-20
	//int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; //6
	int A[] = {-2, -3, 4, -1, -2, 1, 5, -3};  //7
	int n = sizeof(A)/sizeof(int);
	int max_sum = kadane(A,n);
	cout<<"\nMaximum Subarray: "<<max_sum;
	return 0;
}
