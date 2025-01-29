#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * Lab_06_Ushtrimi_1:
 * 1. Formoni kodin per aksesimin e nje vargu me n elemente.
 * 2. Fusni vlera ne varg
 * 3. Printoni vlerat e vargut
 * 4. Gjeni mesataren e vlerave te vargut
 * 5. Gjetja e vleres maksimale/minimale ne varg
 * 6. Gjetja e nje vlere specifike ne varg
 * 7. Gjetja e vlerave mbi nje kufi te caktuar
 */

int p6ex01() {
  int n;
  cout << "Fusni numrin e elementeve te vektorit: \n";
  cin >> n;

  if (n > 0) {
    int notat[n];

    // Leximi i vlerave ne varg
    cout << "Fusni " << n << " nota:\n";
    for (int i = 0; i < n; i++) {
      cin >> notat[i];
    }

    // Shkrimi i vlerave ne varg
    cout << "Shfaqja e " << n << " notave:\n";
    for (int i = 0; i < n; i++) {
      cout << notat[i] << ", ";
    }

    // Mesatarja e vlerave te vargut
    int shuma = 0;
    float mesatarja;
    cout << "\nGjetja e mesatares se " << n << " notave:\n";
    for (int i = 0; i < n; i++) {
      shuma += notat[i];
    }
    mesatarja = shuma / (n * 1.0);
    cout << "Mesatarja = " << mesatarja << endl;

    // Gjetja e vleres maksimale/minimale te vargut
    int vlera_min, elementiVogel, indeksi_min, indeksi_max;
    vlera_min = elementiVogel = notat[0];
    indeksi_min = indeksi_max = 0;

    cout << "\nGjetja e notes maksimale dhe minimale\n";
    for (int i = 0; i < n; i++) {
      if (elementiVogel < notat[i]) {
        elementiVogel = notat[i];
        indeksi_max = i;
      }

      if (vlera_min > notat[i]) {
        vlera_min = notat[i];
        indeksi_min = i;
      }
    }

    cout << "Nota maksimale = " << elementiVogel
         << "Pozicioni i notes maksimale = " << indeksi_max << endl
         << "Nota minimale = " << vlera_min << endl
         << "Pozicioni i notes minimale = " << indeksi_min << endl;

    // Gjetja e nje vlere specifike ne varg
    int nota_kerkuar;
    cout << "Fusni noten qe kerkoni te gjeni: \n";
    cin >> nota_kerkuar;
    for (int i = 0; i < n; i++) {
      if (nota_kerkuar == notat[i]) {
        cout << "Nota e kerkuar ka index " << i << endl;
      }
    }

    // Gjetja e notave mbi mesatare
    int notat_mbi_mesatare[n / 2 + 1], j = 0;
    cout << "Gjetja e notave mbi mesatare: \n";
    for (int i = 0; i < n; i++) {
      if (mesatarja < notat[i]) {
        notat_mbi_mesatare[j] = notat[i];
        j++;
      }
    }

    for (int i = 0; i < j; i++) {
      cout << notat_mbi_mesatare[i] << ", ";
    }

  } else {
    cout << "Madhesia e vargut nuk mund te jete negative\n";
  }

  return 0;
}

// ---------------------------------------------------------------

/*
 * Lab_06_Ushtrimi_2:
 * 1. Formoni kodin per aksesimin e nje vargu 2D me n rreshta dhe m kolona.
 * 2. Fusni vlera ne varg
 * 3. Printoni vlerat e vargut
 * 4. Gjeni mesataren e vlerave te vargut
 * 5. Gjetja e vleres maksimale/minimale ne varg
 * 6. Gjetja e nje vlere specifike ne varg
 */

