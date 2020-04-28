#include <iostream>

using namespace std;

int main()
{
	int n, bil_cari,Data[10];
	int i, ketemu;
	
	cout<<"Masukkan Banyak Angka : ";
	cin>>n;
	cout<<endl;
	for (int c=0;c<n;c++)
	{
		cout<<"Masukkan angka ke - "<<c+1<<" : ";
		cin>>Data[c];
	}
	i=0;
	cout<<"Data yang ingin dicari : ";
	cin>>bil_cari;
	ketemu = 0;
	while ((i<10)&&(ketemu==0))
	{
	if(Data[i]==bil_cari)
	{
		ketemu=1;
		cout<<"\n Angka "<<bil_cari<<" ditemukan pada posisi ke -"<<i+1;
	}
	else
	i=i+1;
	}
	if(ketemu==1)
		cout<<"\n Data ada dan tersedia!"<<endl;
	else 
		cout<<"\n Maaf data yang dicari tidak ada"<<endl;
}
