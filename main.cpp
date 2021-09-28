#include <iostream>
using namespace std;

int main() {
    int a = 90;
    int b = 93;
    int c = 807;
    int d = 0;
    cout << "введи число\n";
    cin >> d;
    int Result = 0;
    Result = ((c+b)*(a+d))/(-b-a);
    cout << Result << endl ;
}
