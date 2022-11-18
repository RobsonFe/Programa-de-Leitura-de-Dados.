#include <bits/stdc++.h>

// Programa de Entrada e Saida de Dados em C++

//Aluno: Robson Ferreira da Silva
//Curso: Analise e Desenvolvimento de Sistemas
//1º Periodo

using namespace std;

int main ()

{

    double salario1, salario2;
    string nome1, nome2;
    int idade1, idade2;
    char sexo1, sexo2;

    cout << "Digite o nome da primeira pessoa ";
    getline(cin, nome1);
    cout << "Digite a idade da primeira pessoa ";
    cin >> idade1;
    cout << "Digite um sexo da primeira pessoa (F/M) ";
    cin >> sexo1;
    cout << "Salario da primeira pessoa ";
    cin >> salario1;

    cout << endl;

    cout << "Digite o nome da segunda pessoa ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa ";
    cin >> idade2;
    cout << "Digite o sexo da segunda pessoa (F/M) ";
    cin >> sexo2;
    cout << "Salario da segunda pessoa ";
    cin >> salario2;

    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Nome da Primeira Pessoa " << nome1 << endl;
    cout << "Salario da Primeira Pessoa " << salario1 << endl;
    cout << "Idade da primeira pessoa " << idade1 << endl;
    cout << "Sexo da primeira pessoa " << sexo1 << endl;

    cout << endl;

    cout << "Nome da Segunda Pessoa " << nome2 << endl;
    cout << "Salario da Segunda Pessoa " << salario2 << endl;
    cout << "idade da segunda pessoa " << idade2 << endl;
    cout << "sexo da segunda pessoa " << sexo2 << endl;


    return 0;

}
