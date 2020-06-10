#include <iostream>
#include <tchar.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    float valor;
    float dolar;
    float res;
    char opc,opc2;
    inicio:
    system("cls");
    dolar = 4.97;
    cout << "\t\t\t\t\t|| Conversor Dolar - Real || \n";
    cout << "\t\t\t\t\t|| POWERED BY FREDBLENSON ||\n";
    cout << "------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\nValor do Dolar atualmente : R$4.97\n";
    cout << "O valor do dolar atualmente em reais esta correto ?   Digite s para sim e n para não : ";
    cin >> opc2;
    if(opc2=='n' || opc2 == 'N')
    {
        float newdolar;
       cout << "Sentimos muito!! Por favor digite o valor em reais correto do dolar atualmete : ";
       cin >>  newdolar;
       dolar = newdolar;
    }
    cout << "\nDigite o valor em dólares : ";
    cin >> valor;
    system("cls");
    cout << fixed << setprecision(2);
    res = valor*dolar;
    cout << "Resultado : " << res << "\n";
    cout << "------------------------------------------------------------------------------------------------------------------------\n";
    cout << "Gostaria de utilizar o programa novamente ?  [s/n] : ";
    cin >> opc;
    if(opc == 's' || opc == 'S')
    {
        goto inicio;
    }else
    {
        cout << "\nObrigado por utilizar meu programa !!" << endl;
    }


	return 0;
}
