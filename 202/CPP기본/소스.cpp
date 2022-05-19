#include <iostream>
#include <string.h>

using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age);
	~Person();
	void hi();

private:
	string sName;	// �̸�
	int nAge;		// ����
};

Person::Person()
{
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) 
{
	/*
	sName = name;
	nAge = age;
	*/
	
}

Person::~Person()
{
}

void Person::hi() {
	cout << "�̸�: " << sName << endl;
	cout << "����: " << nAge << endl;
}

int main(void) {
	Person* person = new Person("�ڳ���", 18);
	person->hi();

}