#include <stdio.h>

int main() {
	
	int arr[10] = {3, 5, 0, 0, 1, 2, 7}; // 정수형 arr 배열의 버퍼를 10만큼 할당후 초기화 
	int n = sizeof(arr) / sizeof(int); // arr의 크기를 정수형 n변수에 할당
	
	for(int i =0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if( arr[i] > arr[j]) { // arr[i]의 인덱스이 더크면 Ture
				arr[i] ^= arr[j] ^= arr[i] ^= arr[j]; // swap
			}
		}
	}
	
	for(int i =0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}
