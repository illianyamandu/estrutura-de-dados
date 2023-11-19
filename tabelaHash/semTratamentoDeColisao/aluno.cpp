#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno () {
    matricula = -1;
    nome = " ";
}

Aluno::Aluno (int nmr_matricula, string nome_aluno) { 
    matricula = nmr_matricula;
    nome = nome_aluno;
}

Aluno::~Aluno () {
    delete this;
}

int Aluno::getMatricula () {
    return matricula;
}

string Aluno::getNome () {
    return nome;
}

void Aluno::setMatricula (int matricula) {
    matricula = matricula;
}

void Aluno::setNome (string nome) {
    nome = nome;
}

void Aluno::imprime () {
    cout << "Matricula: " << matricula << endl;
    cout << "Nome: " << nome << endl;   
}