#include <iostream>

using namespace std;

void selection_sort(int arr[], int size) { //��������

	int min;//�ּ� ���� index��ȣ

	for (int i = 0; i < size - 1; i++) {
		min = i; //���ĵ��� ���� �κ��� ù��° index
		for (int j = i; j < size; j++) {
			if (arr[j] <= arr[min]) {
				min = j; //���� ���� ���� ������ ������ ����
			}
		}
		swap(arr[i], arr[min]);//��ȯ
	}
}

void swap(int& a, int& b) { //��ȯ
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int arr[] = { 4,3,1,6,2,5 }; //������ �迭
	int size = sizeof(arr) / sizeof(int);//�迭 ũ��

	selection_sort(arr, size);//��������

	for (int i = 0; i < size; i++) { //�迭 ���
		cout << arr[i];
	}
}