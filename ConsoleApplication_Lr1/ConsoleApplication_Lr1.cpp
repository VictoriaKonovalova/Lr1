#include<iostream>
using namespace std;
int main() {
	int a[1024];
	for (int i = 0; i <= 40; i++)
		a[i] = i;
	for (int i = 0; i <= 40; i++)
		cout << a[i] << ' ';
}