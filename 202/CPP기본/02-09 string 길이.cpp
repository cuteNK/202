#include <iostream>	// cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

#include <stdio.h>	// printf()�� ������ ����
#include <string.h>	// strlen()�� ������ ����

// std:: �� �ᵵ ��
using namespace std;

int main() {
	char cI[10] = "aaa";
	printf("%d \n", strlen(cI));

	string cppI = "aaa";
	cout << cppI.size() << endl;
	cout << cppI.length() << endl;

	return 0;
}