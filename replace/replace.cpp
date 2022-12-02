#include <iostream>
#include <string>
using namespace std;
int main()
{
	string sent;
	cout << "write you message"<<endl;

	getline(cin, sent);

	for (int i = 0,j=sent.length(); i<(sent.length() / 2);  i++,j--)// half of string and replace
	{
		swap(sent[i], sent[j]);
	}
	cout << sent;
}
