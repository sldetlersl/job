#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	system("chcp 1251");
	string s, d = " ,.;!?:";
	cout << "String : ";
	getline(cin, s);
	vector<string> v;
	int b, e = 0;
	while ((b = s.find_first_not_of(d, e)) != s.npos) {
		e = s.find_first_of(d, b);
		v.push_back(s.substr(b, e - b));
		b = e;
	}
	cout << "Words: \n";
	map <string, int> dic;
	vector<string> uv;
	for (int i = 0; i < v.size(); i++)
		dic[v[i]]++;
	cout << "Unique words : " << endl;
	for (auto p = dic.begin(); p != dic.end(); ++p)
		if (p->second == 1)
			cout << p->first << endl;
	system("pause");
	return 0;
}

