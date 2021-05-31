#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

/*
  Desenvolvedor: alle costa

*/

int main(){

    cout << "*** BEM VINDO A BASE DE DADOS (LIVROS) ***" << endl;

    int selecione;
    string removerLivro;
    int cont;
    string nomeLivro, autorLivro, livro;
    vector<string> livroarray;


    do {
        cout << " " << endl;
        cout << "********** MENU *********** " << endl;
        cout << " 1) Adicionar Livro " << endl;
        cout << " 2) Remover Livro " << endl;
        cout << " 3) Remover Base de Dados" << endl;
        cout << " 4) Visualizar números de Livros" << endl;
        cout << " 5) Visualizar o nome de Livros" << endl;
        cout << " 6) Sair" << endl;
        cin >> selecione;

        if(selecione == 6) {
            cout << "Programa encerrado!";
        } else {
            if(selecione == 1) {
                cout << "Digite o nome do livro: ";
                cin >> nomeLivro;

                cout << "Digite o nome do autor: ";
                cin >> autorLivro;

                livro = nomeLivro + " " + autorLivro;
                livroarray.push_back(livro);

                cout << " " << endl;
                cout << "Livro adicionado com sucesso ..." << endl;

            } else if(selecione == 2) {
                cout << "Insira o nome do livro a ser removido: ";
                cin >> removerLivro;

                for(int i = 0; i < livroarray.size(); i++) {
                    if(livroarray[i].find(removerLivro) != std::string::npos) {
                        livroarray.erase(livroarray.begin() + i);
                        break;
                    }
                }

                cout << " " << endl;
                cout << "Livro removido com sucesso ..." << endl;
                cout << " " << endl;

            } else if(selecione == 3) {
                livroarray.clear();
                cout << "Base de dados removida!" << endl;
                cout << " " << endl;

            } else if(selecione == 4) {
                cont = livroarray.size();
                cout << "Quantidade de livros na biblioteca : " << cont << endl;
                cout << " " << endl;

            } else if(selecione == 5) {
                cout << "Nome de livros na biblioteca : " << endl;

                for(int i = 0; i < livroarray.size(); i++) {
                    cout << i << " - "<< livroarray[i] << " " << endl;
                }

                cout << " " << endl;
            }
        }

    } while(selecione != 6);

    return 0;
}
