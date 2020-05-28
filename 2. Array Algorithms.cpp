#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, arr[6] = {1,2,3,4,5,-6}, arr1[6], arr2[6];
	
	//all_of()
	//Checking if all the elements are +ve or not
	all_of(arr, arr+6, [](int x){ return x>0;})?	//Ternary Operator
	cout<<"\nAll are positive\n":
	cout<<"\nAll are not positive\n";
	
	//any_of()
	//Checking if any of the elements are -ve or not
	any_of(arr, arr+6, [](int x){ return x<0;})?	//Ternary Operator
	cout<<"\nThere exists a -ve number\n":
	cout<<"\nAll are positive\n";
	
	//none_of()
	// Checking if no element is negative 
	none_of(arr, arr+6, [](int x){ return x<0;})?	//Ternary Operator
	cout<<"\nNo negative number\n":
	cout<<"\nNegative number present\n";
	
	//copy_n(first array, size of array, second array)
    // Using copy_n() to copy contents 
	copy_n(arr, 6, arr1);
	//Display the new array
	for(i=0; i<6; i++){
		cout<<arr1[i]<<" ";
	}
	
	//This function is used to assign continuous values to array.
	//iota(array name,  array size(indexed) , starting number)
	
	iota(arr2, arr2+6, 20);
	cout<<"\nNew array after assigning values: ";
	for(i=0; i<6; i++)
	cout<<arr2[i]<<" ";
		
	return 0;
}
