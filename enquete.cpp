#include <iostream>
#include <iomanip>
#include <cstdio>


using namespace std;
int totalDeVotos(int votos[])
{
	int total;
	for(int i=0; i<23;i++)
		total+=votos[i];

	return total;
}
float percentual(int votos, int total)
{
	return (votos/(float)total)*100;
}
void exibe(int i,int votos, float percentual)
{
    cout.precision(4);
    cout<<i<<"\t"<<votos<<"\t"<<percentual<<"%"<<endl;
}
int main(void){
	int numero,i,votosValidos,melhor,Njogador;
	int jogador[23]={0};
	float percentualDeVotos[23]={0};
	float melhorPercentual;
	srand(time(NULL));
	while(1)
	{
		cout<<"Quem foi melhor jogador:";
		cin>>numero;
		if(numero < 0 || numero > 23)
			cout<<"Informe um valor entre 1 e 23 ou 0 para sair"<<endl;
		else{
			if (numero==0){
				votosValidos=totalDeVotos(jogador);

				for(i = 0;i < 23;i++)
				{
					if(jogador[i]!=0){
						percentualDeVotos[i]=percentual(jogador[i],votosValidos);
						if(i==0)
							melhorPercentual = percentualDeVotos[0];
						if(percentualDeVotos[i] > melhorPercentual)
							melhorPercentual = percentualDeVotos[i];
					}
				}

				cout<<"Foram computados "<<votosValidos<<" votos."<<endl;
				cout<<"Jogador\tVotos\t%"<<endl;
				melhor=jogador[0];
				for(i = 0; i < 23; i++)
				{	
					if(jogador[i]>melhor){
						melhor=jogador[i];
						Njogador=i;
					}
					if(jogador[i]!=0)
						exibe(i,jogador[i],percentualDeVotos[i]);
				}
				cout<<"O melhor jogador foi o número "<<melhor<<",";
				cout<<"com "<<" votos,"<<" correspondendo a ";
				cout<<melhorPercentual<<"%"<<" do total de votos"<<endl;
				break;  		
			}
			i=numero;
			jogador[i]++;
		}	
		
	}
	return 0;
}

