#include <iostream>

using namespace std;

int main(void)
{
	int valor,maiorValor,i=0;
	while(1)
	{
		cin>>valor;
		if(valor==0)
			break;
		if(i==0)
			maiorValor=valor;
		if(valor>maiorValor)
			maiorValor=valor;
		i++;
	}
	cout<<"O maior Valor:"<<maiorValor<<endl;

	return 0;
}
