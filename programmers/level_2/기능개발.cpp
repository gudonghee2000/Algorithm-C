#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int w = 3;
	int h = 4;
	double line = w * w + h * h;
	line = sqrt(line);
	line = line / h;
	cout << line;
	return 0;
}


