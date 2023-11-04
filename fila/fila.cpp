#include <iostream>
#include "fila.h"

using namespace std;

    fila::fila()
    {
        primeiro = 0;
        ultimo = 0;
        estrutura = new TipoItem[MAX_ITENS];
    }

    fila::~fila()
    {
        delete [] estrutura;
    }

    bool fila::estaVazia()
    {
        return (primeiro == ultimo);
    }

    bool fila::estaCheia()
    {
        return (ultimo - primeiro == MAX_ITENS);
    }

    void fila::inserir(TipoItem item)
    {
        if (estaCheia()) {
            cout << "A fila está cheia!\n";
            cout << "Não é possível inserir este elemento!\n";
        } else {
            estrutura[ultimo % MAX_ITENS] = item;
            ultimo++;
        }
    }

    TipoItem fila::remover()
    {
        if (estaVazia()) {
            cout << "A fila está vazia!\n";
            cout << "Não é possível remover um elemento!\n";
            return 0;
        } else {
            primeiro++;
            return estrutura[(primeiro - 1) % MAX_ITENS];
        }
    }

    void fila::imprimir()
    {
        cout << "Fila: [ ";
        for (int i = primeiro; i < ultimo; i++) {
            cout << estrutura[i % MAX_ITENS] << " ";
        }
        cout << "]\n";
    }

    int fila::getPrimeiro()
    {
        return primeiro;    
    }

    int fila::getUltimo()
    {
        return ultimo;
    }
    
    TipoItem fila::getEstrutura()
    {
        return *estrutura;
    }