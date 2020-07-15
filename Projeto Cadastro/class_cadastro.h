#ifndef CLASS_CADASTRO_H_INCLUDED
#define CLASS_CADASTRO_H_INCLUDED
#define _MAX_ 100
#include <cstdlib>

using namespace std;

class Cliente
{
    private:
        string nome;
        string endereco;
        int idade;
    public:
        int *cod;
        char tel[20];
        void gerarCodigo()
        {
            srand(time(NULL));
            cod = (int*)malloc(sizeof(int));
            for(int i=0;i<6;i++)
            {
                cod[i] = rand()%10;
                cout << cod[i];
            }
        }
        void cadastrar()
        {
            cout << "\nDigite seu nome: ";
            cin.ignore();
            getline(cin,nome);
            cout << "\nDigite sua idade: ";
            cin >> idade;
            cout << "\nDigite seu endereço: ";
            cin.ignore();
            getline(cin,endereco);
            cout << "\nDigite seu telefone: ";
            cin >> tel;
        }
        string getNome()
        {
            return nome;
        }
        string getEndereco()
        {
            return endereco;
        }
        int getIdade()
        {
            return idade;
        }
        int getCod()
        {
            return *cod;
        }
};

class Cadastro
{
    private:
        Cliente v[_MAX_];
        int qtd;
    public:
        void ler()
        {
            cout << "Informe o número de cadastros que serão feitos: ";
            cin >> qtd;
            for(int i=1;i<=qtd;i++)
            {
                cout << "\n\nCliente " << i << " de " << qtd << endl;
                v[i].cadastrar();
                cout << "\nGerando Código do Cliente .... " << endl;
                system("pause");
                cout << "\nCódigo: ";
                v[i].gerarCodigo();
            }
        }
        void listar()
        {

            cout << "-------------------------------------------------------------" << endl;
            for(int i=1;i<=qtd;i++)
            {
                cout << "Nome....: " << v[i].getNome() << endl;
                cout << "Idade...: " << v[i].getIdade() << endl;
                cout << "Endereço: " << v[i].getEndereco() << endl;
                cout << "Telefone: " << v[i].tel << endl;
                cout << "Código..: " << v[i].cod[0] << v[i].cod[1] << v[i].cod[2] << v[i].cod[3] << v[i].cod[4] << v[i].cod[5] << endl;
                cout << "-------------------------------------------------------------" << endl;
            }
        }
};


#endif // CLASS_CADASTRO_H_INCLUDED
