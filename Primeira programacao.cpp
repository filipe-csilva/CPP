#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

int main(){
	
	int v_command;
	string v_cadnome;
	
	//exemplo                                                                                                                                                f         66666666666666666666
	v_command = 0;
	v_cadnome = "teste";
	
	cout << "Bem-Vindo!" << endl << "Digite o codigo abaixo:";
	
	inicio:
	
	cout << endl << endl << "1 - Cadastrar" << endl << "2 - Editar Cadastro" << endl << "3 - Consultar Cadastro" << endl << "4 - Financeiro" << endl << "5 - Contabil" << endl << "6 - Relatorios" << endl << "7 - Ajuda!" << endl << "8 - Infor" << endl << "9 - Sair" << endl << endl << "Digite o codigo: ";
	
	cin >> v_command;
	
	if(v_command != 0){
		if(v_command==1){
			system("clear||cls");
			cout << "Digite o codigo referente ao que deseja cadastrar" << endl << endl << "1 - Cliente" << endl << "2 - Fonecedor" << endl << "3 - Funcionario" << endl << "Digite o codigo: ";
			cin >> v_command;
			if(v_command == 1){
				system("clear||cls");
				cout << "Cadastro de cliente" << endl << endl << "Digite o nome completo:"; cin >> v_cadnome;
				system("clear||cls");
				cout << v_cadnome;
			}
		}
		else if(v_command==2){
			system("clear||cls");
			cout << "Digite o codigo referente ao que deseja editar o cadastro" << endl << endl << "1 - Cliente" << endl << "2 - Fonecedor";
			cin >> v_command;
		}
		else if(v_command==3){
			system("clear||cls");
			cout << "Digite o codigo referente ao que deseja consultar";
			cin >> v_command;
		}
		else if(v_command==4){
			system("clear||cls");
			cout << "Gerenciamento Financeiro";
			cin >> v_command;
		}
		else if(v_command==5){
			system("clear||cls");
			cout << "Gerenciamento Contabil";
			cin >> v_command;
		}
		else if(v_command==6){
			system("clear||cls");
			cout << "Relatorios";
			cin >> v_command;
		}
		else if(v_command==7){
			system("clear||cls");
			cout << "Eu que posso lhe ajudar?";
			cin >> v_command;
		}
		else if(v_command==8){
			system("clear||cls");
			cout << "Informacoes";
			cin >> v_command;
		}
		else if(v_command==9){
			system("exit");
		}
	} 
	else
	{
		system("clear||cls");
		cout << "Digite um dos comandos abaixo!" << endl;
		goto inicio;
	}
	
	return 0;
	
}
