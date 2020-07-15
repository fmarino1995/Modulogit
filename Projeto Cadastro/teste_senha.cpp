#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    inicio:
        system("cls");
        system("color A");
        setlocale(LC_ALL,"portuguese");
        string senha;
        cout << "Digite a senha: ";
        cin >> senha;

        if(senha == "empresa001")
        {
            cout << "\n\nBem vindo ao Cadastro de Clientes";
            char t[20];
            cin >> t;
            cout << t;
        }else
        {
            cout << "\nSenha Invalida!! Voltando ao inicio... " << endl;
            system("pause");
            goto inicio;
        }

	return 0;
}
