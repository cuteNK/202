// cout, endl ��ü�� ������ ����
#include <iostream>
// printf()�� ������ ����
#include <stdio.h>
// strcpy�� ������ ����
#include <string.h>

// std:: �� �ᵵ ��
using namespace std;

int main() {
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	std::string cppMunja = "cpp_insert";
	cout << cppMunja << endl;
	return 0;
}