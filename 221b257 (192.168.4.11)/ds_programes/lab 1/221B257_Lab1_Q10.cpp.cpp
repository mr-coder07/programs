//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include <iostream>
#include <cstring>

char* concatenateStrings(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    char* result = new char[len1 + len2 + 1];

    strcpy(result, str1);

    strcat(result, str2);

    return result;
}

int main() {
    const char* firstString = "Hello, ";
    const char* secondString = "world!";

    char* concatenatedString = concatenateStrings(firstString, secondString);
    std::cout << concatenatedString << std::endl;
    delete[] concatenatedString;

    return 0;
}
