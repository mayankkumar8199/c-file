#include<iostream>
using namespace std;

int main()
{
	  
      
    int A[] = {1, 2, 3, 4, 5};   
     int i;
    int length = sizeof(A)/sizeof(A[0]);  
      
    printf("Elements of given array: \n");  
       
    for (int i = 0; i < length; i++) {   
        cout<<A[i];   
    }    
    
   
    return 0;  
} 

