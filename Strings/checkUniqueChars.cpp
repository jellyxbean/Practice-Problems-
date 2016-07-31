//Checking to see if a string has all unique characters
//Time complexity: O(n)
//Space complexity: O(1)

#include <iostream>
#include <string>
using namespace std;
 
//Assuming ASCII, 256 unique characters 
//Other option is unicode, which would just allocate for more space 

//pass by reference using const &
bool checkString(const string& user) {
	if (user.length() > 256) 
	{
		return false;
	}
	//creating a boolean array of size 256
	//setting all values to false (0)
	bool check[256] = {false};
	//can also use
	//	bool check[256] = {0};
	
	//loop until end of string 
	for (int i = 0; i < user.length(); i++)
		{
		//at() returns reference to specified character in the string 
		//int: returns ASCII code of character 
		//char: would return character value
		int value = user.at(i); 
			//if this value = true, it has already been found, return false 
			if (check[value] == true)
			{
				return false; 
			}
			else 
			{
				//if not found yet, set this value to true 
				check[value] = true;
			}
		}
	return true;
}//ends bool

int main() {
	string user;
	cout << "Please enter in a string: ";
	cin  >> user;

	cout << checkString(user) << endl;

	return 0;
}
