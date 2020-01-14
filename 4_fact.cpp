#include <iostream>
using namespace std;

long long fact(int n)
{
	if (n < 0) 
		return 0; 
	if (n == 0) 
		return 1; 
	else 
		return n * fact(n - 1);
}

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	cout << "fact(" << n << ") = " << fact(n) << endl;
	system("pause");
	return 0;
}