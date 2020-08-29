#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) { //삽입정렬
	for (int i = 1; i < size; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) { //왼쪽이 오른쪽보다 작으면 교환, j = 0이 되면 j-1이 없으므로
			swap(arr[j - 1], arr[j]);
		}
	}
}

void swap(int& a, int& b) { //교환
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int arr[] = { 7,2,1,6,4,3,5 };
	int size = sizeof(arr) / sizeof(int);

	insertion_sort(arr, size);//삽입정렬

	for (int i = 0; i < size; i++) {//출력
		cout << arr[i] << ' ';
	}
