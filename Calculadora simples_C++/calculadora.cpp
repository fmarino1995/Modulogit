#include <iostream>
#include <tchar.h>
#include <stdlib.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    inicio:
        system("cls");
        double n1,n2,resultado;
        int valor;
        char opc;
        cout << "\t\t\t\t\tFredProgrammer Creations\n\n\n";
        cout << "Bem vindo a minha calculadora simples !!\n\n";
        cout << "Digite os 2 valores: " << endl;
        cin >> n1 >> n2;
        cout << "Operações disponiveis : [1] - Adição | [2] - Subtração | [3] - Multiplicação | [4] - Divisão " << endl;
        cout << "Selecione a operação digitada conforme o valor mostrado: ";
        cin >> valor;
        switch(valor)
        {
            case 1:
                cout << "Adição Selecionada" << endl;
                resultado = n1+n2;
                cout << "O resultado de " << n1 << " + " << n2 << " é: " << resultado << endl;
                break;
            case 2:
                cout << "Subtração Selecionada" << endl;
                resultado = n1-n2;
                cout << "O resultado de " << n1 << " - " << n2 << " é: " << resultado << endl;
                break;
            case 3:
                cout << "Multiplicação Selecionada" << endl;
                resultado = n1*n2;
                cout << "O resultado de " << n1 << " * " << n2 << " é: " << resultado << endl;
                break;
            case 4:
                cout << "Divisão Selecionada" << endl;
                resultado = n1/n2;
                cout << "O resultado de " << n1 << " / " << n2 << " é: " << resultado << endl;
                break;
            default:
                cout << "Valor digitado não correspondente !!  Reiniciando .... " << endl;
                system("pause");
                goto inicio;
        }

        cout << "\n\nDeseja utilizar a calculadora simples novamente ? s = sim,  n = não " << endl;
        cout << "Digite a opção selecionada: ";
        cin >> opc;
        if(opc == 's' || opc == 'S')
        {
            goto inicio;
        }

	return 0;
}
