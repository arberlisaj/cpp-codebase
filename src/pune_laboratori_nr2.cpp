#include <cmath>
#include <iostream>
#include <pune_laboratori_nr2.h>

using namespace std;

void ex01() {
  cout << R"(
***********************************************
* Pune Laboratorike Nr.2                      *
* CMP 111-2: Hyrje ne Algoritme dhe Programim *
* Autori: Arber Lisaj                         *
* Data: 08.11.2024                            *
***********************************************
)";
}

void ex02() {
  cout << R"(
CCCCCCCCC         ++              ++
CC                ++              ++
CC          ++++++++++++++  ++++++++++++++
CC     	    ++++++++++++++  ++++++++++++++
CC                ++              ++
CCCCCCCCC         ++              ++
)";
}

void ex03() {
  int num1, num2, num3;
  float mesatarja;
  num1 = 128;
  num2 = 28;
  num3 = -25;

  mesatarja = static_cast<float>(num1 + num2 + num3) / 3;
  cout << "Numri 1 = " << num1 << endl
       << "Numri 2 = " << num2 << endl
       << "Numri 3 = " << num3 << endl
       << "Mesatarja = " << mesatarja << endl;
}

void ex04() {
  double num1, num2, num3, average;

  num1 = 75.35;
  num2 = -35.56;
  num3 = 15.76;

  average = (num1 + num2 + num3) / 3;
  cout << "Numri 1 = " << num1 << endl
       << "Numri 2 = " << num2 << endl
       << "Numri 3 = " << num3 << endl
       << "Mesatarja = " << average << endl;
}

void ex05() {
  float rrezja, siperfaqja, perimetri;
  const float PI = 3.14;

  cout << "Rrezja: ";
  cin >> rrezja;

  siperfaqja = PI * rrezja * rrezja;
  perimetri = 2 * PI * rrezja;

  cout << "Siperfaqja: " << siperfaqja << endl;
  cout << "Perimetri: " << perimetri << endl;
}

void ex06() {
  double r1, r2, siperfaqja;
  const double PI = 3.14;

  cout << "Rrezja 1: ";
  cin >> r1;

  cout << "Rrezja 2: ";
  cin >> r2;

  siperfaqja = PI * r1 * r2;

  cout << "Siperfaqja: " << siperfaqja << endl;
}

#include <iostream>

void ex07() {
  int userInput, oret, minutat, sekondat;

  cout << "Koha e kaluar (sekonda): ";
  cin >> userInput;

  oret = userInput / 3600;
  userInput = userInput % 3600;
  minutat = userInput / 60;
  sekondat = userInput % 60;

  // Keshtu vendosa ta shfaqim rezultatin
  cout << "Oret: " << oret << endl;
  cout << "Minutat: " << minutat << endl;
  cout << "Sekondat: " << sekondat << endl;
}

void ex08() {
  float cmimiOrigjinal, perqindjaFitimit, perqindjaTatimit, fitimi, cmimiFinal,
      tvsh;

  cout << "Cmimi origjinal: ";
  cin >> cmimiOrigjinal;
  cout << "Perqindja e fitimit: ";
  cin >> perqindjaFitimit;
  cout << "Tatimin mbi vleren e shtuar: ";
  cin >> perqindjaTatimit;

  fitimi = cmimiOrigjinal * perqindjaFitimit / 100;

  // TVSH = Vlera pa TVSH * Norma e TVSH
  tvsh = (cmimiOrigjinal + fitimi) * perqindjaTatimit / 100;

  // Cmimi final = Cmimi origjinal + Fitimi + TVSH
  cmimiFinal = cmimiOrigjinal + fitimi + tvsh;

  cout << "Cmimi origjinal: " << cmimiOrigjinal << endl
       << "Fitimi: " << fitimi << endl
       << "Vlera e TVSH: " << tvsh << endl
       << "Cmimi final: " << cmimiFinal << endl;
}

void ex09() {
  const double vellimiKutise = 3.78;
  const double kostoPerLiter = 38.0;
  const double fitimiPerKuti = 27.0;

  double sasiaDitoreQumeshtit;
  cout << "Sasia ditore e qumeshtit (Liter): ";
  cin >> sasiaDitoreQumeshtit;

  int numriKutive = ceil(sasiaDitoreQumeshtit / vellimiKutise);
  double kostojaProdhimit = sasiaDitoreQumeshtit * kostoPerLiter;
  double fitimiTotal = numriKutive * fitimiPerKuti;

  cout << "Sasia e prodhuar: " << sasiaDitoreQumeshtit << " Liter." << endl
       << "Numri i kutive te nevojshme: " << numriKutive << " Kuti." << endl
       << "Kosto e prodhimit: " << kostojaProdhimit << " Leke." << endl
       << "Fitimi per prodhimin: " << fitimiTotal << " Leke." << endl;
}

void ex10() {
  float gjatesiaTelit, gjeresiaKornizes, gjatesiaKornizes;

  cout << "Jep gjatesine e telit: ";
  cin >> gjatesiaTelit;

  // perimetri = 2×(1.5b+b) qe rezulton ne:
  gjeresiaKornizes = gjatesiaTelit / 5.0;
  gjatesiaKornizes = 1.5 * gjeresiaKornizes;

  cout << "Gjeresia e kornizes: " << gjeresiaKornizes << endl
       << "Gjatesia e kornizes: " << gjatesiaKornizes << endl;
}
