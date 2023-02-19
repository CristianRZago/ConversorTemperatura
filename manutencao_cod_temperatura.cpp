/*
4. Escreva as seguintes fun��es:
    a. CparaF � faz a convers�o de uma temperatura em graus C para graus F.
    b. CparaK � faz a convers�o de uma temperatura em C para Kelvin (C=K-273)
    c. KparaC � faz a convers�o de K para C.
    d. KparaF � faz a convers�o de K para F (dica: utilize as fun��es anteriores)
    e. FparaK � faz a convers�o de F para K.

A seguir, fa�a um programa que apresente continuamente um menu na tela com
todas as op��es de convers�o que voc� implementou. Uma vez feita a op��o, o
programa l� do teclado o valor a ser convertido e imprime o resultado.
-----------------------------

MANUTEN��O

objetivo: atualizar fun��es e reduzir linhas de c�digo


Registre quanto tempo voc� demorou para entender o programa
- alguns minutos para relembrar quais os objetivos iniciais do programa

Escolha uma altera��o a ser feita e registre quanto tempo voc� demorou para planejar como ela ser� feita
- substituir if por switch, diminuir o n�mero de linhas das fun��es

Registre quanto tempo voc� demorou para efetuar a altera��o
- 5 minutos para substitui��o do IF por switch e para remover alguams vari�veis das fun��es e manter somente o return

Registre quanto tempo voc� demorou para verificar se a altera��o foi feita corretamente
- Os teste foram feitos inserindo um valor e verificando se eles eram compat�veis com valores reais.

*/


#include <iostream>
#include <iomanip>
using namespace std;

float fparac(float Fc){
    return (Fc-32) * 9/5;
}

float fparak(float Fk){
    return (Fk-32) * 9/5 + 273.15;
}

float cparaf(float Cf){	
	return 32 + (Cf * 9/5);
}

float cparak(float Ck){
	return (Ck + 273.15);
}
	
float kparac(float Kc){
	return (Kc - 273.15);
}

float kparaf(float Kf){
    return (Kf - 273.15) * 9/5 + 32;
}

int main()
{
	int comando;
	
	float Fc, Fk, Cf, Ck, Kc, Kf, temperatura;
	
	while(comando != 7)	{	
        cout << "\n * 1 - F --> C";
        cout << "\n * 2 - F --> K";
        cout << "\n * 3 - C --> F";
        cout << "\n * 4 - C --> K";
        cout << "\n * 5 - K --> C";
        cout << "\n * 6 - K --> F";
        cout << "\n * 7 - SAIR" << endl;
        
        cout << "\n - SELECIONE UMA COMANDO - \n\n"<< endl;
        cin >> comando;	

        cout << "\nTEMPERATURA: "<< endl;
        
        cout << setprecision(2) << fixed;
        
        switch(comando){
            case 1:
                cin >> Fc;
                cout << "\n\nTEMPERATURA EM CELSIUS: C" << fparac(Fc) << endl;
            break;

            case 2:
                cin >> Fk;
                cout << "\n\nTEMPERATURA EM KELVIN: K" << fparak(Fk) << endl;
            break;

            case 3:
                cin >> Cf;
                cout << "\n\nTEMPERATURA EM FAHRENHEIT: F" << cparaf(Cf) << endl;
            break;

            case 4:
				cin >> Ck;
                cout << "\n\nTEMPERATURA EM KELVIN: K" << cparak(Ck) << endl;
            break;

            case 5:
                cin >> Kc;
                cout << "\n\nTEMPERATURA EM CELSIUS: C" << kparac(Kc) << endl;
            break;

            case 6:
                cin >> Kf;
                cout << "\n\nTEMPERATURA EM FAHRENHEIT: F" << kparaf(Kf) << endl;
            break;

            default:
                cout << "\n\nSaindo...";
        }
	}
}