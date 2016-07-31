#include <iostream>
#include <cstring> 
using namespace std;

bool palindrome(char* start){
	char *end = start;	//pointer to end of array, set as start
	while (*end != '\0') {
			end++;
		}
	end--; 

	while (start < end) {
		if (*start != *end) {
			return false;
		}
		start++;
		end--; 
		}
	return true; 
}

int main (){
	char start[] = "firetruck";
	palindrome(start);
	return 0;
}