int p6ex02() {
  int rreshta, kolona;

  // if(rreshta>0 && kolona>0)
  cout << "Fusni numrin e rreshtave: \n";
  cin >> rreshta;
  cout << "Fusni numrin e kolonave: \n";
  cin >> kolona;

  // Krijimi i vargut 2D
  int notat[rreshta][kolona];

  // Aksesimi i elementeve te vargut
  for (int i = 0; i < rreshta; i++) {
    for (int j = 0; j < kolona; j++) {
      notat[i][j];
    }
  }

  // Vendosja e vlerave ne elementet te vargut
  cout << "Fusni " << rreshta * kolona << " vlera\n";
  for (int i = 0; i < rreshta; i++) {
    for (int j = 0; j < kolona; j++) {
      cin >> notat[i][j];
    }
  }

  // Shfaqja e vlerave te elementeve te vargut
  cout << "Shfaqja e " << rreshta * kolona << " vlerave\n";
  for (int i = 0; i < rreshta; i++) {
    for (int j = 0; j < kolona; j++) {
      cout << notat[i][j] << " ";
    }
    cout << endl;
  }

  // Shfaqja e vlerave te elementeve te vargut
  int shuma_vek2d = 0;
  cout << "Shuma e " << rreshta * kolona << " vlerave\n";
  for (int i = 0; i < rreshta; i++) {
    for (int j = 0; j < kolona; j++) {
      shuma_vek2d += notat[i][j];
    }
  }

  cout << "Shuma e vlerave te elementeve te vek 2d " << shuma_vek2d << endl;

  // Shuma e Diagonales se Pare
  int j = 0, shuma_diag_1 = 0;
  for (int i = 0; i < rreshta; i++) {
    shuma_diag_1 += notat[i][j];
    j++;
  }

  // Shuma e Diagonales se Dyte
  j = 2;
  int shuma_diag_2 = 0;
  for (int i = 0; i < rreshta; i++) {
    shuma_diag_2 += notat[i][j];
    j--;
  }
  cout << "Shuma e Diagonales se Pare: " << shuma_diag_1 << endl
       << "Shuma e Diagonales se Dyte: " << shuma_diag_2 << endl;

  return 0;
}

// ---------------------------------------------------------------

/*
 * Lab_06_Ushtrimi_3:
 * Te formohet vektori a ne menyre qe secili element te jete i barabarte
 * me katrorin e indeksit te tij
 */

