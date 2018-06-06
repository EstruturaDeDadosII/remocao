#include "genBST.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int escolha, aux;

BST <int> arv;

void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int escolha;
    cout << "0. SAIR" << endl;
    cout << "1. Inserir elemento" << endl;
    cout << "2. Remover elemento" << endl;
    cout << "3. Imprimir arvore" << endl;
    cout << "Escolha uma opcao valida: ";
    cin >> escolha;

    switch (escolha) {

        case 0:
            cout << "Finalizando programa" << endl;
            return;

        case 1:
            cout<<"Digite o numero para inserir: ";
            cin>>aux;
            arv.insert(aux);
            break;

        case 2:
            cout<<"Qual numero deseja remover: ";
            cin>>aux;
            arv.findAndDeleteByMerging(aux);

            cout << "Resultado apos a remocao:" << endl;
            arv.displayTree();
            break;

        case 3:
            arv.displayTree();
            cout << endl << endl;
            break;

    }

    menu();
}