#include <iostream>
#include <cstdlib>
#include <locale>
#include "class_cadastro.h"
#define _MAX_ 100

void fim()
{
    cout << "\n\nObrigado por Utilizar o Cadastro de Clientes !!" << endl;
}

using namespace std;

int main()
{
    inicio:
        system("cls");
        system("color A");
        setlocale(LC_ALL,"portuguese");
        int opc;
        char opc1;
        string password;
        cout << "\t\t\t|----|Version 1.0 ---- POWERED BY Frederico Duarte |----| " << endl;
        cout << "\n\n\t\t\t\t\t|||||CADASTRO DE CLIENTES|||||" << endl << endl;
        cout << "Digite a senha: ";
        cin >> password;
        if(password == "codigo001")
        {
            cout << "\nBem vindo ao Cadastro !!  " << endl;
            Cadastro c;
            c.ler();
            cout << endl << endl;
            cout << "Cadastros Realizados com Sucesso!! " << endl;
            inicio2:
                cout << "Digite o número referente à opção abaixo: " << endl;
                cout << "[1] = Cadastrar novos Clientes | [2] = Consultar Cadastros já Existentes | [3] = Sair do Programa" << endl;
                cout << "Opção: ";
                cin >> opc;
                switch(opc)
                {
                    case 1:
                        system("cls");
                        c.ler();
                        cout << "\nCadastros Realizados com Sucesso!! " << endl;
                        goto inicio2;
                        break;
                    case 2:
                        system("cls");
                        c.listar();
                        cout << "\nCadastros Listados com Sucesso!! Digite s para sair ou v para voltar ao inicio: ";
                        cin >> opc1;
                        if(opc1 == 's' || opc1 == 'S')
                        {
                            atexit(fim);
                        }else
                        {
                            system("cls");
                            goto inicio2;
                        }
                        break;
                    case 3:
                        atexit(fim);
                        break;
                    default:
                        cout << "Opção digitada não válida !! Retornando ao inicio .... " << endl;
                        system("pause");
                        goto inicio2;
                }
        }else
        {
            cout << "Senha Inválida!! Voltando ao inicio ... " << endl;
            system("pause");
            goto inicio;
        }
    return 0;
}
