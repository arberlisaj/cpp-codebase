#include <cmath>
#include <iostream>

using namespace std;

int p1ex01() {
  // Ushtrimi 1 - Gjeni shumen, differencen,
  // produktin dhe pjestimin midis dy numrave te dhene.

  /*
   * Fillo
   * Deklaro num1, num2, shuma, diferenca, produkti, pjestimi = 0
   * Lexo num1 dhe num2
   * Llogarit
   *  shuma = num1 + num2
   *  diferenca = num1 - num2
   *  produkti = num1 * num2
   * Krahaso num2 ≠ 0
   *   Pjestimi = num1 / num2
   * Perndryshe
   *   Shfaq "Pjestimi nuk mund te kryhet sepse num2 eshte 0"
   * Shfaq shuma, diferenca, produkti dhe pjestimin
   * Fund
   */

  // Deklarimi
  double num1, num2, shuma, diferenca, produkti;
  double pjestimi = 0;

  // Leximi i vlerave
  cout << "Vlera e num1: ";
  cin >> num1;
  cout << "Vlera e num2: ";
  cin >> num2;

  // Llogarit
  shuma = num1 + num2;
  diferenca = num1 - num2;
  produkti = num1 * num2;

  // Krahaso
  if (num2 != 0) {
    pjestimi = num1 / num2;
  } else {
    cout << "Pjestimi nuk mund te kryhet sepse num2 eshte 0" << endl;
  }

  // Shfaq rezultatin
  cout << "Shuma: " << shuma << endl
       << "Diferenca: " << diferenca << endl
       << "Produkti: " << produkti << endl
       << "Pjestimi: " << pjestimi << endl;

  return 0;
}

int p1ex02() {
  // Ushtri 2 - Nese nje udhetar ecen me nje shpejtesi mesatare prej 60 km/h per
  // sa ore shkon nga Tirana në Devoll, nese dispanca midis Tiranes dhe Devollit
  // eshte 180 km?

  /*
   * Fillo
   * Deklaro shpejtesia = 180, distanca = 60, koha = 0
   * Llogarit koha = distanca / shpejtesia
   * Shfaq koha
   * Fund
   */

  // Deklarimi
  int shpejtesia = 60, distanca = 180, koha = 0;

  // Llogarit
  koha = distanca / shpejtesia;

  // Shfaq rezultatin
  cout << "Koha: " << koha << " ore" << endl;

  return 0;
}

int p1ex03() {
  // Ushtrimi 3 - Llogarisni Kohen qe duhet per te pershkuar nje distance midis
  // dy pikave A dhe B me nje shpejtesi mesatare V. Pikat A dhe B jane dhene si
  // koordinata te sistemin koordinativ kartezian.

  /*
   * Fillo
   * Deklaro x1, y1, x2, y2, shpejtesia, distanca, koha
   * Lexo x1, y1, x2, y2, dhe shpejtesia
   * Krahaso shpejtesia <= 0
   * Llogarit
   *  distanca = sqrt(((x2 - x1)^2 + (y2 - y1)^2))
   *  koha = distanca / shpejtesia
   * Shfaq koha
   * Fund
   */

  // Deklarimi
  double x1, y1, x2, y2, shpejtesia, distanca, koha = 0;

  // Leximi i vlerave
  cout << "Koordinatat e pikes A (x1, y1): ";
  cin >> x1 >> y1;
  cout << "koordinatat e pikes B (x2, y2): ";
  cin >> x2 >> y2;
  cout << "Vendosni shpejtesine: ";
  cin >> shpejtesia;

  // Llogarit distancen
  distanca = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  // Llogarit kohen
  if (shpejtesia <= 0) {
    cout << "Shpejtesia nuk mund te jete negative ose 0" << endl;
  } else {
    koha = distanca / shpejtesia;
  }

  // Shfaq rezultatin
  cout << "Koha: " << koha << " ore" << endl;

  return 0;
}

int p1ex04() {
  //  Ushtrimi 4 - Gjeni numrin me te madh midis dy numrave te dhene, dy numrat
  //  e dhene jane te ndryshem.

  /*
   * Fillo
   * Deklaro num1, num2
   * Lexo num1 dhe  num2
   * Krahaso num1 > num2
   *   Shfaq num1
   * Perndryshe
   *   Shfaq num2
   * Fund
   */

  // Deklarimi
  double num1, num2;

  // Leximi i vlerave
  cout << "Vlera e num1: ";
  cin >> num1;
  cout << "Vlera e num2: ";
  cin >> num2;

  // Krahasimi
  if (num1 > num2) {
    cout << "Numri me i madh: " << num1 << endl;
  } else {
    cout << "Numri me i madh: " << num2 << endl;
  }

  return 0;
}

