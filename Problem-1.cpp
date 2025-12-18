#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    double calculate() {
        if (operation == "add") {
            return a + b;
        } 
        else if (operation == "sub") {
            return a - b;
        } 
        else if (operation == "mul") {
            return a * b;
        } 
        else if (operation == "div") {
            if (b == 0) {
                cout << "Error: Division by zero\n";
                return 0;
            }
            return a / b;
        } 
        else {
            cout << "Invalid operation\n";
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cin >> a >> b >> op;

    Calculator calc(a, b, op);
    cout << calc.calculate();

    return 0;
}
