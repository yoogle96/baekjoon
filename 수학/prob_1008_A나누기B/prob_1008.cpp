#include <iostream>

using namespace std;

int main(){
    long double a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(15);
    cout << a/b;
    return 0;
}