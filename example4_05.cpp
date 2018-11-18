#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	Person(int n, char *na);
	~Person();
	void Print();
	void Print() const; //用于输出常成员函数
	void ModifyAge();   //用于修改年龄的普通成员函数
};
Person::Person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()
{
	delete[]name;
}
void Person::Print() const //常成员函数的定义
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is const Print()." << endl;
}
void Person::ModifyAge()
{
	age++;
}
int main()
{
	char a[] = "wu";
	char b[] = "zhang";
	const Person p1(17, a);
	cout << "Output const object p1" << endl;
	p1.Print();
	Person p2(18, b);
	cout << "Output general object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	system("pause");
	return 0;
}