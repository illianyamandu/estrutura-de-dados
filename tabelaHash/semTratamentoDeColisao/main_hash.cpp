#include <iostream>
#include "hash.h"

using namespace std;

int main() {
    int tamVetor, max, opcao, matricula;
    string nome;
    bool busca;

    cout << "Programa gerador de Hash!\n";
    cout << "Digite o tamanho do vetor: ";
    cin >> tamVetor;
    cout << "Digite o tamanho numero maximo de elementos: ";
    cin >> max;
    cout << "O fator de carga e: " << (float)max / (float)tamVetor << endl;

    Hash alunoHash(max, tamVetor);

    do {
        cout << "Digite 0 para sair\n";
        cout << "Digite 1 para inserir um aluno\n";
        cout << "Digite 2 para remover um aluno\n";
        cout << "Digite 3 para buscar um aluno\n";
        cout << "Digite 4 para imprimir a tabela\n";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite a matricula do aluno: ";
            cin >> matricula;
            cout << "Digite o nome do aluno: ";
            cin >> nome;
            Aluno aluno(matricula, nome);
            alunoHash.inserir(aluno);
        } else if (opcao == 2) {
            cout << "Digite a matricula do aluno: ";
            cin >> matricula;
            Aluno aluno(matricula, " ");
            alunoHash.remover(aluno);
        } else if (opcao == 3) {
            cout << "Digite a matricula do aluno: ";
            cin >> matricula;
            Aluno aluno(matricula, " ");
            alunoHash.buscar(aluno, busca);
            if (busca) {
                cout << "Aluno encontrado!\n";
                aluno.imprime();
            } else {
                cout << "Aluno nao encontrado!\n";
            }
        } else if (opcao == 4) {
            alunoHash.imprimir();
        }

        cout << "osh" << endl;
    } while (opcao != 0);

    return 0;
}