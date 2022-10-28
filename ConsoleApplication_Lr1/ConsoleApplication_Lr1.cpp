#include<iostream>
using namespace std;
int main() {
	int a[1024];
	for (int i = 0; i <= 1024; i++)
		a[i] = i;
	for (int i = 0; i <= 1024; i++)
		cout << a[i] << ' ';
}