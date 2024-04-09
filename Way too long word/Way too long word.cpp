#include <iostream>
#include <string>
using namespace std;
//A.way too long word
int main()
{
	int a;
	string word;
	cout << "enter the word\n";
	getline(cin, word);

	a = word.length() - 2;

	if (word.length() > 5)
	{
		cout << word[0] << a << word[word.length() - 1];
	}
	else
	{
		cout << word;
	}
	return 0;
}