#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Tarefa {
    string descricao;
    bool concluida;
};

int main() {
    vector<Tarefa> tarefas;
    int opcao;

    do {
        cout << "\n=== Sistema de Tarefas (Dia 05) ===\n";
        cout << "1 - Adicionar tarefa\n";
        cout << "2 - Listar tarefas\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            Tarefa t;
            cout << "Descrição da tarefa: ";
            getline(cin, t.descricao);
            t.concluida = false;
            tarefas.push_back(t);
            cout << "Tarefa adicionada!\n";
        }
        else if (opcao == 2) {
            cout << "\n--- Lista de Tarefas ---\n";
            if ( tarefas.empty() ) {
                cout << "Nenhuma tarefa cadastrada.\n";
            } else {
                for (int i = 0; i < tarefas.size(); i++) {
                    cout << i+1 << ". " << tarefas[i].descricao 
                         << " - " << (tarefas[i].concluida ? "Concluída" : "Pendente") 
                         << endl;
                }
            }
        }
    } while (opcao != 0);

    cout << "Encerrando programa...\n";
    return 0;
}
