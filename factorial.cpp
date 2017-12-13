#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	int numero,factorial =1;
	cout<<"digita un numero:"; cin>>numero;
	for(int i=1;i<=numero;i++){
		factorial *= i;
	}
	cout<<"\n el factorial del numero es :"<<factorial<<endl;
	system("pause");
	return 0;
	}
