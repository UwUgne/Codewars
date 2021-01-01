#include <string>
using namespace std;

string reverseString(string str)
{
	std::cin >> str;

	reverse(str.begin(), str.end()); 
	cout << str;
	return str;
}
