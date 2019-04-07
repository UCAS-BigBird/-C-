#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s = "hello", s2("world");
	cout<< s.size() << endl;
	//通过s.substr 获得下坐标
	string s3 = s.substr(1, 3);
	cout << s3 << endl;
	//s4 可以直接拼接
	string s4 = s + "" + s2;
	cout << s4 << endl;
	s4[0] = 'H';
	s4[6] = 'x';
	// 改变s4的运算符
	cout << s4 << endl;
	// 下面是s4 的find函数，可以通过这个操作来确定位置
	int pos = s4.find("orl");
	cout << pos << endl;
	s4.insert(3, "ABCDE");
	for (int i = 0; i < s4.size(); i++)
		cout << s4[i] << '-';
	cout << "\n";
	system("pause");
}	