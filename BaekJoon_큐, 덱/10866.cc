#include <iostream>
#include <deque>
#include <cstring>
using namespace std;


int main() {
	int n;
	cin >> n;
	deque<int> koo;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int a;
		if (str == "push_front") {
			
			cin >> a;
			koo.push_front(a);
			
		}
		else if (str == "push_back") {
			 
			cin >> a;
			koo.push_back(a);
		}
		else if (str == "pop_front"){
			if (koo.empty())
				cout << -1 << "\n";
			else
			{
				cout << koo.front() << "\n";
				koo.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (koo.empty())
				cout << -1 << "\n";
			else
			{
				cout << koo.back() << "\n";
				koo.pop_back();
			}
		}
		else if (str == "size") {
			cout << koo.size()<<"\n";
		}
		else if (str == "empty") {
			if (koo.empty())cout << 1<<"\n";
			else cout << 0 << "\n";
		}
		else if (str == "front") {
			if (koo.empty())cout << -1 << "\n";
			else
			cout << koo.front()<<"\n";
		}
		else if (str == "back") {
			if (koo.empty())cout << -1 << "\n";
			else
			cout << koo.back()<< "\n";
		}
	}
	return 0;
}
