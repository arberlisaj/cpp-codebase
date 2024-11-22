#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int p3ex01() {
  string emri;
  double studyHours;

  cout << "Emri: ";
  cin >> emri;
  cout << "Oret e studimit: ";
  cin >> studyHours;

  cout << "Pershendetje, " << emri << "! Te shtunen, duhet te studiosh "
       << studyHours << " ore per provimin." << endl;

  return 0;
}

int p3ex02() {
  double numriDhjetor;
  cout << "Fusni nje numer dhjetor: ";
  cin >> numriDhjetor;

  cout << "Numri i rrumbullakosur: " << static_cast<int>(numriDhjetor + 0.5)
       << endl;

  return 0;
}

int p3ex03() {
  const int SECRET = 11;
  const double PagesaPerOre = 12.5;
  int num1, num2, newNum;
  double orePune, paga;
  string mbiemri;

  cout << "Numri 1: ";
  cin >> num1;
  cout << "Numri 2: ";
  cin >> num2;

  newNum = num1 * 2 + num2;
  cout << "Numri i ri: " << newNum << endl;

  newNum += SECRET;
  cout << "Numri dhe sekreti: " << newNum << endl;

  cout << "Mbiemri: ";
  cin >> mbiemri;

  while (true) {
    cout << "Oret e punes (0-70): ";
    cin >> orePune;

    if (orePune >= 0 && orePune <= 70) {
      break;
    }
  }

  cout << "Mbiemri: " << mbiemri << endl
       << "Pagesa per ore pune: $" << PagesaPerOre << endl
       << "Oret e punes: " << orePune << endl
       << "Paga: $" << PagesaPerOre * orePune << endl;
  return 0;
}

int p3ex04() {
  int nr1, nr2, nr3, nr4, nr5;
  double mesatarja;

  cout << "Piket e testeve: ";
  cin >> nr1 >> nr2 >> nr3 >> nr4 >> nr5;

  mesatarja = (nr1 + nr2 + nr3 + nr4 + nr5) / 5.0;

  cout << "Mesatarja: " << mesatarja << endl;

  return 0;
}

int p3ex05() {
  double nr1, nr2, nr3, nr4, nr5;
  int shuma;

  cout << "Fusni 5 numra dhjetore (psh. 1.2): ";
  cin >> nr1 >> nr2 >> nr3 >> nr4 >> nr5;

  shuma = static_cast<int>(nr1 + nr2 + nr3 + nr4 + nr5 + 0.5);

  cout << "Shuma: " << shuma << endl;
  return 0;
}

int p3ex06() {
  int galon;
  double miljePerGalon, milje;

  cout << "Kapaciteti serbatorit: ";
  cin >> galon;
  cout << "Milje per galon: ";
  cin >> miljePerGalon;

  milje = galon * miljePerGalon;

  cout << "Makina pershkon: " << milje << " milje ne nje serbator." << endl;
  return 0;
}

int p3ex07() {
  double cmimiOrigjinal, perqindjaRritjes, normaTakses, cmimiRritur, taksa,
      cmimiFinal;

  cout << "Cmimi origjinal: ";
  cin >> cmimiOrigjinal;
  cout << "Perqindja e rritjes: ";
  cin >> perqindjaRritjes;
  cout << "Norma e takses: ";
  cin >> normaTakses;

  cmimiRritur = cmimiOrigjinal + cmimiOrigjinal * perqindjaRritjes / 100;
  taksa = cmimiRritur * normaTakses / 100;
  cmimiFinal = cmimiRritur + taksa;

  cout << "Cmimi origjinal: " << cmimiOrigjinal << endl
       << "Perqindja e rritjes: " << perqindjaRritjes << "%" << endl
       << "Cmimi i shitjes: " << cmimiRritur << endl
       << "Norma e takses: " << normaTakses << "%" << endl
       << "Taksa e shitjes: " << taksa << endl
       << "Cmimi final: " << cmimiFinal << endl;

  return 0;
}

int p3ex08() {
  const int STANDADI = 1024;
  int kapacitetiHDD;
  double kapacitetiPerkates;
  long long kapacitetiNeByte;

  cout << "Kapaciteti i HDD: ";
  cin >> kapacitetiHDD;

  kapacitetiNeByte = kapacitetiHDD * pow(1000, 3);

  kapacitetiPerkates = kapacitetiNeByte / pow(STANDADI, 3);

  cout << "Kapaciteti i vertete eshte " << kapacitetiPerkates << "G" << endl;

  return 0;
}

int p3ex09() {
  int JAVET_E_PUNES = 5;
  double NORMA_E_TAKSAVE = 0.14;
  double pagaPerOre;
  int orePuneNeJave;

  cout << "Paga per ore: ";
  cin >> pagaPerOre;

  cout << "Oret e punuara cdo jave: ";
  cin >> orePuneNeJave;

  // Paga neto
  double paga = pagaPerOre * orePuneNeJave;
  double taksa = paga * NORMA_E_TAKSAVE;
  double pagaNeto = paga - taksa;

  // 10% Rroba te reja
  double rrobaDheAksesore = pagaNeto * 0.1;
  // 1% Paisje shkollore
  double paisjeShkollore = pagaNeto * 0.01;

  pagaNeto -= rrobaDheAksesore + paisjeShkollore;

  // 25% e parave te mbetura obligacione kursimi
  double kursimi = pagaNeto * 0.25;
  // Prindrit shtojne $0.5 per cdo $1 te kursimit
  double shtesaPrinderve = kursimi * 0.5;

  cout << "Paga: $" << paga << endl
       << "Taksa: $" << taksa << endl
       << "Paga neto: $" << paga - taksa << endl
       << "Rroba dhe aksesore: $" << rrobaDheAksesore << endl
       << "Paisje shkollore: $" << paisjeShkollore << endl
       << "Obligacione kursimi: $" << kursimi << endl
       << "Obligacione kursimi (daddy's money): $" << shtesaPrinderve << endl;

  return 0;
}
