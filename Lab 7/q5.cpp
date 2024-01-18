//#include <iostream>
//
//using namespace std;
//
//int Compare(const char* string1, const char* string2) {
//    if (*string1 == '\0' && *string2 == '\0') {
//        return 0;
//    }
//    else if (*string1 > *string2) {
//        return 1;
//    }
//    else if (*string1 < *string2) {
//        return -1;
//    }
//    else {
//        return Compare(string1 + 1, string2 + 1);
//    }
//}
//
//int main() {
//    const char* str1 = "apple";
//    const char* str2 = "banana";
//
//    int result = Compare(str1, str2);
//    if (result == 0) {
//        cout << "Strings are equal." << endl;
//    }
//    else if (result == 1) {
//        cout << "String1 is greater." << endl;
//    }
//    else {
//        cout << "String2 is greater." << endl;
//    }
//
//    return 0;
//}
