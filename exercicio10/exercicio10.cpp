#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> nome;
    vector<float> notas;
    vector<float> media;
    vector<vector<float>> ColecaoNota;
    string nomeAluno, aux;
    float notaAluno;
    int tam, tam1 , i, n, j;
    int op = 1;
    bool trocou;
    float excluirAluno;

    cout << "Insira a quantidade de estudantes " << endl;
    cin >> tam;

    do {
        cout << "Insira o nome do aluno" << endl;
        getline(cin >> ws, nomeAluno);
        nome.push_back(nomeAluno);

        n = nome.size() - 1;
        do {
            trocou = false;
            for (int j = 0; j < n; j++) {
                if (nome[j] > nome[j + 1]) {
                    aux = nome[j];
                    nome[j] = nome[j + 1];
                    nome[j + 1] = aux;
                    trocou = true;
                }
            }
            n--;
        } while (trocou);

        vector<float> notasTemp;
        float somaNotas=0;

        for(i=1; i <= 2;i++){

            cout << "informe a nota: " << i << " ";
            cin >> notaAluno;
            notasTemp.push_back(notaAluno);
            somaNotas += notaAluno;
        }

        ColecaoNota.push_back(notasTemp);
        media.push_back(somaNotas / 2);

        if (nome.size() < tam) {
            cout << "Deseja inserir um novo aluno '1' ou '0' para sair, digite '2' para excluir um aluno " << endl;
            cin >> op;

            switch (op) {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    cout << "Digite o número do aluno que deseja excluir.";
                    cin >> excluirAluno;

                    for (i = 0; i < tam; i++) {
                        if (excluirAluno == i) {
                            nome.erase(nome.begin() + excluirAluno);
                            ColecaoNota.erase(ColecaoNota.begin() + excluirAluno);
                        }
                    }
                    break;
            }
        } else {
            cout << "Tamanho máximo alcançado";
            op = 0;
        }

        tam1 ++;
    } while (op != 0);

    cout << "Lista de alunos:" << endl;
   
     for(int contAlunos=0; contAlunos<tam ; contAlunos++){
            cout << "Notas do Aluno " << nome.at(contAlunos) << endl;
            for(i=0;i<2;i++){
            cout << ColecaoNota.at(contAlunos).at(i) << " , " << endl;
            }
            cout << endl;
            cout << "Media do aluno: " << media.at(contAlunos) << endl;
           
            if(media.at(contAlunos) >= 7){
                cout << "Aluno Aprovado" << endl;
            }else{
                cout << "Aluno Reprovado" << endl;
            }
                }

    return 0;
}