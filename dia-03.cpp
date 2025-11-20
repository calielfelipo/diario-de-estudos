#include <iostream>
using namespace std;

int main() {
    cout << "Dia 03 - Verificar se o numero eh par ou impar" << endl;

    int n;
    cout << "Digite um numero: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "O numero " << n << " eh PAR!" << endl;
    } else {
        cout << "O numero " << n << " eh IMPAR!" << endl;
    }

    return 0;
}
