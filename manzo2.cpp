// CO2EX04.CPP
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    char NOMR[40];

    cout << "Informe sseu nome";
    cin >> NOME;
    cin.ignore(80, '\n');

    cout << "Ola, " << endl;
    cout << NOME; endl;

    cout<< endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
