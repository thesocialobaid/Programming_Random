#include <iostream> 
using namespace std; 
int main() { 
   int key; 
   int data[] = {1,2,3,5,7,8,9,11,20,21,23,34,44,55}; 
   int low= 0; 
   const int size= sizeof(data)/sizeof(data[0]); 
   int high = size -1; 
   int mid = high + low / 2; 
   bool flag= false; 
   
   cout << "Enter the value to look for "; 
   cin >> key; 
   
   for(int i=low; i<high ; i++) { 
      if( data[i] = key) { 
          flag =true; 
	  }
	  else { 
	     if(data[i] < mid) { 
	       low= mid +1; 
		 }
		 else { 
		    if(data[i] >mid ) { 
		    high = mid -1; 
			}
		 }
	  }
   }


    if(flag==true) { 
      cout << "The value is present in the array "; 
	}
	else { 
	cout << "The value is not present in the array ";
	}


}
