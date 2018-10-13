#include<iostream>
using namespace std;
inline int Mutiply(int x, int y)
{
	return x * y;
}
int main()
{
	int a = Mutiply(3 + 4, 2 + 3);
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}