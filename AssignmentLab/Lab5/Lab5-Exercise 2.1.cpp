#include <iostream>
#include <algorithm>

using namespace std;

void PrintArr(int input[]){
	
	cout << "Print Array         : ";
	for (int i=0; i < 3; i++)
		cout << input[i] << " ";
}

//Ascending Order Array funct.
void AscOrdArr(int input[]){
	
	cout << "In Ascending Order  : ";
	sort(input, input+3);
	for (int i=0; i < 3; i++)
		cout << input[i] << " ";
}

//Descending Order Array funct.
void DesOrdArr(int input[]){
	
	cout << "In Descending Order : ";		
	sort(input, input+3, greater<int>());
	for (int i=0; i < 3; i++)
		cout << input[i] << " ";
}

int main(){
	
	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 5 - Exercise 2-Part1\n" << endl;
		
	int input[3];
	int x;
	for(int i=0; i<3; i++){
		cout << "Enter number: ";
		cin >> x;
		input[i]=x;	
	}

	cout << endl;
	
	//call print array funct.
	PrintArr(input);

	cout << endl;

	//call sort funct. (ascending order)
	AscOrdArr(input);
	
	cout << endl;
	
	//call sort funct. (descending order)
	DesOrdArr(input);
	
	return 0;
}
