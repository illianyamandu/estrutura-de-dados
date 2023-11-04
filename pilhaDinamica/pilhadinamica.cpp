#include <iostream>
#include "pilhadinamica.h"
#include <cstddef>

using namespace std;

    PilhaDinamica::PilhaDinamica () {
        noTopo = NULL;
    }   
    
    PilhaDinamica::~PilhaDinamica () {
        No* noAux;
        while (noTopo != NULL) {
            noAux = noTopo;
            noTopo = noTopo->proximo;
            delete noAux;
        }
    }
    
    bool PilhaDinamica::estaVazia () {
        return (noTopo == NULL);
    }
    
    bool PilhaDinamica::estaCheia () {
        No* noNovo;
        try {
            noNovo = new No;
            delete noNovo;
            return false;
        } catch (bad_alloc exception) {
            return true;
        }
    }
    
    void PilhaDinamica::inserir(TipoItem item) {
        if (estaCheia()) {
            cout << "A pilha está cheia!\n";
            cout << "Nao e possivel inserir este elemento!\n";
        } else {
            No* noNovo = new No;
            noNovo->valor = item;
            noNovo->proximo = noTopo;
            noTopo = noNovo;
        }
    }
    
    TipoItem PilhaDinamica::remover () {
        if (estaVazia()) {
            cout << "A pilha esta vazia!\n";
            cout << "Nao e possivel remover elemento!\n";
            return 0;
        } else {
            No* noAux = noTopo;
            TipoItem item = noTopo->valor;
            noTopo = noTopo->proximo;
            delete noAux;
            return item;
        }
    }
    
    void PilhaDinamica::imprimir () {
        No* noAux = noTopo;
        cout << "Pilha: [ ";
        while (noAux != NULL) {
            cout << noAux->valor << " ";
            noAux = noAux->proximo;
        }
        cout << "]\n";
    }
    