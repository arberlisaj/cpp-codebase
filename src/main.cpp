#include <iostream>

using namespace std;

// ============================================================================

int ex01() {
  std::cout << R"(
***********************************************
* Pune Laboratorike Nr.2                      *
* CMP 111-2: Hyrje ne Algoritme dhe Programim *
* Autori: Arber Lisaj                         *
* Data: 08.11.2024                            *
***********************************************
)";
  return 0;
}

// ============================================================================

int ex02() {
  std::cout << R"(
CCCCCCCCC         ++              ++
CC                ++              ++
CC          ++++++++++++++  ++++++++++++++
CC     	    ++++++++++++++  ++++++++++++++
CC                ++              ++
CCCCCCCCC         ++              ++
)";
  return 0;
}

// ============================================================================

int ex03() {
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
  return 0;
}

// ============================================================================

int ex04() {
  double num1, num2, num3, average;

  num1 = 75.35;
  num2 = -35.56;
  num3 = 15.76;

  average = (num1 + num2 + num3) / 3;
  cout << "Numri 1 = " << num1 << endl
       << "Numri 2 = " << num2 << endl
       << "Numri 3 = " << num3 << endl
       << "Mesatarja = " << average << endl;
  return 0;
}

// ============================================================================

int ex05() {
  float rrezja, siperfaqja, perimetri;
  const float PI = 3.14;

  std::cout << "Rrezja: ";
  std::cin >> rrezja;

  siperfaqja = PI * rrezja * rrezja;
  perimetri = 2 * PI * rrezja;

  std::cout << "Siperfaqja: " << siperfaqja << std::endl;
  std::cout << "Perimetri: " << perimetri << std::endl;
  return 0;
}

// ============================================================================

int ex06() {
  double r1, r2, siperfaqja;
  const double PI = 3.14;

  std::cout << "Rrezja 1: ";
  std::cin >> r1;

  std::cout << "Rrezja 2: ";
  std::cin >> r2;

  siperfaqja = PI * r1 * r2;

  std::cout << "Siperfaqja: " << siperfaqja << std::endl;
  return 0;
}

// ============================================================================

#include <iostream>

int ex07() {
  int userInput, oret, minutat, sekondat;

  std::cout << "Koha e kaluar (sekonda): ";
  std::cin >> userInput;

  oret = userInput / 3600;
  userInput = userInput % 3600;
  minutat = userInput / 60;
  sekondat = userInput % 60;

  // Keshtu vendosa ta shfaqim rezultatin
  std::cout << "Oret: " << oret << std::endl;
  std::cout << "Minutat: " << minutat << std::endl;
  std::cout << "Sekondat: " << sekondat << std::endl;

  return 0;
}

// ============================================================================

int ex08() {
  float cmimiOrigjinal, perqindjaFitimit, perqindjaTatimit, fitimi, cmimiFinal,
      tvsh;

  std::cout << "Cmimi origjinal: ";
  std::cin >> cmimiOrigjinal;
  std::cout << "Perqindja e fitimit: ";
  std::cin >> perqindjaFitimit;
  std::cout << "Tatimin mbi vleren e shtuar: ";
  std::cin >> perqindjaTatimit;

  fitimi = cmimiOrigjinal * perqindjaFitimit / 100;

  // TVSH = Vlera pa TVSH * Norma e TVSH
  tvsh = (cmimiOrigjinal + fitimi) * perqindjaTatimit / 100;

  // Cmimi final = Cmimi origjinal + Fitimi + TVSH
  cmimiFinal = cmimiOrigjinal + fitimi + tvsh;

  std::cout << "Cmimi origjinal: " << cmimiOrigjinal << std::endl
            << "Fitimi: " << fitimi << std::endl
            << "Vlera e TVSH: " << tvsh << std::endl
            << "Cmimi final: " << cmimiFinal << std::endl;

  return 0;
}

// ============================================================================

int ex10() {
  float gjatesiaTelit, gjeresiaKornizes, gjatesiaKornizes;

  std::cout << "Jep gjatesine e telit: ";
  std::cin >> gjatesiaTelit;

  // perimetri = 2×(1.5b+b) qe rezulton ne:
  gjeresiaKornizes = gjatesiaTelit / 5.0;
  gjatesiaKornizes = 1.5 * gjeresiaKornizes;

  std::cout << "Gjeresia e kornizes: " << gjeresiaKornizes << std::endl
            << "Gjatesia e kornizes: " << gjatesiaKornizes << std::endl;

  return 0;
}

// ============================================================================

int main() {
  ex01();
  return 0;
}
