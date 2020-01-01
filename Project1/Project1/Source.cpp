#include <iostream>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

int HammingDistance(string kelime, string okunan, int m, int n)
{
	int count = 0;

	if (kelime.length() == okunan.length())
	{
		for (int i = 0; i < kelime.length(); i++)
		{
			if (kelime[i] != okunan[i])
			{
				count += 1;
			}
		}

		if (count <= 2)
		{
			cout << "Bunu Mu Demek Istediniz?: " << okunan << endl;
			return -1;
		}	
	}
}

void DosyaYaz(string okunan)
{
	ofstream dosyaYaz("../../sonuc.txt", ios::app | ios::out);
	if (dosyaYaz.is_open())
	{
		dosyaYaz << okunan << endl;
	}
	dosyaYaz.close();
}

int BruteForce(string kelime, string okunan, int M, int N)
{
	int j, sayac = 0;
	for (int i = 0; i <= N - M; i++)
	{
		for (j = 0; j < M; j++)
			if (okunan[i + j] != kelime[j])
				break;

		if (j == M)
		{
			DosyaYaz(okunan);
			sayac++;
		}

	}
	return sayac;
}

void DosyaOkuIni()
{
	string okunan;
	string kelime;
	int a, b, sayac = 0;

	cout << "Aramak Istediginiz Kelimeyi Giriniz: ";
	cin >> kelime;

	ifstream dosyaOku("../../dosyalar/anayasa.ini", ios::in);

	clock_t start, end;
	start = clock();

	while (!dosyaOku.eof())
	{
		dosyaOku >> okunan;

		a = BruteForce(kelime, okunan, kelime.length(), okunan.length());
		if (a == 1)
			sayac = sayac + a;
	}
	dosyaOku.close();
	cout << endl << kelime << "\tKelimesinden " << sayac << " Adet Eslesme Vardir." << endl;

	if (sayac == 0)
	{
		ifstream dosyaOku("../../dosyalar/anayasa.ini", ios::in);
		string okunan;
		while (!dosyaOku.eof())
		{
			dosyaOku >> okunan;
			b = HammingDistance(kelime, okunan, kelime.length(), okunan.length());
			if (b == -1)
				break;
		}
	}

	end = clock();

	cout << "\nKelimenin Bulunma Zamani: " << (float)(end - start) / CLOCKS_PER_SEC << " s" << endl;

	dosyaOku.close();
}

void DosyaOkuTxt()
{
	string okunan;
	string kelime;
	int a, b, sayac = 0;

	cout << "Aramak Istediginiz Kelimeyi Giriniz: ";
	cin >> kelime;

	ifstream dosyaOku("../../dosyalar/anayasa.txt", ios::in);

	clock_t start, end;
	start = clock();

	while (!dosyaOku.eof())
	{
		dosyaOku >> okunan;

		a = BruteForce(kelime, okunan, kelime.length(), okunan.length());
		if (a == 1)
			sayac = sayac + a;
	}
	dosyaOku.close();
	cout << endl << kelime << "\tKelimesinden " << sayac << " Adet Eslesme Vardir." << endl;

	if (sayac == 0)
	{
		ifstream dosyaOku("../../dosyalar/anayasa.txt", ios::in);
		string okunan;
		while (!dosyaOku.eof())
		{
			dosyaOku >> okunan;
			b = HammingDistance(kelime, okunan, kelime.length(), okunan.length());	
			if (b == -1)
				break;
		}
	}

	end = clock();

	cout << "\nKelimenin Bulunma Zamani: " << (float)(end - start) / CLOCKS_PER_SEC << " s" << endl;

	dosyaOku.close();
}

