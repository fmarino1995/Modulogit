#include <iostream>
#include <cstdlib>
#include <locale>
#include <iomanip>

using namespace std;

void fim()
{
    cout << "\nObrigado por utilizar a Calculado de Divis�o e Resto!!" << endl;
    system("pause");
}

int main()
{
    inicio:
        system("cls");
        system("color A");
        setlocale(LC_ALL,"");
        char opc;
        int num,den,i,quant;
        div_t resultado;
        cout << "\t\t\t\t----------Calculadora de divis�o e resto----------" << endl << endl;
        cout << "Quantos divis�es ser�o feitas? : ";
        cin >> quant; cout << endl;
        for(i=0;i<quant;i++)
        {
            cout << "Digite o numerador: ";
            cin >> num; cout << endl;
            cout << "Digite o denominador: ";
            cin >> den; cout << endl;
            resultado = div(num,den);
            cout << "------------------------------------------------------------------------" << endl;
            cout << fixed << setprecision(2);
            cout << "Resultado de " << num << " / " << den << " �: " << resultado.quot << endl;
            cout << "Resto da divis�o de " << num << " por " << den << " �: " << resultado.rem << endl;
            cout << "------------------------------------------------------------------------" << endl << endl;
        }
        cout << "Gostaria de utilizar a calculadora novamente? (s = sim | n = n�o): ";
        cin >> opc; cout << endl;
        if(opc == 's' || opc == 'S')
        {
            goto inicio;
        }else
        {
            atexit(fim);
        }
        return 0;
}
