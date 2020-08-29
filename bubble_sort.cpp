#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
	int i, j;
	int temp;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) { //왼쪽이 오른쪽 보다 크면 swap
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[5] = { 3, 2, 5, 1, 4 };
	int n = sizeof(arr) / sizeof(int);

	bubble_sort(arr, n); //버블정렬 수행

	for (int i = 0; i < n; i++)//출력
		cout << arr[i];
}