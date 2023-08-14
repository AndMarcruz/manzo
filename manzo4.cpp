//CO2EX05

#include <iostream>
using namespace std;

int main(void)
{
    char nome[50], sobrenome[20];

    cout << "Informe seu nome ....: ";
    cin.getline(nome, sizeof(nome) );

    cout << " Informe sobrenome ....: ";
    cin >> sobrenome;
    cin.ignore(80, '\n');

    cout << "Ola, \n" << nome << " " << sobrenome;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;


}
