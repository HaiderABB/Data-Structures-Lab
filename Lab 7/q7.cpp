//#include <iostream>
//using namespace std;
//
//double calculateFutureValue(double p, double r, int y, double c) {
//    if (y == 0) return p;
//    double i = p * r;
//    double np = p + i + c;
//    return calculateFutureValue(np, r, y - 1, c);
//}
//
//int main() {
//    double principle = 1000.0;
//    double rate = 0.05;
//    int years = 5;
//    double contribution = 100.0;
//
//    double futureVal = calculateFutureValue(principle, rate, years, contribution);
//
//    cout << "Future value: $" << futureVal << endl;
//
//
//}
