#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	char koo = { 'A', 'B', 'C', 'D', 'F' };
	double koos = { 4.0, 3.0 ,2.0 ,1.0, 0.0 };
	double ret = 0;

	string tmp;	
	cin >> tmp;
	
	for (int i :koo.size()) {
		if (tmp[0] == koo[i]) {
			ret = koos[i];
			break;
		}
	}

	if (tmp[1] == '+')ret += 0.3;
	else if (tmp[1] == '-')ret -= 0.3;
	
	cout << ret;
	return 0;
}