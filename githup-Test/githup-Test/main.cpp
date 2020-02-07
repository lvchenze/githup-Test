#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	char c;

	cout << "ÇëÊäÈëÒ»¸ö×Ö·û: " << endl; 
	cin >> c;

	if (c >= 'a' && c <='z') {
		c = c - 'a' + 'A';
	} else if (c >= 'A' && c <= 'Z') {
		c = c - 'A' + 'a';
	} 
	cout << c << endl; 
	system("pause");

	return 0;
}