#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int pencarian (char st[], char m)
{
	int i, posisi,panjang;
	i=0;
	posisi=-1;
	panjang=strlen(st);
	while ((i<panjang-1)&&posisi==-1)
	{
		if (st[i]==m)
		posisi=i;
		i++;
	}
	return posisi;
}

int main()
{
	printf("\t Pencarian dengan binary serach\n\n");
	
	char kalimat[]="Muhammad Aziiz Pranaja";
	char dicari = 'j';
	printf("\n Posisi %c dalam string %s berada pada indeks ke - [%d]\n",dicari,kalimat,pencarian(kalimat,dicari));
	system("PAUSE");
	return 0;
}

