#include <iostream>
#include <tchar.h>

using namespace std;

class Veiculo
{
    private:
        const char* nome;
        const char* cor;
    public:
        int velMax;
        int rodas;
        void setNome(const char* no)
        {
            this->nome = no;
        }
        const char* getNome()
        {
            return this->nome;
        }
        void setCor(const char* co)
        {
            this->cor = co;
        }
        const char* getCor()
        {
            return this->cor;
        }
        virtual void imp()  // Significa que quando se colcoa virtual esse metodo ira ser sobrescrito mais para frente no programa
        {
            cout << "Nome......: " << nome << endl;
            cout << "Cor.......: " << cor << endl;
            cout << "Rodas.....: " << rodas << endl;
            cout << "Vel.Max...: " << velMax << endl << endl;
        }
};

class Carro:public Veiculo
{
    public:
        Carro()   // Construtor da classe Carro
        {
            velMax = 160;
            rodas = 4;
            setNome("Carro");
            setCor("Branco");
        }
};

class Moto:public Veiculo
{
    public:
        Moto()
        {
            velMax = 200;
            rodas = 2;
            setNome("Moto");
            setCor("Preto");
        }
};

class Militar:public Veiculo
{
    public:
        int municao;
        bool armamento;
        Militar(bool arma,int mo):municao(mo),armamento(arma)  // Lista de Inicialização
        {
            velMax = 150;
            rodas = 6;
            setNome("Tanque");
            setCor("Verde");
            if(arma)
            {
                municao = mo;
            }else
            {
                municao = 0;
            }
        }
        void imp() override   // Significa que esse metodo esta sendo sobrescrito virtualmente para se adequar a classe Militar
        {
            cout << "Nome......: " << getNome() << endl;
            cout << "Cor.......: " << getCor() << endl;
            cout << "Rodas.....: " << rodas << endl;
            cout << "Vel.Max...: " << velMax << endl;
            cout << "Armamento.: " << armamento << endl;
            cout << "Municao...: " << municao << endl << endl;
        }

};

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    Carro v1;
    v1.imp();

    Moto v2;
    v2.imp();

    Militar v3{false,200};   // Foi necessário a inicialçização uniforme por que meu construtor Militar tinha dois parametros passados para ele
    v3.imp();

    Militar v4{true,100};
    v4.imp();


	return 0;
}
