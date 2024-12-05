#include <iostream>

using namespace std;

int p5ex01() {
  int dita = 1;
  int kalori = 0;
  int kaloriTotale = 0;

  // Counter controlled loop
  while (dita <= 7) {
    cout << "Kalorite e djegura per diten " << dita << ": ";
    cin >> kalori;
    kaloriTotale += kalori;
    dita++;
  }

  cout << "Kalori te djegura: " << kaloriTotale << endl;
  return 0;
}

int p5ex02() {
  int x, y;
  int rezultati = 1;

  cout << "Vlera e x: ";
  cin >> x;
  cout << "Vlera e y: ";
  cin >> y;

  for (int i = 1; i <= y; i++) {
    rezultati *= x;
  }

  cout << "Rezultati: " << rezultati << endl;
  return 0;
}

int p5ex03() {
  int n;
  int numri;
  int shuma = 0;

  cout << "Numri i numrave: ";
  cin >> n;

  // Counter controlled loop
  int i = 1;
  while (i <= n) {
    cout << "Numri " << i << ": ";
    cin >> numri;
    shuma += numri;
    i++;
  }

  cout << "Shuma: " << shuma << endl;
  return 0;
}

int p5ex04() {
  // Formoni nje program qe gjen shumen e numrave te futur nga tastiera derisa
  // perdoruesi te fusi numrin 10, duke perdorur strukturen ciklike while te
  // kontrolluar nga rojtari
  int numri;
  int shuma = 0;

  // Sentinel controlled loop
  while (numri != 10) {
    cout << "Numri: ";
    cin >> numri;
    shuma += numri;
  }

  cout << "Shuma: " << shuma << endl;
  return 0;
}

int p5ex05() {
  // Formoni nje program i cili gjen shumen e numrave jo zero duke perdorur
  // strukturen ciklike while te kontrolluar nga flamurtari

  int numri;
  int shuma = 0;

  // Flag controlled loop
  bool flag = true;
  while (flag) {
    cout << "Numri: ";
    cin >> numri;
    if (numri == 0) {
      flag = false;
    } else {
      shuma += numri;
    }
  }

  cout << "Shuma: " << shuma << endl;
  return 0;
}

int p5ex06() {
  int numri, shuma = 0, produkti = 1;

  bool flag = true;
  while (flag) {
    cout << "Numri: ";
    cin >> numri;

    if (numri == 0) {
      flag = false;
    } else {
      if (numri % 2 == 0) {
        produkti *= numri;
      } else {
        shuma += numri;
      }
    }
  }

  cout << "Produkti i numrave cift: " << produkti << endl;
  cout << "Shuma e numrave tek: " << shuma << endl;
  return 0;
}

int p5ex07() {
  int x, y;
  int plotePjestohenMeTre = 0;
  int plotePjestohenMePese = 0;

  cout << "Fusni dy numra te plote(x,y): ";
  cin >> x >> y;

  while (x <= y) {
    if (x % 3 == 0) {
      plotePjestohenMeTre++;
    }
    if (x % 5 == 0) {
      plotePjestohenMePese++;
    }
    x++;
  }

  cout << "Plotpjestohen me 3: " << plotePjestohenMeTre << endl
       << "Plotpjestohen me 5: " << plotePjestohenMePese << endl;
  return 0;
}

int p5ex08() {

  int numriNotave, nota, shuma = 0;
  cout << "Numri i notave: ";
  cin >> numriNotave;

  int i = 0;
  while (i < numriNotave) {
    cout << "Nota " << i << " :";
    cin >> nota;

    shuma += nota;

    i++;
  }

  // Explicit type casting o profe
  cout << "Mesatarja: " << (float)shuma / numriNotave << endl;
  return 0;
}

