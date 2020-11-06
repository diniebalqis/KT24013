#include <iostream>
using namespace std;

main(){
	
	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 1 - Exercise 1\n" << endl;
    
	int SIZE=5, data[SIZE]={0,1,2,3,4};
	int *p = &data[0];
	int *a = &data[0];
 
 //p[0] and *p have similar output
	 cout << "p[0] and *p have similar output" << endl;
	 cout << "p[0] = " << p[0] << endl;
	 cout << "*p = " << *p << endl << endl;
 
 //operation of pointer arithmetic
	 cout << "Operation Of Pointer Arithmetic" << endl;
	 cout << "*(p+1) = " << *(p+1) << endl;
	 cout << "*(p+2) = " << *(p+2) << endl << endl;
 
 
	 cout << "*p++ = " << *p++ << endl;
	 cout << "*p++ = " << *p++ << endl;
	 cout << "*p++ = " << *p++ << endl << endl; 
 

/*
 1. *p = &data[0] 
 	pointer p is address of data at element 0.
 	
 2. p[0] and *p have similar output, because pointer p is assigned to value at element 0. 

 3. *(p+0), *(p+1) and *(p+3) are operation of pointer arithmetic  

 4. *p++ is pointer incremented by 1
*/
 
 //5. for loop using standard subscript
	 cout << "for loop (standard subscript)" << endl;
	 
	 for(int i=0; i<5; i++){
	     cout << data[i] << " ";
	 }
	 
	 cout << endl << endl;
	 
 //6. for loop using pointer arithmetic
 	 
	 cout << "for loop (pointer arithmetic)" << endl;
	 for(int i=0; i<5; i++){
	     cout << *(a+i) << " ";
	 }
	 
	 cout << endl << endl;
	 
	 p=&data[0];
	 for(int i=0; i<5; i++){
	 	 cout << *p++ << " ";
	 }
	 return 0;
}
