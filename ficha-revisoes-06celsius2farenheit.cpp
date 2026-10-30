#include <iostream>

using namespace std;

int main() {

    int celsius, fahrenheit;
    cout << "Introduza a temperatura em graus Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius*9/5)+32;
    cout << celsius << " graus Celsius e em " << fahrenheit << " graus Fahrenheit. ";
    return 0;
}
