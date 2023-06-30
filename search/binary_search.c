// Binary Search can only be implemented into a sorted list of items, 
// it works by setting a middle of lower and upper boundaries, 
// if the element we are searching for is at the current index, 
// then the value is found and the algorithm operation is done, 
// else if the element is greather than the value at the current index  then 
// we're setting lower bound to middle + 1,
// else if the element is lower than the value at the current index, then 
// we're setting the upper bound to the middle - 1,
// and so on until the middle element is equal to one we're searching for, 
// if we're out of elements in the array, return false, as the element we
// are searching for is not found. 

/* x = 4
	* lo = arr[0]
	* hi = arr[length]
	* 
	* while (low <= high) 	
	*  mid = [(lo + hi)/2] 
	* 	 if (x == mid) 
	* 						return mid
	* 		else if (x > mid)
	* 						lo = mid + 1
	*		 else 
	* 		    hi = mid - 1
	* else  
	*   return -1 // if there is no such item
	* */

#include <stdio.h>
#include <stdbool.h>

bool binary_search(int a[], int size, int n);

int main() {
			int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		 int size = sizeof(arr) / sizeof(arr[0]);

		 bool is_value_found = binary_search(arr, size, 10);	
			printf("%s", is_value_found ? "true": "false");
}

bool binary_search(int a[], int size, int n) {
				int lo = 0;
				int hi = size - 1;
					
				while(lo <= hi) {
								printf("lo: %i, hi: %i\n", lo, hi);
								int mid = lo + (hi - lo) / 2;
								if(a[mid] == n) {
												return true; // Success	
								}	
								else if(a[mid] < n) {
												lo = mid + 1;		
				   	}
								else {
												hi = mid - 1;	
								}
				}		
				
				return false;
}
