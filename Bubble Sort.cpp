#include <iostream>
using namespace std; 
int main() { 
   int n; 
   int temp; 
   cout << "Enter the index Number for the array = "; 
   cin >>n; 
   int data[n]; 
  
   for(int i=0; i<n; i++){ 
      cin>> data[i]; 
   }
   
   for(int i=0; i<n; i++) { 
      for(int j=0; j<n -i; j++) { 
       if(data[j] > data[j+1]) { 
           temp = data[i]; 
           data[i] = data[i+1]; 
           data[i+1] = temp; 
           
	   }
	  }
   }
    cout << "The Sorted array is "; 
    for(int i=0; i<n; i++) { 
       cout << data[i] << " "; 
	}
   return 0; 
}


