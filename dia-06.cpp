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
        cout << "\n=== Sistema de Tarefas (Dia 06) ===\n";
        cout << "1 - Adicionar tarefa\n";
        cout << "2 - Listar tarefas\n";
        cout << "3 - Marcar tarefa como concluída\n";
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
            if (tarefas.empty()) {
                cout << "Nenhuma tarefa cadastrada.\n";
            } else {
                for (int i = 0; i < tarefas.size(); i++) {
                    cout << i+1 << ". " << tarefas[i].descricao 
                         << " - " << (tarefas[i].concluida ? "Concluída" : "Pendente") 
                         << endl;
                }
            }
        }
        else if (opcao == 3) {
            if (tarefas.empty()) {
                cout << "Não há tarefas para concluir.\n";
            } else {
                int id;
                cout << "Digite o número da tarefa que deseja concluir: ";
                cin >> id;
                id--; // índice real

                if (id >= 0 && id < tarefas.size()) {
                    tarefas[id].concluida = true;
                    cout << "Tarefa marcada como concluída!\n";
                } else {
                    cout << "Índice inválido!\n";
                }
            }
        }
    } while (opcao != 0);

    cout << "Encerrando programa...\n";
    return 0;
}
