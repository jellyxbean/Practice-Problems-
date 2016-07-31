//Reverse a null-terminated string
//Null character at end to signify end of string '\0'
//Time complexity: O(n)

#include <iostream>
#include <cstring> 
using namespace std;

void reverseString(char *str) {

char* end = str; //end points to first character in string
char temp; 
		
	//finding the last character
	while (*end != '\0') 
	{ 
		end++; 
	}
	//go back one to find the last character in string
	end --; 

	while (str < end){
		temp = *str;
		*str++ = *end;
		*end-- = temp; 
	}
}

int main () {
  char str[] = "Happy Monday!";
  
  reverseString(str); 
  cout << "The reversed string is: " << str << endl; 
  
  return 0;
}


