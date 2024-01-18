//#include <iostream>
//#include <string>
//
//void printRecursive(int k, std::string current) {
//    // Base case
//    if (current.length() == k) {
//        std::cout << current << std::endl;
//        return;
//    }
//
//    //Append '0' and '1' to the current string and continue the recursion.
//    printRecursive(k, current + "0");
//    printRecursive(k, current + "1");
//}
//
//void print01(int k) {
//    if (k <= 0) {
//        
//        std::cout << "Invalid input." << std::endl;
//    }
//    else {
//        
//        printRecursive(k, "");
//    }
//}
//
//int main() {
//    int k = 2; 
//    print01(k);
//
//}
