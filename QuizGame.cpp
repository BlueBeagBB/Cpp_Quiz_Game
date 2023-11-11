#include <iostream>
#include <list>
#include <string>
#include <windows.h>
using namespace std;

class Quiz{
	public: int p1,p2,p3;
	void Perg(){
		int resposta=3;
		cout<<"Pergunta 1: Qual o maior ser vivo da terra atualmente registrado"<<endl;
		cout<<"1 - Cavalo"<<endl;
		cout<<"2 - Rinoceronte"<<endl;
		cout<<"3 - Cogumelo"<<endl;
		cout<<"4 - Megalodon"<<endl;
		cin>>resposta;
		if(resposta==3){
			cout<<"Acertou!!! Próxima Pergunta!!"<<endl;
			p1=3;
			Perg2();
		} else{
			cout<<"Errou :/"<<endl<<endl;
			p1=0;
			Perg2();
		}
	}
	void Perg2(){
		int resposta=2;
		cout<<"Pergunta 2: Qual a cor do cavalo branco de Napoleão"<<endl;
		cout<<"1 - Cavalo"<<endl;
		cout<<"2 - Branco"<<endl;
		cout<<"3 - De"<<endl;
		cout<<"4 - Napoleão"<<endl;
		cin>>resposta;
		if(resposta==2){
			cout<<"Acertou!!! Próxima Pergunta!!"<<endl;
			p2=3;
			Perg3();
		} else{
			cout<<"Errou :/"<<endl<<endl;
			p2=0;
			Perg3();
		}
	}
	void Perg3(){
		int resposta=1;
		cout<<"Pergunta 3: Quem 'descobriu' o brasil"<<endl;
		cout<<"1 - Pedro"<<endl;
		cout<<"2 - Napoleão"<<endl;
		cout<<"3 - Cogumelo"<<endl;
		cout<<"4 - Professor Girafales"<<endl;
		cin>>resposta;
		if(resposta==1){
			cout<<"Respondeu tudo parabéns!!!"<<endl;
			p3=3;
		} else{
			cout<<"Errou :/"<<endl<<endl;
			p3=0;
		}
	}
	
	void regis(){
			string nome;
			string email;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------Registre um usuário novo!-----------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-------Nome:";cin>>nome;cout<<"----------------"<<endl;
			cout<<"-------Email:";cin>>email;cout<<"--------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			system("cls");
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"------------Usuário Registrado!----------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-------Nome:"<<nome<<"-------------------------"<<endl;
			cout<<"-------Email:"<<email<<"-----------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------     1 - Prosseguir   --------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			int pro;
			cin>>pro;
			if(pro==1){
				system("cls");
			}
		}
	void menu(){
		cout<<" ----------- QUIZ JOGO DE PERGUNTAS ----------------"<<endl;
		cout<<"-------------------          -----------------------"<<endl;
		cout<<"----------------Escolha uma opção!------------------"<<endl;
		cout<<" 1 - Começar        2 - Sair           3 - Créditos "<<endl;
		int opcao;
		cin>>opcao;
		if(opcao==1){
			Perg();
		} else if(opcao==2){
			HWND console = GetConsoleWindow();
	    	PostMessage(console, WM_CLOSE, 0, 0);
		} else if(opcao==3){
			cout<<"-------------- SCRIPT : BlUE -------------------"<<endl;
			cout<<"-----------     1 - Voltar        --------------"<<endl;
			cout<<"------------------------------------------------"<<endl;
			int vt;
			cin>>vt;
			if(vt==1){
				system("cls");
				menu();
			}
		}
		}
		void Resultado(){
				cout<<"Sua pontuação foi: "<<p1+p2+p3<<" pontos"<<endl;
		}
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Quiz A;
	A.regis();
	A.menu();
	
	A.Resultado();
	
	return 0;
}
