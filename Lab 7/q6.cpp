//#include <iostream>
//
//using namespace std;
//
//int product(int a, int b) {
//    if (b == 0) {
//        return 0; // Base case: Product with 0 is 0
//    }
//    else if (b > 0) {
//        return a + product(a, b - 1); // Recursive case for positive b
//    }
//    else {
//        return product(a, -b); // Recursive case for negative b
//    }
//}
//
//int main() {
//    int a = 5;
//    int b = 3;
//
//    int result = product(a, b);
//    cout << "Product of " << a << " and " << b << " is: " << result << endl;
//
//    return 0;
//}
