#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s = "hello", s2("world");
	cout<< s.size() << endl;
	//ͨ��s.substr ���������
	string s3 = s.substr(1, 3);
	cout << s3 << endl;
	//s4 ����ֱ��ƴ��
	string s4 = s + "" + s2;
	cout << s4 << endl;
	s4[0] = 'H';
	s4[6] = 'x';
	// �ı�s4�������
	cout << s4 << endl;
	// ������s4 ��find����������ͨ�����������ȷ��λ��
	int pos = s4.find("orl");
	cout << pos << endl;
	s4.insert(3, "ABCDE");
	for (int i = 0; i < s4.size(); i++)
		cout << s4[i] << '-';
	cout << "\n";
	system("pause");
}	