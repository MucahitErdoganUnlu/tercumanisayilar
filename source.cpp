//C++ varsayılan ayarda Türkçe karakter yazdırmıyor. Destekleyen standart kütüphaneyi eklememiz gerekiyor.

#include <locale.h> // veya C++ için <clocale>
int main() {
  setlocale(LC_ALL, "Turkish");
  printf("Türkçe karakter yazdırmak için örnek kod\n");
  printf("setlocale fonksiyonu olmadan çalıştırınca ekrana saçmasapan bir yazı bastırır.\n");
  return 0;
}
