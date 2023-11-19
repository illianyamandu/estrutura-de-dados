#include <iostream>
#include "hash.h"

using namespace std;

int Hash::FuncaoHash (Aluno aluno) {
    return (aluno.getMatricula() % max_posicoes);
}

Hash::Hash (int qtd_max_itens, int qtd_max_posicoes) {
    max_itens = qtd_max_itens;
    max_posicoes = qtd_max_posicoes;
    qtd_itens = 0;
    estrutura = new Aluno[max_itens];
}

Hash::~Hash () {
    delete [] estrutura;
}

bool Hash::estaCheia () {
    return (qtd_itens == max_itens);
}

int Hash::obterTamanhoAtual () {
    return qtd_itens;
}

void Hash::inserir (Aluno aluno) {
    int local = FuncaoHash(aluno);

    cout << "Posicao: " << local << endl;

    estrutura[local] = aluno;
    qtd_itens++;
}

void Hash::remover (Aluno aluno) {
    int local = FuncaoHash(aluno);
    if (estrutura[local].getMatricula() != -1) {
        estrutura[local] = Aluno(-1, " ");
        qtd_itens--;
    } else {
        cout << "Elemento nao encontrado!" << endl;
    }
}

void Hash::buscar (Aluno& aluno, bool& busca) {
    int local = FuncaoHash(aluno);
    Aluno aux = estrutura[local];
    if (aluno.getMatricula() != aux.getMatricula()) {
        busca = false;
    } else {
        aluno = aux;
        busca = true;
    }
}

void Hash::imprimir () {
    cout << "Tabela Hash:\n";

    for (int i = 0; i < max_posicoes; i++) {
        if (estrutura[i].getMatricula() != -1) {
            cout << "Posicao " << i << ":" << estrutura[i].getMatricula();
            cout << estrutura[i].getNome() << endl;
        }
    }
}
