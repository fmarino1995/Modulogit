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
        cout << "Opera��es disponiveis : [1] - Adi��o | [2] - Subtra��o | [3] - Multiplica��o | [4] - Divis�o " << endl;
        cout << "Selecione a opera��o digitada conforme o valor mostrado: ";
        cin >> valor;
        switch(valor)
        {
            case 1:
                cout << "Adi��o Selecionada" << endl;
                resultado = n1+n2;
                cout << "O resultado de " << n1 << " + " << n2 << " �: " << resultado << endl;
                break;
            case 2:
                cout << "Subtra��o Selecionada" << endl;
                resultado = n1-n2;
                cout << "O resultado de " << n1 << " - " << n2 << " �: " << resultado << endl;
                break;
            case 3:
                cout << "Multiplica��o Selecionada" << endl;
                resultado = n1*n2;
                cout << "O resultado de " << n1 << " * " << n2 << " �: " << resultado << endl;
                break;
            case 4:
                cout << "Divis�o Selecionada" << endl;
                resultado = n1/n2;
                cout << "O resultado de " << n1 << " / " << n2 << " �: " << resultado << endl;
                break;
            default:
                cout << "Valor digitado n�o correspondente !!  Reiniciando .... " << endl;
                system("pause");
                goto inicio;
        }

        cout << "\n\nDeseja utilizar a calculadora simples novamente ? s = sim,  n = n�o " << endl;
        cout << "Digite a op��o selecionada: ";
        cin >> opc;
        if(opc == 's' || opc == 'S')
        {
            goto inicio;
        }

	return 0;
}
