#include <iostream>
#include "filadinamica.h"
#include <cstddef>
#include <new>

using namespace std;

FilaDinamica::FilaDinamica () {
    primeiro = NULL;
    ultimo = NULL;
}

FilaDinamica::~FilaDinamica () {
    No* noAux;
    while (primeiro != NULL) {
        noAux = primeiro;
        primeiro = primeiro->proximo;
        delete noAux;
    }

    ultimo = NULL;
}

bool FilaDinamica::estaVazia () {
    return (primeiro == NULL);
}

bool FilaDinamica::estaCheia () {
    No* noNovo;
    try {
        noNovo = new No;
        delete noNovo;
        return false;
    } catch (bad_alloc exception) {
        return true;
    }
}

void FilaDinamica::inserir (TipoItem item) {
    if (estaCheia()) {
        cout << "A fila está cheia!\n";
        cout << "Não é possível inserir este elemento!\n";
    } else {
        No* noNovo = new No;
        noNovo->valor = item;
        noNovo->proximo = NULL;
        if (primeiro == NULL) {
            primeiro = noNovo;
        } else {
            ultimo->proximo = noNovo;
        }
        ultimo = noNovo;
    }
}

TipoItem FilaDinamica::remover () {
    if (estaVazia()) {
        cout << "A fila está vazia!\n";
        cout << "Não é possível remover elemento!\n";
        return 0;
    } else {
        No* noAux = primeiro;
        TipoItem item = primeiro->valor;
        primeiro = primeiro->proximo;
        if (primeiro == NULL) {
            ultimo = NULL;
        }
        delete noAux;
        return item;
    }
}

void FilaDinamica::imprimir () {
    No* noAux = primeiro;
    cout << "Fila: [ ";
    while (noAux != NULL) {
        cout << noAux->valor << " ";
        noAux = noAux->proximo;
    }
    cout << "]\n";
}