#include <iostream>
#include <stdlib.h>

#define MAIOR 100
using namespace std;

int main()
{
	
	int adivinhe,valor,aux;

	srand(time(NULL));
	adivinhe = (1+rand() % MAIOR);
	cout<<adivinhe<<endl;

	while(1){

		cin>>valor;
		if(valor==adivinhe){
			cout<<"Parabéns"<<endl;
			break;
		}

		if(valor>adivinhe)
			cout<<"Muito alto.Tente novamente"<<endl;
		if(valor<adivinhe)
			cout<<"Muito baixo. Tente novamente"<<endl;
	}

	return 0;

}