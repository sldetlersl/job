#include <iostream>
using namespace std;

void sort(int *arr, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// меняем элементы местами
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cout << "Size = ";
	cin >> n;
	int *a = new int[n];
	cout << "Array : ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, n);
	cout << "Sorted : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
