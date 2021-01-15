#include <iostream>
#include <algorithm>

using namespace std; 

//Function to print array 
void printArr(int arr[], int x) 
{ 
    for (int i = 0; i < x; i++) 
        cout << arr[i] << " "; 
} 
  
//Function to sort the array of 0s, 1s, 2s, 3s and 4s 
void sortArr(int arr[], int x) 
{ 
    int i, num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 =0; 
  
    //Count the number of 0s, 1s, 2s, 3s and 4s in the array 
    for (i = 0; i < x; i++) { 
        switch (arr[i]) { 
        case 0: 
            num0++; 
            break; 
        case 1: 
            num1++; 
            break; 
        case 2: 
            num2++; 
            break;
		case 3: 
            num3++; 
            break; 
        case 4: 
            num4++; 
            break;  
        } 
    } 
  
    //Update the array 
    i = 0; 
  
    //Store all the 0s in the beginning 
    while (num0 > 0) { 
        arr[i++] = 0; 
        num0--; 
    } 
  
    //Then all the 1s 
    while (num1 > 0) { 
        arr[i++] = 1; 
        num1--; 
    } 
  
    //Then all the 2s 
    while (num2 > 0) { 
        arr[i++] = 2; 
        num2--; 
	}
	
    //Then all the 3s 
    while (num3 > 0) { 
        arr[i++] = 3; 
        num3--;
	}
	
    //Finally all the 4s 
    while (num4 > 0) { 
        arr[i++] = 4; 
        num4--;  
    } 
  
    // Print the sorted array 
    printArr(arr, x); 
} 
  
// Driver code 
int main(){

	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 5 - Exercise 2-Part2\n" << endl;	
	
	int arr[] = { 4, 2, 0, 3, 4, 0, 4, 1, 2, 1, 3}; 
    int x = sizeof(arr) / sizeof(int); 
  	
  	cout << "Array before sorting : [ ";
  	printArr(arr, x); 
  	cout << " ] " << endl;

  	cout << "Array after sorting  : [ ";
    sortArr(arr, x);
  	cout << " ] " << endl; 
  
    return 0;
} 


