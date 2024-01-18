//#include <iostream>
//#include <string>
//using namespace std;
//string putCommas(int n) {
//    if (n == 0) {
//        return "0";
//    }
//
//    string result;
//    int count = 0;
//
//    while (n > 0) {
//        if (count != 0 && count % 3 == 0) {
//            result = "," + result;
//        }
//
//        result = char('0' + n % 10) + result;
//        n /= 10;
//        count++;
//    }
//
//    return result;
//}
//
//int main() {
//    int num = 1234567;
//    string formatted = putCommas(num);
//    cout << formatted << endl; 
//    return 0;
//}