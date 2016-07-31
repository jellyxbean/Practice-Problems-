#include <iostream>
#include <string>
using namespace std;

void replaceSpaces(string str){

    //Getting the length of the string, counting the number of spaces 
    int strLen = str.length();
    int i, count = 0;
    for (i = 0; i <= strLen; i++) {
        if(str[i]==' ')
        count++;
    }

    //Determining the new length needed to allocate for replacement characters '%20'
    int newLength = strLen + count * 2;
    str.resize(newLength);
    str[newLength] = '\0';

    for (i = strLen - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[newLength - 1] = '0';
            str[newLength - 2] = '2';
            str[newLength - 3] = '%';
            newLength = newLength - 3;
        }
        else {
            str[newLength - 1] = str[i];
            newLength = newLength -1;
        }
    }
    cout << str <<endl;
}

int main() {
    string str = "Hi Jen Sun";
    replaceSpaces(str);

    return 0;
}
