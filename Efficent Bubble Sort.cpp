#include <iostream>
using namespace std; 
int main() { 
    int data[] = { 2,1,4,5,9,0}; 
    int lenght = sizeof(data) /sizeof(data[0]); 
    int temp; 
    bool flag=true; 
    
    for(int i=0 ; i<lenght -1  && flag==true; i++) { 
       flag= false; 
       for(int j=0; j<lenght -i; j++) { 
          if(data[j] > data[j+1] ) { 
              temp = data[j]; 
              data[j] = data[j+1]; 
              data[j+1] = temp; 
              flag =true; 
		  }
	   }
	}
      cout << "The sorted array is "; 
      for(int i=0; i <lenght ; i++) { 
         cout << data[i] << " " <<endl; 
         
	  }
     
    
    
    
    return 0;  
}
