#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    cout << "Dia 04 - Estrutura de Pessoa" << endl;

    Pessoa p;

    cout << "Digite seu nome: ";
    getline(cin, p.nome);

    cout << "Digite sua idade: ";
    cin >> p.idade;

    cout << "\n--- Dados da Pessoa ---" << endl;
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << " anos" << endl;

    return 0;
}
