#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<char, int> a, pair<char,int> b) {
	return a.second < b.second;
}



int main() {
	pair<char, int> card[6];
	bool rule[9];
	int ret;

	for (int i = 0; i < 5; i++) {
		cin >> card[i].first >> card[i].second;
	}
	sort(card, card + 5, compare);
	
	//·ê 1¹ø
	rule[0] = true;
	for (int i = 0; i < 4; i++) {
		if (card[i].first != card[i + 1].first) {
			rule[0] = false;
		}
	}
	for (int i = 0; i < 4; i++) {
		if ((card[i].second+1)!= card[i+1].second)rule[0] = false;

	}
	if (rule[0]) {
		 printf("%d",card[4].second + 900);
		 return 0;
	}

	//·ê 2¹ø
	rule[1] = false;
	if (card[0].second == card[3].second || card[1].second == card[4].second) {
		rule[1] = true;
	}
	if (rule[1]) {
		cout << card[2].second + 800;
		return 0;
	}

	//·ê 3qjs
	rule[2] = false;
	if (card[0].second == card[2].second && card[3].second == card[4].second) {
		cout << card[0].second * 10 + card[3].second + 700;
		return 0;
	}
	else if(card[0].second == card[1].second && card[2].second == card[4].second) {
		cout << card[2].second * 10 + card[0].second + 700;
		return 0; 
	
	}

	//·ê4¹ø
	rule[3] = true;
	char koo = card[0].first;
	for (int i = 1; i < 5; i++) {
		if (koo != card[i].first) {
			rule[3] = false;
		}
	}
	if (rule[3]) {
		cout << card[4].second + 600;
		return 0;
	}
	//·ê 5¹ø
	rule[4] = true;
	for (int i = 0; i < 4; i++) {
		if ((card[i].second + 1) != card[i + 1].second) {
			rule[4] = false;
			break;
		}
	}
	if (rule[4]) {
		cout << card[4].second + 500;
		return 0;
	}

	//·ê 6¹ø
	rule[5] = false;
	if (card[0].second == card[2].second || card[1].second == card[3].second || card[2].second == card[4].second) {
		rule[5] = true;
	}
	if (rule[5]) {
		cout << card[2].second + 400;
		return 0;
	}

	//·ê 7¹ø
	rule[6] = false;
	if (card[0].second == card[1].second && card[2].second == card[3].second) {
		rule[6] = true;
		cout << (card[0].second < card[2].second ? (card[2].second * 10 + card[0].second + 300) : (card[0].second * 10 + card[2].second + 300));
		return 0;
	}
	else if (card[0].second == card[1].second && card[3].second == card[4].second) {
		rule[6] = true;
		cout << (card[0].second < card[3].second ? (card[3].second * 10 + card[0].second + 300) : (card[0].second * 10 + card[3].second + 300));
		return 0;
	}
	else if (card[1].second == card[2].second && card[3].second == card[4].second) {
		rule[6] = true;
		cout << (card[1].second < card[3].second ? (card[3].second * 10 + card[1].second + 300) : (card[1].second * 10 + card[3].second + 300));
		return 0;
	}
	//·ê 8¹ø
	rule[7] = false;
	if (card[0].second == card[1].second) {
		cout << card[0].second + 200;
		return 0;
	} 
	else if (card[1].second == card[2].second) {
		cout << card[1].second + 200;
		return 0;
	}
	else if (card[2].second == card[3].second) {
		cout << card[2].second + 200;
		return 0;
	}
	else if (card[3].second == card[4].second) {
		cout << card[3].second + 200;
		return 0;
	}
	//·ê 9¹ø
	cout << card[4].second +100;
	return 0;
}