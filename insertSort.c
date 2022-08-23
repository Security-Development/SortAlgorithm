#include <stdio.h>

int main() {

	int arr[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
	int n = sizeof(arr) / sizeof(int);


	for(int i = 1; i < n; i++){
		for(int j = i; j >= 0; j--){
			if( arr[j] < arr[j-1] ) {
				int data = arr[j -1];
				arr[j -1] = arr[j];
				arr[j] = data;
			}
		}	
	}

	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}
