#include <iostream>
#include "pilha.h"

using namespace std;

    pilha::pilha()
    {
        tamanho = 0;
        estrutura = new TipoItem[MAX_ITENS];
    }

    pilha::~pilha()
    {
        delete [] estrutura;
    }

    bool pilha::estaCheia()
    {
        return (tamanho == MAX_ITENS);
    }

    bool pilha::estaVazia()
    {
        return (tamanho == 0);
    }

    void pilha::push(TipoItem item)
    {
        if (estaCheia()) {
            cout << "A pilha esta cheia!\n";
            cout << "Nao e possivel inserir este elemento.\n";
        } else {
            estrutura[tamanho] = item;
            tamanho++;
        }
    }

    TipoItem pilha::pop()
    {
        if (estaVazia()) {
            cout << "A pilha esta vazia!\n";
            cout << "Nao e possivel remover elemento.\n";
            return 0;
        } else {
            tamanho--;
            return estrutura[tamanho];
        }
    }

    void pilha::print()
    {
        cout << "Pilha: [ ";
        for (int i=0; i < tamanho; i++) {
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    int pilha::tamanhoPilha()
    {
        return tamanho;
    }