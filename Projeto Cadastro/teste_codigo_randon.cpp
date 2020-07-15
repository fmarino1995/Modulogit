#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/*void gerarCodigo()
{
    int cod[6];
    srand(time(NULL));
    for(int i=0;i<6;i++)
    {
        cod[i] = rand() %10;
        cout << cod[i];
    }
    free(cod);
}  */

int main()
{
    srand (time(NULL));
    for(int i=0;i<6;i++)
    {
        cout << rand()%10;
    }

   /* int tam = 5;
    int codr[6],codv[6];
    int qtd;

    srand(time(NULL)); // Não deixa os numeros aleatorios se repetirem a cada verz que você executar o programa

    cout << "Digite o numero de vezes: ";
    cin >> qtd;
    for(int i=0;i<qtd;i++)
    {
        cout << "\n\nGerando Codigo do Cliente: " << endl;
        system("pause");
        gerarCodigo();
    }
        */
	return 0;
}
