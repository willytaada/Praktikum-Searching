#include <iostream>

using namespace std;

int data[1000];
int batas;



void hapusDanReset();

void tampilData()

{

	for (int x = 0; x < batas; x++)

	{

		cout << "Data Index Ke-" << x+1 << ": " << data[x] << "\n";

	}

	hapusDanReset();

}



void ascending()

{

	for (int x = 0; x < batas; x++)

	{

		for (int y = x + 1; y < batas; y++)

		{

			if (data[y] < data[x])

			{

				int simpan = data[x];

				data[x] = data[y];

				data[y] = simpan;

			}

		}

	}



}





void searchData(int cari)

{

	int tengah = batas / 2;

	int trigger = 0;

	while (tengah != batas)

	{

		if (cari >= data[tengah])

		{

			if (cari == data[tengah])

			{

				trigger = 1;

				break;

			}

			else

			{

				trigger = 0;

				tengah++;

			}



		}

		else if (cari <= data[tengah])

		{

			if (cari == data[tengah])

			{

				trigger = 1;

				break;

			}

			else

			{

				trigger = 0;

				tengah--;

			}



		}

	}



	if (trigger == 1)

	{

		cout << "Data Ditemukan Di Index Ke-" << tengah;

	}

	else if (trigger == 0)

	{

		cout << "Data Tidak Ditemukan";

	}

	hapusDanReset();

}



void keluarProgram()

{

	system("cls");

	cout << "Keluar Program\n\n";

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

		unsigned short int pilihan, cari;


		


				do

				{

					cout << "Pengoperasian Ascending"<<endl;
					cout << "1. input data dan urutkan"<<endl;
					cout << "2. Tampil Data"<<endl;
					cout << "3. Cari Data"<<endl;
					cout << "4. Keluar Program"<<endl;
					cout << "Masukkan Pilihan : ";
					cin >> pilihan;

					switch (pilihan)

					{
						case 1:
							system("cls");
							cout << "Masukkan Batas Data: ";
							cin >> batas;
							system("cls");
							for (int x = 0; x < batas; x++)
							{
								std::cout << "Masukkan Data Index Ke-" << x+1 << " : ";
								std::cin >> data[x];
							}
							system("cls");
							ascending();
						case 2:
							system("cls");
							tampilData();
							break;
						case 3:
							system("cls");
							cout << "Masukkan Data Yang Akan Dicari: ";
							cin >> cari;
							searchData(cari);
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

