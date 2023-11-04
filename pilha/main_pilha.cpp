#include <iostream>
#include "pilha.h"

using namespace std;

int main() {
    pilha pilha1;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de pilha:\n";
    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";

        cin >> opcao;
        if (opcao == 1) {
            cout << "Digite o elemento a ser inserido na pilha: ";
            cin >> item;
            pilha1.push(item);
        } else if (opcao == 2) {
            item = pilha1.pop();
            cout << "Elemento removido: " << item << endl;
        } else if (opcao == 3) {
            pilha1.print();
        } else if (opcao == 0) {
            cout << "Programa encerrado!\n";
        } else {
            cout << "Opção invalida!\n";
        }

        cout << "\n";
    } while (opcao > 0 && opcao <= 3);

    return 0;
}