int p6ex03() {
  int n;
  cout << "Fusni numrin e elementeve te vektorit: \n";
  cin >> n;

  if (n > 0) {
    int vektori[n];

    // Krijimi i vektorit
    for (int i = 0; i < n; i++) {
      vektori[i] = i * i;
    }

    // Shfaqja e vlerave te elementeve te vektorit
    cout << "Shfaqja e " << n << " vlerave te elementeve te vektorit\n";
    for (int i = 0; i < n; i++) {
      cout << vektori[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Madhesia e vektorit nuk mund te jete negative\n";
  }

  return 0;
}

// ---------------------------------------------------------------

/*
 * Lab_06_Ushtrimi_4:
 * Të formohet vektori a me pesë numrat e parë tek dhe vektori b me pesë numrat
 * e parë çift.
 */

int p6ex04() {
  int n = 5;
  int vektori_a[n], vektori_b[n];

  for (int i = 0; i < 5; i++) {
    vektori_a[i] = 2 * i + 1;
    vektori_b[i] = 2 * (i + 1);
  }

  // Shfaqja e vlerave te elementeve te vektorit A
  cout << "Shfaqja e " << n << " vlerave te elementeve te vektorit A\n";
  for (int i = 0; i < n; i++) {
    cout << vektori_a[i] << " ";
  }

  cout << endl;

  cout << "Shfaqja e " << n << " vlerave te elementeve te vektorit B\n";
  for (int i = 0; i < n; i++) {
    cout << vektori_b[i] << " ";
  }

  cout << endl;

  return 0;
}

// ---------------------------------------------------------------

// Radhit vektorin ne rendin rrites
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int p6ex05() {

  /*
   * Lab_06_Ushtrimi_5:
   * 1.Te formohet vektori a me lexim te n numrave nga tastiera.
   * 2.Te gjendet shuma e elementeve te tij.
   * 3.Te shfaqet elementi me i vogel i vektorit a dhe indeksi i tij.
   * 4.Te shfaqet elementi me i madh i vektorit dhe indeksi i tij.
   * 5.Te llogaritet prodhimi i elementeve te vektorit a.
   * 6.Te llogaritet vlera absolute me e vogel e elementeve te vektorit a dhe
   * indeksi i saj.
   * 7.Te formohet vektori i ri b nga elementet me indeks tek te vektorit a duke
   * mbledhur vlerat e elementeve me vleren e indeksit perkates.
   * 8.Te llogaritet shuma e katroreve te elementeve negative dhe shuma e kubeve
   * te elementeve pozitive te vektorit a.
   * 9.Te rradhiten vlerat e elementeve te vektorit a sipas rendit rrites.
   */

  int n;
  cout << "Fusni numrin e elementeve te vektorit: \n";
  cin >> n;

  int vektori_a[n];
  vector<int> vektori_b;

  int shuma = 0, prodhimi = 1;
  int shumaKatroreveNegativ = 0;
  int shumaKubevePozitiv = 0;

  int elementiVogel, elementiVogelIndex;
  int elementiMadh, elementiMadhIndex;

  int vleraAbsoluteMeEVogel, vleraAbsoluteMeEVogelIndex;

  cout << "Fusni elementin 0 te vektorit : \n";
  cin >> vektori_a[0];

  shuma = vektori_a[0];
  prodhimi = vektori_a[0];

  elementiVogel = vektori_a[0];
  elementiVogelIndex = 0;

  elementiMadh = vektori_a[0];
  elementiMadhIndex = 0;

  vleraAbsoluteMeEVogel = abs(vektori_a[0]);
  vleraAbsoluteMeEVogelIndex = 0;

  if (vektori_a[0] < 0)
    shumaKatroreveNegativ += pow(vektori_a[0], 2);
  if (vektori_a[0] > 0)
    shumaKubevePozitiv += pow(vektori_a[0], 3);

  for (int i = 1; i < n; i++) {
    cout << "Fusni elementin " << i << " te vektorit : \n";
    cin >> vektori_a[i];

    // Llogaritja e shumes dhe prodhimit te elementeve
    shuma += vektori_a[i];
    prodhimi *= vektori_a[i];

    // Llogaritja e elementit me te vogel
    if (vektori_a[i] < elementiVogel) {
      elementiVogel = vektori_a[i];
      elementiVogelIndex = i;
    }

    // Llogaritja e elementit me te madh
    if (vektori_a[i] > elementiMadh) {
      elementiMadh = vektori_a[i];
      elementiMadhIndex = i;
    }

    // Llogaritja e vleres absolute me te vogel
    if (abs(vektori_a[i]) < vleraAbsoluteMeEVogel) {
      vleraAbsoluteMeEVogel = abs(vektori_a[i]);
      vleraAbsoluteMeEVogelIndex = i;
    }

    // Formimi i vektorit b
    if (i % 2 != 0) {
      vektori_b.push_back(vektori_a[i] + i);
    }

    // LLogarit shumen e katroreve te elementeve negative dhe shuma e kubeve te
    // elementeve pozitive.
    if (vektori_a[i] < 0) {
      shumaKatroreveNegativ += pow(vektori_a[i], 2);
    } else if (vektori_a[i] > 0) {
      shumaKubevePozitiv += pow(vektori_a[i], 3);
    }
  }

  cout << "Shuma e elementeve te vektorit a: " << shuma << endl;
  cout << "Elementi me i vogel i vektorit a: " << elementiVogel << " me indeks "
       << elementiVogelIndex << endl;
  cout << "Elementi me i madh i vektorit a: " << elementiMadh << " me indeks "
       << elementiMadhIndex << endl;
  cout << "Prodhimi i elementeve te vektorit a: " << prodhimi << endl;
  cout << "Vlera absolute me e vogel e elementeve te vektorit a: "
       << vleraAbsoluteMeEVogel << " me indeks " << vleraAbsoluteMeEVogelIndex
       << endl;

  cout << "Vektori b: ";
  for (int num : vektori_b) {
    cout << num << " ";
  }

  cout << endl;

  cout << "Shuma e katroreve te elementeve negative: " << shumaKatroreveNegativ
       << endl
       << "Shuma e kubeve te elementeve pozitive: " << shumaKubevePozitiv
       << endl;

  // Rradhitja e elementeve te vektorit
  bubbleSort(vektori_a, n);
  for (int i = 0; i < n; i++) {
    cout << vektori_a[i] << " ";
  }
  cout << endl;

  return 0;
}

int p6ex06() {
  cout << "p6ex06" << endl;
  return 0;
}

int p6ex07() {
  cout << "p6ex07" << endl;
  return 0;
}

int p6ex08() {
  cout << "p6ex08" << endl;
  return 0;
}