void DosyaOkuXls()
{
	string okunan;
	string kelime;
	int a, b, sayac = 0;

	cout << "Aramak Istediginiz Kelimeyi Giriniz: ";
	cin >> kelime;

	ifstream dosyaOku("../../dosyalar/anayasa.xls", ios::in);

	clock_t start, end;
	start = clock();

	while (!dosyaOku.eof())
	{
		dosyaOku >> okunan;

		a = BruteForce(kelime, okunan, kelime.length(), okunan.length());
		if (a == 1)
			sayac = sayac + a;
	}
	dosyaOku.close();
	cout << endl << kelime << "\tKelimesinden " << sayac << " Adet Eslesme Vardir." << endl;

	if (sayac == 0)
	{
		ifstream dosyaOku("../../dosyalar/anayasa.xls", ios::in);
		string okunan;
		while (!dosyaOku.eof())
		{
			dosyaOku >> okunan;
			b = HammingDistance(kelime, okunan, kelime.length(), okunan.length());
			if (b == -1)
				break;
		}
	}

	end = clock();

	cout << "\nKelimenin Bulunma Zamani: " << (float)(end - start) / CLOCKS_PER_SEC << " s" << endl;

	dosyaOku.close();
}

void DosyaOkuHtml()
{
	string okunan;
	string kelime;
	int a, b, sayac = 0;

	cout << "Aramak Istediginiz Kelimeyi Giriniz: ";
	cin >> kelime;

	ifstream dosyaOku("../../dosyalar/anayasa.html", ios::in);

	clock_t start, end;
	start = clock();

	while (!dosyaOku.eof())
	{
		dosyaOku >> okunan;

		a = BruteForce(kelime, okunan, kelime.length(), okunan.length());
		if (a == 1)
			sayac = sayac + a;
	}
	dosyaOku.close();
	cout << endl << kelime << "\tKelimesinden " << sayac << " Adet Eslesme Vardir." << endl;

	if (sayac == 0)
	{
		ifstream dosyaOku("../../dosyalar/anayasa.html", ios::in);
		string okunan;
		while (!dosyaOku.eof())
		{
			dosyaOku >> okunan;
			b = HammingDistance(kelime, okunan, kelime.length(), okunan.length());
			if (b == -1)
				break;
		}
	}

	end = clock();

	cout << "\nKelimenin Bulunma Zamani: " << (float)(end - start) / CLOCKS_PER_SEC << " s" << endl;

	dosyaOku.close();
}

void AranilanKelimeler()
{
	ifstream dosyaOku;
	dosyaOku.open("../../sonuc.txt", ios::in);
	string okunan;
	cout << "\nAranilan Kelimeler" << endl;
	if (dosyaOku.is_open())
	{
		while (!dosyaOku.eof())
		{
			getline(dosyaOku, okunan);
		}
	}
	cout << okunan << endl;
	dosyaOku.close();
}

int main()
{
	srand(time(NULL));
	int secim;
	char sec;
	cout << "1- .ini" << endl;
	cout << "2- .txt" << endl;
	cout << "3- .xls" << endl;
	cout << "4- .html" << endl;
	cout << "5- Cikis" << endl;
bas:
	cout << "\nAramak Istediginiz Dosya Tipini Seciniz: ";
	cin >> secim;
	switch (secim)
	{
	case 1:
	{
		DosyaOkuIni();
		cout << "\nDevam Etmek Istiyor Musunuz(E/H): ";
		cin >> sec;
		if (sec == 'E' || sec == 'e')
			goto bas;
		else
		{
			break;
		}
	}

	case 2:
	{
		DosyaOkuTxt();
		cout << "\nDevam Etmek Istiyor Musunuz(E/H): ";
		cin >> sec;
		if (sec == 'E' || sec == 'e')
			goto bas;
		else
		{
			break;
		}
	}

	case 3:
	{
		DosyaOkuXls();
		cout << "\nDevam Etmek Istiyor Musunuz(E/H): ";
		cin >> sec;
		if (sec == 'E' || sec == 'e')
			goto bas;
		else
		{
			break;
		}
	}

	case 4:
	{
		DosyaOkuHtml();
		cout << "\nDevam Etmek Istiyor Musunuz(E/H): ";
		cin >> sec;
		if (sec == 'E' || sec == 'e')
			goto bas;
		else
		{
			break;
		}
	}

	case 5:
		break;

	default:
	{
		cout << "\nHatali Secim Yaptiniz..." << endl;
		break;
	}

	}
	system("start ../../sonuc.txt");
	system("pause");
}