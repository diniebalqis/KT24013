#include <iostream>
using namespace std;

main(){

	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 1 - Exercise 2\n" << endl;
	
	int SIZE=5, data[SIZE]={1,3,2,5,4};
	int total = 0, *p;

	p = data;

	cout << *p++ <<endl;
	cout << *++p <<endl;
	cout << *p-- <<endl;
	cout << *--p <<endl;
	
	cout << "\nDisplay array element using while loop: ";
    int i=0;
	while (i<5){
		cout << " " << *(p + i)<< " ";
		++i;
	}
	
	//1.while loop (using pointer - starting from last element)	
	cout << "\n\nDisplay backward array element using while loop: ";
	int j=5-1;
	while (j>=0){
		cout << " " << *(p+j) << " ";
		j--;
	}
	
	//2.for loop (using pointer - total sum elements of array)
	for (i=0; i<5; i++){
		total = total + *(p+i);
	}
	cout << "\n\nSum of elements of array using for loop: " << total << endl;
	return 0;
}
