// Bubble Sort, 
// is a sorting algorithm that compares two adjacent elements, 
// and swaps them until the entire list is ordered.

#include <stdio.h>

void bubble_sort(int a[], int size);  
void swap(int *x, int *y);				// swap function

int main() {
				int arr[] = {3, 6, 1, 0, 3, 8, 2, 9, 2};
				int size = sizeof(arr) / sizeof(arr[0]);

				bubble_sort(arr, size);
}

void bubble_sort(int a[], int size) {
				for(int i = 0; i < size; i++) {  // iterate n times (where n = size)
								for(int j = 0; j < size - 1 - i; j++) {  // go through each pair 
												if(a[j] > a[j + 1]) {                // and swap they are 
																swap(&a[j], &a[j + 1]);	         // unordered.
												}	
								}				
				}
}

void swap(int *x, int *y) {
				int temp;
				temp	= *x;
				*x = *y;
				*y = temp;
}
