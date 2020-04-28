#include <iostream>
#include <string.h>

using namespace std;

char kalimat[1000];



void hapusDanReset();

void tampilData()

{

	cout << kalimat;

	hapusDanReset();

}





void searchData(char cari, char timpa)

{

	for (int x = 0; x < strlen(kalimat); x++)

	{

		if (kalimat[x] == cari)

		{

			kalimat[x] = timpa;

		}

	}

	cout << "Hasil Replace Sebagai Berikut: " << kalimat;

	hapusDanReset();

}



void keluarProgram()

{

	system("cls");

	cout << "Anda Keluar Program\n\n";

	system("pause");

}



void salahMemasukkan()

{

	system("cls");

	cout << "Anda Salah Memasukkan\n\n";

	system("pause");

}



void hapusDanReset()

{

	cout << "\n\n";

	system("pause");

	system("cls");

}



int main()

{

	do

	{

		int pilihan;
		char cari, timpa;

	

				do

				{

					cout <<"Pengoperasian Replace "<<endl;
					cout <<"1. Masukkan Kalimat"<<endl;
					cout <<"2. Tampil Kalimat"<<endl;
					cout <<"3. Ganti Kalimat"<<endl;
					cout <<"4. Keluar Program"<<endl;
					cout <<"Pilihan: ";

					cin >> pilihan;

					switch (pilihan)

					{
						case 1:
								system("cls");

				cout << "Masukkan Kalimat: ";

				cin.ignore();

				cin.getline(kalimat, 100000);

				system("cls");


						case 2:

							system("cls");
							tampilData();

							break;

						case 3:

							system("cls");

							cout << "Masukkan Huruf Yang Akan Dicari: ";

							cin >> cari;

							cout << "Masukkan Huruf Yang Akan Ditimpa: ";

							cin >> timpa;

							searchData(cari, timpa);

							break;

						case 4:

							keluarProgram();

							return 0;

							break;

						default:

							salahMemasukkan();

							return 0;

							break;

					}

				}

				while (true);

				break;


		}

	while (true);

	}

