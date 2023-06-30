// Linear Search 

// The simplest searching algorithm performing sequential searching, starting from the one end and go through each element of the list, until the desired element in meet. 

#include <stdio.h>

int linear_search(int array[], int length, int value);

int main(void) {
				
				int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
				int length = sizeof(arr) / sizeof(arr[0]);

				int is_value_found = linear_search(arr, length, 8);
}

int linear_search(int array[], int length, int value) {
			 
			 // iterate through each element of the array and compare it with the value
				// we are looking for. If it is found return 0 (success) else return 1 (fail)	
				for(int i = 0; i < length; i++) {
								if(array[i] == value) {
												return 0; 
								}	
				}

				return 1; 
}
