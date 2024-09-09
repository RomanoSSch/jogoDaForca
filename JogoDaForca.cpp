#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	inicio:
	
	char palavra[30], letra[1], secreta[30];
	int tam, chances, acertos, i;
	bool acerto;
	string opc;
	
	chances = 6;
	i = 0;
	tam = 0;
	acerto = false;
	acertos = 0;
		
	cout << "Digite a palavra secreta: "; cin >> palavra;
	system("cls");
	
	while (palavra[i] != '\0') {
		i++;
		tam++;
	}
	
	for (i = 0; i < 30; i++) {
		secreta[i] = '_';
	}	
	
	while (chances > 0 && acertos < tam) {
		cout << "Chances restantes: " << chances << endl << endl;
		cout << "Palavra secreta:";
		
		for (i = 0; i < tam; i++) {
			cout << " " << secreta[i];
		}
		cout << endl << "Digite uma letra: "; cin >> letra[0];
		for (i = 0; i < tam; i++) {
			if (palavra[i] == letra[0]) {
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		
		if (!acerto) {
			chances--;
		}
		acerto = false;
		system("cls");
		
	}
	
	if (acertos == tam) {
		cout << "Parabens, voce acertou a palavra!" << endl;
	} else {
		cout << "Que pena, voce nao acertou a palavra!" << endl;
	}
	
	cout << endl << "Deseja jogar novamente?"; cin >> opc;
	
	if (opc == "sim" or opc == "Sim") {
		system("cls");
		goto inicio;
	} else {
		cout << endl << "Obrigado por jogar, ate logo!" << endl;
	}
	
	return 0;
}
