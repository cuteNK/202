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

class Student : public Person
{
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();

private:
	int nHakbun;	// �й�
};

Student::Student() : Person()
{
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun) : Person(name, age), nHakbun(hakbun)
{
}

void Student :: study() {
	hi();
	cout << "" << endl;
}

int main(void) {
	Person* person = new Person("�ڳ���", 18);	// ����. ȭ��ǥ
	person->hi();
	Student student;
	student.study();
}