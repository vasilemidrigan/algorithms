// Binary Search can only be implemented into a sorted list of items. 

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

int binary_search(int a[], int size, int n);

int main() {
			int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		 int size = sizeof(arr) / sizeof(arr[0]);

		 int is_value_found = binary_search(arr, size, 8);	
}

int binary_search(int a[], int size, int n) {
				int lo = 0;
				int hi = size - 1;
	
				while(lo <= hi) {
								int mid = lo + (hi - lo) / 2;
								if(a[mid] == n) {
												return mid; // Success	
								}	
								else if(a[mid] < n) {
												lo = mid + 1;		
				   	}
								else {
												hi = mid - 1;	
								}
				}		
				
				return 1; // Fail
}
