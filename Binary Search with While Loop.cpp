#include <iostream>
using namespace std; 
int main() { 
   int key; 
   int data[] = {10,20,30,32,33,34,35,56,65,67,76}; 
   const int size = sizeof(data) / sizeof(data[0]); 
   bool flag=false; 
   
   int low= 0; 
   int high = size -1; 
   
   cout << "Enter the value to check for = "; 
   cin >> key; 
   
   while(low <= high) { 
    int mid = low + (high-low) /2; 
    if(data[mid]==key) { 
       flag = true;  
       break; 
	}
	else if(data[mid] <key) { 
	   low= mid +1; 
	   flag=false; 
	}
	else if(data[mid]>key) { 
	   high = mid-1; 
    } 
    
   }
  
  if(flag ==true) { 
   cout << "The value is present in the array "; 
   }
   return 0 ; 
}

