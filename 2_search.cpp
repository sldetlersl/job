#include <iostream>
using namespace std;

int search(int *a, int size, int v)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] == v)
			return i;
	}
	return -1;
}

int main()
{
	int n;
	cout << "Size = ";
	cin >> n;
	int *a = new int[n];
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Value = ";
	int v;
	cin >> v;
	int idx;
	idx = search(a, n, v);
	if (idx == -1)
		cout << "No element" << endl;
	else
		cout << "Element is on " << idx + 1 << " position" << endl;
	system("pause");
	return 0;
}
