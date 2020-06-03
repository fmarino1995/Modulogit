#include <iostream>
#include <tchar.h>
#include <stdlib.h>

using namespace std;

struct Pessoa
{
    string nome;
    int idade;
    int peso;
    double altura;

    void insere(string stnome, int stidade, int stpeso, double staltura)
    {
        nome = stnome;
        idade = stidade;
        peso = stpeso;
        altura = staltura;
    }

    void mostra()
    {
        cout << "--------------------------------------" << endl;
        cout << "Nome : " << nome << endl;
        cout << "Idade : " << idade << "anos" << endl;
        cout << "Peso : " << peso << "Kg" << endl;
        cout << "Altura : " << altura << endl;
        cout << "--------------------------------------" << endl;
        cout << "\n\n";
    }

};

int main()
{
    inicio:
    system("cls");
    _tsetlocale(LC_ALL,_T("portuguese"));

    Pessoa p1,p2,p3;

    string nome1,nome2,nome3;

    char opc;

    p1.insere("Frederico", 25, 90, 1.75);
    p2.insere("Thais", 26, 56, 1.63);
    p3.insere("Sandro", 48, 70, 1.74);

    cout << "Programa do Exercicico " << endl;
    cout << "Digite 3 nomes : " << endl;
    cin >> nome1;
    cin >> nome2;
    cin >> nome3;

    cout << "Processando dados ....." << endl;
    system("pause");
    system("cls");

    p1.mostra();
    p2.mostra();
    p3.mostra();

    cout << "Obrigado por utilizar meu programa !! " << endl;
    cout << "Deseja utilizar novamente?  [s/n] : " << endl;
    cin >> opc;
    if(opc == 's' || opc == 'S')
    {
        goto inicio;
    }



	return 0;
}
