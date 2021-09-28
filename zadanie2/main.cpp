#include <iostream>
#include <string>
using namespace std;

int main() {

    int a = 5;
    float b = 6.36547;
    string c = "8.17265";

    a = double(a);
    b = double(b);
    double cc = stod(c);
    double Result = cc/a+b;

    cout << Result << endl;
}
