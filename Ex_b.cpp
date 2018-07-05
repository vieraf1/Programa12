#include "iostream"
#include "math.h"
#include "string"
using namespace std;

float IMC, alt, peso;
char sexo;
string resposta;
int verd = 0;

int main()
{

setlocale (LC_ALL, "portuguese");

while (verd == 0)
{

system("cls");
cout << "Digite seu sexo(H/M): " << endl;
cin >> sexo;

if ((sexo == 'H') || (sexo == 'M')) {
	verd = 1;
}

else {
	cout << "Por favor, digite um sexo valido" << endl;
	system("pause");
}

cout << "\nDigite sua altura: " << endl;
cin >> alt;

cout << "\nDigite seu peso: " << endl;
cin >> peso;

IMC = peso / (alt*alt);

switch(sexo)
{
	case 'M':
		{
			if (IMC < 19.1) {
				resposta = "Abaixo do Peso";
			}
			
			else if (IMC < 25.8){
				    resposta = "Peso normal";
			     }
			     
			     else if (IMC < 27.3){
				          resposta = "Marginalmente acima do peso";
			     }
			          else if (IMC < 32.3) {
				              resposta = "Acima do peso ideal";
			               }
			               else {
				                resposta = "Obeso";
			               }
			break;
		}
    case 'H':
    	{
    		if (IMC < 20.7) {
				resposta = "Abaixo do Peso";
			}
			
			else if (IMC < 26.4){
				    resposta = "Peso normal";
			     }
			     
			     else if (IMC < 27.8){
				          resposta = "Marginalmente acima do peso";
			     }
			          else if (IMC < 31.1) {
				              resposta = "Acima do peso ideal";
			               }
			               else {
				                resposta = "Obeso";
			               }
    		break;
		}
}

cout << "IMC: " << IMC << " - " << resposta;
}
return 0;
}
