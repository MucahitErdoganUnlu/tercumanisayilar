#include <iostream>
#include <locale.h> // veya C++ için <clocale>
using namespace std;


string birler[] = { "", "bir", "iki", "üç", "dört",
                 "beþ", "altý", "yedi", "sekiz",
                 "dokuz"};

string onlar[] = { "", "on", "yirmi", "otuz", "kýrk",
                 "elli", "altmýþ", "yetmiþ", "seksen",
                 "doksan" };
 
string numToWords(int n, string s)
{
    string str = "";
    
    if (n > 9)
        str += onlar[n / 10] + birler[n % 10];
    else
        str += birler[n];

    if (n)
        str += s;
 
    return str;
}

string convertToWords(long n)
{
    string out;
 
    if (n > 99 and (n / 100) < 2)
    	out += "yüz";
    else 
    	out += numToWords(((n / 100) % 10), "yüz");
 
    out += numToWords((n % 100), "");
 
    return out;
}
 
int main()
{
  	setlocale(LC_ALL, "Turkish");

    int n;
 	cout << "Sayý giriniz: "; 
	cin >> n;
    cout << convertToWords(n) << endl;
 
    return 0;
}
