//Determine if a string is an anagram
//Time complexity: O(1) 
//Space complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

bool anagram(string one, string two) 
{
	if (one.length() != two.length())
	{	
    	return false;
	}
	//sorting the strings
	sort(one.begin(), one.end());
	sort(two.begin(), two.end());
	
	return (one == two);
}

int main() {
	string one;
	string two;

	cout << "please enter in a string: ";
	cin >> one;
	cout << "please enter in another string: ";
	cin >> two;

	cout << anagram(one, two) <<endl;

	return 0;
}
