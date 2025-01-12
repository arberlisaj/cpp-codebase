#include <iostream>

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
    int vlera_min, vlera_max, indeksi_min, indeksi_max;
    vlera_min = vlera_max = notat[0];
    indeksi_min = indeksi_max = 0;

    cout << "\nGjetja e notes maksimale dhe minimale\n";
    for (int i = 0; i < n; i++) {
      if (vlera_max < notat[i]) {
        vlera_max = notat[i];
        indeksi_max = i;
      }

      if (vlera_min > notat[i]) {
        vlera_min = notat[i];
        indeksi_min = i;
      }
    }

    cout << "Nota maksimale = " << vlera_max
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

int p6ex04() {
  cout << "p6ex04" << endl;
  return 0;
}

int p6ex05() {
  cout << "p6ex05" << endl;
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
