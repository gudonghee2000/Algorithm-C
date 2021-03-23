#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <cstring>
using namespace std;

struct family
{
	int age;
	char name[101];
	int lating;
};

family koo[100000];
bool compare(family a, family b) {
	if (a.age == b.age) {
		return a.lating < b.lating;
	}

	return a.age < b.age;
}

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> koo[i].age;
		cin >> koo[i].name;
		koo[i].lating = i;
	}

	sort(koo, koo + n, compare);
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", koo[i].age, koo[i].name);
	}
	return 0;
}