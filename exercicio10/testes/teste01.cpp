#include <iostream>
#include <string>

using namespace std;

class Pessoa{

    int idade;
    string nome;

    public:

    string getNome(){
        return nome;
    }

    void setNome(string _nome){
        nome = _nome;
    }

    int getIdade(){
        return idade;
    }

    void setIdade(int _idade){
        idade = _idade;
    }

};



int main(){

    Pessoa pessoa;

    pessoa.setNome("Marcos");
    pessoa.setIdade(20);

    cout << pessoa.getNome() << endl;
    cout << pessoa.getIdade() << endl;

    return 0;
}