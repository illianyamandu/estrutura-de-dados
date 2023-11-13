#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno () {
    matricula = -1;
    nome = " ";
}

Aluno::Aluno (int matricula, string nome) { 
    this->matricula = matricula;
    this->nome = nome;
}

Aluno::~Aluno () {
    delete this;
}

int Aluno::getMatricula () {
    return this->matricula;
}

string Aluno::getNome () {
    return this->nome;
}

void Aluno::setMatricula (int matricula) {
    this->matricula = matricula;
}

void Aluno::setNome (string nome) {
    this->nome = nome;
}

void Aluno::imprime () {
    cout << "Matrícula: " << matricula << endl;
    cout << "Nome: " << nome << endl;   
}