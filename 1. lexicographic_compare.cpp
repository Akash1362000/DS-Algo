#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // initializing char arrays 
    char list[][100]={ 
        {'a','b','a','c','u','s'}, 
        {'a','p','p','l','e'}, 
        {'c','a','r'}, 
        {'a','b','b','a'} 
    }; 
      
    char min[100] = "zzzzzz"; 
      
    // using lexicographical_compare for checking  
    // the smallest 
    for (int i=0; i<4; i++) 
    {  
        if( lexicographical_compare(list[i], list[i]  
        + strlen(list[i]), min, min+strlen(min))) 
    { 
        strcpy(min,list[i]); 
    } 
    } 
      
    // prints "abacus" 
    cout << "The smallest string is : "; 
    for(int i = 0; min[i]!='\0'; i++) 
    { 
        cout<<min[i]; 
    } 
        
} 

// Reference: https://www.geeksforgeeks.org/lexicographical_compare-in-cpp/
