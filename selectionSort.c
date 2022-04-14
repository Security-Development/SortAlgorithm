#include <stdio.h>
 
int main() {
	
	int arr[10] = {3, 5, 0, 0, 1, 2, 7};
	int n = sizeof(arr) / sizeof(int);
	
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if( arr[i] > arr[j]) {
				int data = arr[i];
				arr[i] = arr[j]; // swap
				arr[j] = data;
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}
