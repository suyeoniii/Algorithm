#include <iostream>

using namespace std;

void selection_sort(int arr[], int size) { //선택정렬

	int min;//최소 값의 index번호

	for (int i = 0; i < size - 1; i++) {
		min = i; //정렬되지 않은 부분의 첫번째 index
		for (int j = i; j < size; j++) {
			if (arr[j] <= arr[min]) {
				min = j; //현재 가장 작은 값보다 작으면 갱신
			}
		}
		swap(arr[i], arr[min]);//교환
	}
}

void swap(int& a, int& b) { //교환
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int arr[] = { 4,3,1,6,2,5 }; //정렬할 배열
	int size = sizeof(arr) / sizeof(int);//배열 크기

	selection_sort(arr, size);//선택정렬

	for (int i = 0; i < size; i++) { //배열 출력
		cout << arr[i];
	}
}