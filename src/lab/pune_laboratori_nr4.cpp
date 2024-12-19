#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int p4ex01() {
  int x;
  string mesazhi;

  cout << "Nje numer te plote: ";
  cin >> x;

  if (x > 0) {
    mesazhi = "Pozitiv";
  } else if (x < 0) {
    mesazhi = "Negativ";
  } else {
    mesazhi = "Zero";
  }

  cout << mesazhi << endl;

  return 0;
}

int p4ex02() {
  int x;

  cout << "Jepni nje numer: ";
  cin >> x;

  int y = x >= 5 ? 2 * x : 2 + x;
  cout << "Rezultati: " << y << endl;

  return 0;
}
int p4ex03() {
  int num1, num2;
  char veprimi;

  cout << "Jepni dy numra: ";
  cin >> num1 >> num2;

  cout << "Operatori (+, -, *, /): ";
  cin >> veprimi;

  switch (veprimi) {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
  case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    break;
  default:
    cout << "Vdiqe!" << endl;
    break;
  }

  return 0;
}

int p4ex04() {

  int kohezgjatjaParkimit;
  string mesazhi;

  cout << "Oret e parkimit: ";
  cin >> kohezgjatjaParkimit;

  if (kohezgjatjaParkimit >= 0 && kohezgjatjaParkimit <= 3) {
    mesazhi = "Fatura: 200 Leke";
  } else if (kohezgjatjaParkimit > 3) {
    mesazhi = "Fatura: 500 Leke";
  } else if (kohezgjatjaParkimit > 8) {
    mesazhi = "Fatura: 800 Leke";
  } else if (kohezgjatjaParkimit > 12) {
    mesazhi = "Fatura: 500 Leke";
  } else {
    mesazhi = "Numer pozitiv";
  }
  cout << mesazhi << endl;

  return 0;
}

int p4ex05() {
  int pagaBaze, vitePune, shitjetTotale, bonus = 0;

  cout << "Paga baze: ";
  cin >> pagaBaze;

  cout << "Vite pune: ";
  cin >> vitePune;

  cout << "Shitjet totale: ";
  cin >> shitjetTotale;

  if (vitePune > 0 && vitePune <= 5) {
    bonus += vitePune * 10;
  } else if (vitePune > 5) {
    bonus += vitePune * 20;
  }

  if (shitjetTotale >= 5'000 && shitjetTotale < 10'000) {
    bonus += shitjetTotale * 0.03;
  } else if (shitjetTotale >= 10'000) {
    bonus += shitjetTotale * 0.06;
  }

  cout << "Paga baze: $" << pagaBaze << endl
       << "Bonus: $" << bonus << endl
       << "Paga totale: $" << pagaBaze + bonus << endl;

  return 0;
}

int p4ex06() {
  int piket, sistemiShqipetar;
  string letterGrade, description;
  double GPA;

  do {
    cout << "Piket (0-100): ";
    cin >> piket;
  } while (piket < 0 || piket > 100);

  if (piket >= 90) {
    letterGrade = "AA";
    description = "EXCELLENT";
    sistemiShqipetar = 10;
    GPA = 4.0;
  } else if (piket >= 85) {
    letterGrade = "BA";
    description = "EXCELLENT";
    sistemiShqipetar = 9;
    GPA = 3.5;
  } else if (piket >= 80) {
    letterGrade = "BB";
    description = "SUCCESS";
    sistemiShqipetar = 8;
    GPA = 3.0;
  } else if (piket >= 75) {
    letterGrade = "CB";
    description = "SUCCESS";
    sistemiShqipetar = 8;
    GPA = 2.5;
  } else if (piket >= 70) {
    letterGrade = "CC";
    description = "SUCCESS";
    sistemiShqipetar = 7;
    GPA = 2.0;
  } else if (piket >= 65) {
    letterGrade = "DC";
    description = "ON PROBATION";
    sistemiShqipetar = 6;
    GPA = 1.5;
  } else if (piket >= 60) {
    letterGrade = "DD";
    description = "ON PROBATION";
    sistemiShqipetar = 5;
    GPA = 1.0;
  } else if (piket >= 50) {
    letterGrade = "FD";
    description = "FAIL";
    sistemiShqipetar = 4;
    GPA = 0.5;
  } else {
    letterGrade = "F";
    description = "FAIL";
    sistemiShqipetar = 0;
    GPA = 0.0;
  }

  cout << "Piket: " << piket << endl
       << "Nota: " << letterGrade << endl
       << "Pershkrimi: " << description << endl
       << "Sistemi Shqipetar: " << sistemiShqipetar << endl
       << "GPA: " << GPA << endl;

  return 0;
}

int p4ex07() {
  int num1, num2, num3;
  cout << "Jepni tre numra: ";
  cin >> num1 >> num2 >> num3;

  // Metoda swap na lejon te ndryshojme vlerat e variablave
  if (num1 > num2) {
    swap(num1, num2);
  }
  if (num1 > num3) {
    swap(num1, num3);
  }
  if (num2 > num3) {
    swap(num2, num3);
  }

  cout << "Renditja: " << num1 << " " << num2 << " " << num3 << endl;

  return 0;
}

int p4ex07_2() {
  int num1, num2, num3;
  cout << "Jepni tre numra: ";
  cin >> num1 >> num2 >> num3;

  // Arithmeitc swap
  if (num1 > num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }
  if (num2 > num3) {
    num2 = num2 + num3;
    num3 = num2 - num3;
    num2 = num2 - num3;
  }
  if (num1 > num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }

  cout << num1 << " " << num2 << " " << num3 << endl;
  return 0;
}
