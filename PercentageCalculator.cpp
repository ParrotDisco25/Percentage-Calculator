#include <iostream>
#include <string>
using namespace std;

int main() {
    float percentageToCalculate;
    double number;
    double result;
    cout << "Type a number: ";
    cin >> number;
    cout << "Type (in numbers) how big of a percentage you want: ";
    cin >> percentageToCalculate;
    result = percentageToCalculate * number / 100;
    cout << "result: " << result << endl;
    system("PAUSE");
    return 0;
}