int p1ex05() {
  // Ushtrimi 5 - Gjeni numrin me te madh midis dy numrave te dhene, dy numrat e
  // dhene mund te jene dhe te barabarte.

  /*
   * Fillo
   * Deklaro num1, num2
   * Lexo num1 dhe num2
   * Krahaso num1 > num2
   *  Shfaq num1
   * Krahaso num1 < num2
   *  Shfaq num2
   * Perndryshe
   *  Shfaq "Numrat jane te barabarte"
   * Fund
   */

  // Deklarimi
  double num1, num2;

  // Leximi i vlerave
  cout << "Vlera e num1: ";
  cin >> num1;
  cout << "Vlera e num2: ";
  cin >> num2;

  // Krahasimi
  if (num1 > num2) {
    cout << "Numri me i madh: " << num1 << endl;
  } else if (num1 < num2) {
    cout << "Numri me i madh: " << num2 << endl;
  } else {
    cout << "Numrat jane te barabarte" << endl;
  }

  return 0;
}

int p1ex06() {
  // Ushtrimi 6 - Gjeni shumen midis dy numrave te dhene nese numri i pare eshte
  // me i madh se numri i dyte dhe diferencen midis tyre nese numri i dyte eshte
  // me i madh se numri i pare

  /*
   * Fillo
   * Deklaro num1, num2, shuma, diferencea
   * Lexo num1 dhe num2
   * Krahaso num1 > num2
   *  Llogarit shuma = num1 + num2
   *  Shfaq shuma
   * Perndryshe
   *  Llogarit diferencea = num1 - num2
   *  Shfaq diferencen
   * Fund
   */

  // Deklarimi
  double num1, num2, shuma, diferencea;

  // Leximi i vlerave
  cout << "Vlera e num1: ";
  cin >> num1;
  cout << "Vlera e num2: ";
  cin >> num2;

  // Krahasimi
  if (num1 > num2) {
    shuma = num1 + num2;
    // Shfaq shuma
    cout << "Shuma: " << shuma << endl;
  } else {
    diferencea = num1 - num2;
    // Shfaq diferenca
    cout << "Diferenca: " << diferencea << endl;
  }

  return 0;
}

int p1ex07() {
  // Ushtrimi 7 - Gjeni shumen e dhjete numrave te pare.

  /*
   * Fillo
   * Deklaro shuma = 0
   * Perdorim formulen shuma = n * (n + 1) / 2
   * Shfaq shuma
   * Fund
   */

  // Deklarimi
  int shuma = 0;

  // Llogarit shumen
  shuma = 10 * (10 + 1) / 2;

  // Shaq shuma
  cout << "Shuma: " << shuma << endl;

  return 0;
}

int p1ex08() {
  // Ushtrimi 8 - Gjeni shumen e numrave ne nje segment te dhene numrash, ku
  // nr1<nr2.

  /*
   * Fillo
   * Deklaro nr1, nr2, shuma = 0
   * Lexo nr1 dhe nr2
   * Llogarit
   *  shuma = (nr1 + nr2) * (nr2 - nr1 + 1) / 2
   * Shfaq shumen
   * Fund
   */

  // Deklarimi
  int nr1, nr2, shuma = 0;

  // Leximi i vlerave
  cout << "Vlera e nr1: ";
  cin >> nr1;
  cout << "Vlera e nr2: ";
  cin >> nr2;

  // Llogarit shumen
  shuma = (nr1 + nr2) * (nr2 - nr1 + 1) / 2;

  // Shfaq shumen
  cout << "Shuma: " << shuma << endl;

  return 0;
}

int p1ex09() {
  // Ushtrimi 8 - Gjeni numrin e oreve, minutave dhe sekondave qe permban nje
  // kohe e dhene me sekonda. Psh: 36366 Sekonda permban 1 Ore, 6 Minua, Sekonda

  /*
   * Fillo
   * Deklaro sekonda, ore, minuta
   * Lexo sekonda
   * Llogarit
   *  ore = sekonda / 3600
   *  minuta = (sekonda % 3600) / 60
   *  sekonda = (sekonda % 3600) % 60
   * Shfaq ore, minuta dhe sekonda
   * Fund
   */

  // Deklarimi
  int sekonda, ore, minuta;

  // Leximi i vlerave
  cout << "Vendosni sekondat: ";
  cin >> sekonda;

  // Llogarit
  ore = sekonda / 3600;
  minuta = (sekonda % 3600) / 60;
  sekonda = (sekonda % 3600) % 60;

  // Shfaq rezultatin
  cout << "Ore: " << ore << endl
       << "Minuta: " << minuta << endl
       << "Sekonda: " << sekonda << endl;

  return 0;
}
