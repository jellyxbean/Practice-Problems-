/*
	Given two strings, check to see if string2 is a rotation of 
	of string1. Use one call to isSubstring to check if one word is 
	a substring to another.
*/

#include <iostream>
#include <string>
using namespace std;

bool isRotation(string strOne, string strTwo) 
{
	int length1;
	int length2;

	//Check to make sure strings are equal length & not empty
	length1 = strOne.length();
	length2 = strTwo.length();

	if (length1 == length2 && length1 > 0) 
	{
		//new string to hold value of stringOne twice
		string newString = strOne + strOne;
		//If target is not found, return string::npos
	
		//call isSubstring(newString, str2)
		return newString.find(strTwo) != string::npos; 
	}
  return false;
}

int main() {
	string strOne;
	string strTwo;
	
	cout << "Please enter in a string: "; 
	cin >> strOne; 
	cout << "Please enter in another string: ";
	cin >> strTwo; 
	
	cout << isRotation(strOne, strTwo) << endl;
}
