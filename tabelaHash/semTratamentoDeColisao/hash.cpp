#include <iostream>
#include "hash.h"

using namespace std;

int Hash::FuncaoHash (Aluno aluno) {
    return (aluno.getMatricula() % max_posicoes);
}

Hash::Hash (int max_itens, int max_posicoes) {
    this->max_itens = max_itens;
    this->max_posicoes = max_posicoes;
    this->qtd_itens = 0;
    this->estrutura = new Aluno[max_itens];
}

Hash::~Hash () {
    delete [] estrutura;
}

bool Hash::estaCheia () {
    return (this->qtd_itens == this->max_itens);
}

int Hash::obterTamanhoAtual () {
    return this->qtd_itens;
}

void Hash::inserir (Aluno aluno) {
    int local = FuncaoHash(aluno);
    this->estrutura[local] = aluno;
    this->qtd_itens++;
}

void Hash::remover (Aluno aluno) {
    int local = FuncaoHash(aluno);
    if (this->estrutura[local].getMatricula() != -1) {
        this->estrutura[local] = Aluno(-1, " ");
        this->qtd_itens--;
    } else {
        cout << "Elemento não encontrado!" << endl;
    }
}

void Hash::buscar (Aluno& aluno, bool& busca) {
    int local = FuncaoHash(aluno);
    Aluno aux = this->estrutura[local];
    if (aluno.getMatricula() != aux.getMatricula()) {
        busca = false;
    } else {
        aluno = aux;
        busca = true;
    }
}

void Hash::imprimir () {
    cout << "Tabela Hash:\n";

    for (int i = 0; i < this->max_posicoes; i++) {
        if (this->estrutura[i].getMatricula() != -1) {
            cout << "Posição " << i << ":" << this->estrutura[i].getMatricula();
            cout << estrutura[i].getNome() << endl;
        }
    }
}
