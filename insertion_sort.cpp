#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) { //��������
	for (int i = 1; i < size; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) { //������ �����ʺ��� ������ ��ȯ, j = 0�� �Ǹ� j-1�� �����Ƿ�
			swap(arr[j - 1], arr[j]);
		}
	}
}

void swap(int& a, int& b) { //��ȯ
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int arr[] = { 7,2,1,6,4,3,5 };
	int size = sizeof(arr) / sizeof(int);

	insertion_sort(arr, size);//��������

	for (int i = 0; i < size; i++) {//���
		cout << arr[i] << ' ';
	}