int p5ex09() {
  int shuma = 0, produkti = 1, numriMagjik;
  cout << "Jep nje numer: ";
  cin >> numriMagjik;

  int i = 1;
  while (i <= numriMagjik) {
    if (i % 2 == 0) {
      // if namber iz chift
      shuma += i;
    } else {
      // ells namber iz tech
      produkti *= i;
    }
    i++;
  }

  cout << "Shuma e numrave cift: " << shuma << endl;
  cout << "Produkti i numrave tek: " << produkti << endl;
  return 0;
}

int p5ex10() {
  int n;

  cout << "Jep nje numer: ";
  cin >> n;

  // Zgjidhja me for loop
  int produktiForLoop = 1, i = 1;
  for (; i <= n; i++) {
    produktiForLoop *= i;
  }

  // Zgjidhja me while loop
  int produktiWhileLoop = 1, j = 1;
  while (j <= n) {
    produktiWhileLoop *= j;
    j++;
  }

  // Zgjidhja me do while loop
  int produktiDoWhileLoop = 1, k = 1;
  do {
    produktiDoWhileLoop *= k;
    k++;
  } while (k <= n);

  cout << "Produkti me for loop: " << produktiForLoop << endl
       << "Produkti me while loop: " << produktiWhileLoop << endl
       << "Produkti me do while loop: " << produktiDoWhileLoop << endl;

  return 0;
}

int p5ex11() {
  int n;
  cout << "Jep nje numer: ";
  cin >> n;

  // check if n is prime or no
  bool isPrime = true;
  // why 2
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }

  cout << "Numri " << n << (isPrime ? " " : " nuk ") << "eshte i thjeshte."
       << endl;
  return 0;
}

int p5ex12() {
  for (int i = 0; i <= 4; i++) {
    for (int j = 0; j <= 3; j++) {
      cout << "*";
    }
    cout << endl;
    for (int k = 0; k <= 7; k++) {
      cout << "+";
    }
    cout << endl;
  }
  return 0;
}

int p5ex13() {
  int n;
  cout << "Jep nje numer: ";
  cin >> n;

  int i = 1;
  do {
    cout << i << "\n";
    i++;
  } while (i <= n);

  cout << "Numri i fundit eshte: " << i - 1 << endl;
  return 0;
}

int p5ex14() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

int p5ex15() {
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

int p5ex16() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

int p5ex17() {
  // Fibonacci
  int n;
  cout << "Jep nje numer: ";
  cin >> n;

  while (n < 0) {
    cout << "Jep nje numer pozitiv: ";
    cin >> n;
  }

  int kufizaPara = 0, kufizaAktuale = 1, kufizaArdhshme;
  for (int i = 0; i < n; i++) {
    cout << kufizaPara << " ";
    kufizaArdhshme = kufizaPara + kufizaAktuale;
    kufizaPara = kufizaAktuale;
    kufizaAktuale = kufizaArdhshme;
  }

  cout << endl;
  return 0;
}

int p5ex18() {
  int numriBanoreveA, numriBanoreveB;
  float normaRritjesA, normaRritjesB;

  cout << "Numri i banoreve te qytetit A: ";
  cin >> numriBanoreveA;
  cout << "Numri i banoreve te qytetit B: ";
  cin >> numriBanoreveB;
  cout << "Norma e rritjes se qytetit A(%): ";
  cin >> normaRritjesA;
  cout << "Norma e rritjes se qytetit B(%): ";
  cin >> normaRritjesB;

  while (normaRritjesA < normaRritjesB + 1) {
    cout << "Norma e rritjes se qytetit A duhet te jete me e madhe" << endl;
    cout << "Norma e rritjes se qytetit A(%): ";
    cin >> normaRritjesA;
  }

  int vite = 0;
  while (numriBanoreveA < numriBanoreveB) {
    numriBanoreveA += numriBanoreveA * normaRritjesA / 100;
    numriBanoreveB += numriBanoreveB * normaRritjesB / 100;
    vite++;
  }

  cout << "Pas " << vite << " vitesh popullsia qytetit A > B." << endl;
  return 0;
}
