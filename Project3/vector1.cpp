#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>v = { 7,5,16,8 };
	v.push_back(25);
	v.push_back(13);
	for (int i = 0; i < v.size(); i++)
		cout << v[i]<<'-';
	cout<<'\n';
	v.pop_back();
	v.pop_back();
	for (int i = 0; i < v.size(); i++)
		cout << v[i]<<'-';
	cout << '\n';
	system("pause");
}