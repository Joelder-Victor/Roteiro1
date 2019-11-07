#include <iostream>
#include <stdlib.h>


using namespace std;

int main(void){
	int lances,j=0,i;
	srand(time(NULL));
	while(1)
	{
		//cout<<"Digite o numero de lances:"<<endl;
		cin>>lances;
		if(lances==0)
			break;
		int valor[lances];
		int count[lances]={0};
		for( i = 0;i < lances; i++)
		{
			valor[i]=(1+rand()%6);
		}
		for( i = 1; i <= 6;i++)
		{
			for(j=0;j <lances;j++){
				if(valor[j]==i)
					count[i-1]++;
			}
		}
		for(i = 0; i <= 5;i++)
		{
			cout<<"A porcetentagem do numero "<<i+1<<" foi "<<(count[i]/(float)lances)*100<<"%"<<endl;
		}
	}
	return 0;
}

