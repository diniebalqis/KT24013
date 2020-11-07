#include <iostream>
using namespace std;

	double getAverage(int *array, int SIZE) {
		int i, sum =0;
		double average;
		for (int i=0; i<SIZE; i++) {
			sum = sum + *(array+i);
		}
		average = double(sum)/SIZE;
		return average;
	}
	
	void swap (int *n, int *m) {
		int temp;
		temp = *n;
		*n = *m;
		*m = temp;
	}

	void ChangeIt_1(int n) {
		n = 5;
	}
	
	void ChangeIt_2(int *n) {
		*n = 6;
	} 
	
	void ChangeIt_3(int &n) {
		n = 7;
	}
	
	int ChangeIt_4(int n) {
		n = 8;
	 
	return n;
	}
		
int main(){
	
	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 1 - Exercise 3\n" << endl;	
	
	int *p;   //declare p as pointer
	int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
	p=&x;     //reference of x	
	
	ChangeIt_1(x);   //call by value
	cout << "ChangeIt_1 : " << *p << endl;
/* 1. Inspect the code and in your own interpretation, describe the reason call to function
ChangeIt_1(n) will not change x in main()?
Answer: Because ChangeIt_1 is call by value. Hence, it will not be modified.*/

	ChangeIt_2(&x);   //call by reference
	cout << "ChangeIt_2 : " << *p << endl;
/* Inspect the code and in your own interpretation, describe the reason parameter n in
ChangeIt_2(int *n) is a pointer, and statement in the function is *n = 6 ?
Answer: Because ChangeIt_2 is call by reference. To pass a value by reference, argument pointers are passed to the functions. So accordingly it is needed to declare the function parameters as pointer.*/	

	ChangeIt_3(x);   //call by value
	cout << "ChangeIt_3 : " << *p << endl;	

	x = ChangeIt_4(x);   //call by value
	cout << "ChangeIt_4 : " << *p << endl;
	
	cout << "\nValue of x and y Before Swap " << endl;
	cout << "x is " << x << "   y is " << y << endl;

/* 3.Write a function called void swap with two parameters, which will receive the address
of x and y as pointer. The function should swap the value of x and y only if x is larger than
y. Print the value of x and y after the function call.*/
	
	cout << "\nValue of x and y After Swap " << endl;
	swap(&x,&y);
	cout << "x is " << x << "   y is " << y << endl;
	
/* 4.Write a function called double getAverage(int *array, int SIZE), where
it accept the array as pointer, and return the average of the array. Print the returned
value from this function. Always use *array rather than subscript to access the array
value.*/

	double average;
	average = getAverage(data,5);
	
	cout << "\nAverage value is " << average << endl;

}



