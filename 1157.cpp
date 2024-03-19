#include <bits/stdc++.h>
using namespace std;
int alpha[26], cnt = 0;
string input;
//아스키코드 : 대문자 65~90, 소문자 97~122

int main(void) {
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] > 96) alpha[input[i] - 97]++;
		else alpha[input[i] - 65]++;
	}
	int max = 0;
	int max_idx;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max) {
			max = alpha[i];
			max_idx = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) cnt++;
	}
	if (cnt > 1) cout << "?";
	else cout << (char)(max_idx + 65);
}