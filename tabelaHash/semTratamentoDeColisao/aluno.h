#include <iostream>

using namespace std;

class Aluno {
    private:
        int matricula;
        string nome;

    public:
        Aluno();
        Aluno(int matricula, string nome);
        ~Aluno();

        int getMatricula();
        string getNome();

        void setMatricula(int matricula);
        void setNome(string nome);

        void imprime();
};  