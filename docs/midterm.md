# Seksioni i Pyetjeve Teorike:

1.  Perfaqesimi dhe perpunimi i te dhenave ne Kompjuter.

```cpp
// Te dhenat ne kompjuter perfaqesohen ne menyre numerike duke perdorur sistemin binar (0 dhe 1). Te dhenat hyjne nga nje paisje hyrese si tastiera perpunohen ne CPU, ruhen ne RAM dhe shfaqen ne nje paisje dalje si monitori.
```

2.  Cfare quajme Program Kompjuterik, Programim, Editor, Kompilator, Linker dhe Kodim.

```cpp
// - Program Kompjuterik: Eshte nje set instruksionesh qe kryejne nje detyre te caktuar.
// - Programim: Procesi i krijimit te programit.
// - Editor: Mjet qe perdoret per te shkruar kodin.
// - Kompilator: Program qe konverton kodin burim ne kodin e kuptueshem nga kompjuteri.
// - Linker: Program qe lidh programin me librarite e tjera.
// - Kodim: Procesi i shkruarjes se kodit.
```

3.  Rregullat ne deklarimin e identifikatoreve.

```cpp
// - Duhet te jene te ndryshueshem nga fjale kyce te C++.
// - Mund te permbajne shkronja, numra dhe simbole.
// - Nuk mund te fillojne me nje numer.
// - Nuk mund te permbajne hapesira.
// - Nuk mund te jene fjale kyce te C++.
// - Duhet te jene te gjate te kufizuar.
// - Duhet te jene te kuptueshem.

// Identifikatoret te lejuara:
int a, b, c;
int a1, b2, c3;
int a_b, b_c, c_d;
int a1b, b2c, c3d;
int a1_b, b2_c, c3_d;
int a1b2c3;

// Identifikatoret te ndaluara:
int 1a, 2b, 3c;
int a b, b c, c d;
int a-b, b-c, c-d;

```

4.  Llojet e komenteve ne C++ // Komentet me nje rresht, /\* Komentet me shume rreshta \*\.

```cpp
// Komenti me nje rresht

/*
* Komenti
* me
* shume
* rreshta
*/

```

5.  Escape Characters.

    | Escape Character | Description           |
    | ---------------- | --------------------- |
    | `\n`             | New Line              |
    | `\t`             | Tab                   |
    | `\a`             | Bell                  |
    | `\b`             | Backspace             |
    | `\r`             | Carriage Return       |
    | `\f`             | Form Feed             |
    | `\v`             | Vertical Tab          |
    | `\\`             | Backslash             |
    | `\'`             | Single Quote          |
    | `\"`             | Double Quote          |
    | `\?`             | Question Mark         |
    | `\0`             | Null Character        |
    | `\nnn`           | Octal Character       |
    | `\xhh`           | Hexadecimal Character |

6.  Skedaret header qe mbajne manipulatoret dhe pa parametra.

```cpp
#include <iostream> // Permban manipulatoret dhe objektet e cin dhe cout.
#include <iomanip>  // Permban manipulatoret te cilat ndikojne ne formatimin e te dhenave.
#include <fstream>  // Permban objektet qe mundesojne manipulimin e skedareve.
#include <cstdlib>  // Permban funksione te cilat ndikojne ne ekzekutimin e programit.
#include <ctime>    // Permban funksione te cilat ndikojne ne manipulimin e kohes.
#include <cmath>    // Permban funksione matematikore.
#include <cstring>  // Permban funksione te cilat ndikojne ne manipulimin e stringjeve.
#include <cctype>   // Permban funksione te cilat ndikojne ne manipulimin e karaktereve.
#include <cstdio>   // Permban funksione te cilat ndikojne ne manipulimin e skedareve.
#include <cstdarg>  // Permban funksione te cilat ndikojne ne manipulimin e argumenteve te funksioneve.
#include <cstddef>  // Permban tipat e te dhenave te cilat ndikojne ne manipulimin e memorise.
#include <cfloat>   // Permban konstantet e cilat ndikojne ne manipulimin e numrave me presicion te kufizuar.
```

7.  Llojet e Operatoreve ne C++.

| Lloji i Operatoreve | Shembulli                        | Pershkrimi                                     |
| ------------------- | -------------------------------- | ---------------------------------------------- |
| Aritmetik           | `+`, `-,` `\*`, `/`, `%`         | Kryejne operacione aritmetike.                 |
| Inkrement/Dekrement | `++`, `--`                       | Rrisin ose zvogelojne vleren e nje variabli.   |
| Vleredhenie         | `=`                              | Vendosin vleren e nje variabli.                |
| Krahasimi           | `==`, `!=`, `>`, `<`, `>=`, `<=` | Krahasojne dy vlera.                           |
| Logjik              | `&&`, `\|\|`, `!`                | Kryejne operacione logjike.                    |
| Bitwise             | `&`, \|`, `^`, `~`, `<<`, `>>`   | Kryejne operacione bitwise.                    |
| Ternar              | `?:`                             | Kryejne operacione ternare.                    |
| Pointer             | `\*`, `->`                       | Kryejne operacione me pointer.                 |
| Adresa              | `&`                              | Kthen adresen e nje variabli.                  |
| sizeof              | `sizeof`                         | Kthen madhesine e nje tipi te te dhenave.      |
| Cast                | `(tipi)`                         | Kthen nje tip te te dhenave ne nje tip tjeter. |

9.  Tabelat e vertetesise se operatoreve logjik.

| A   | B   | A && B | A \|\| B | !A  |
| --- | --- | ------ | -------- | --- |
| 0   | 0   | 0      | 0        | 1   |
| 0   | 1   | 0      | 1        | 1   |
| 1   | 0   | 0      | 1        | 0   |
| 1   | 1   | 1      | 1        | 0   |

10. Strukturat kushtezuese (if, if-else, nested if, operatori kushtezues).

```cpp
if(kushti){
    //...
}
else if(kushti){
    //...
}
else{
    //...
}
```

11. Strukturat Ciklike (for, while, do...while, nested loops).

```cpp
// Struktura e ciklit for
for(int i = 0; i < 10; i++){
    //...
}

// Struktura e ciklit while
while(kushti){
    //...
}


// Struktura e ciklit do...while
do{
    //...
}while(kushti);

// Struktura for te nderthurura
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        //...
    }
}
```

# Seksioni i Pyetjeve Praktike:

12. Sa do te jete vlera perfundimtare e identifikatorit "a" pas ekzekutimit te instruksioneve te meposhtme:

```cpp
int a = 2, b = 3, c = 4;
b = a++;
c = --b;
a = c*b;
```

13. Vlera e shprehjes 17/2%3\*5/2.0 eshte:

```cpp
// ...
```

14. Sa do te jete vlera perfundimtare e identifikatorit "c" pas ekzekutimit te instruksioneve te meposhtme:

```cpp
int a = 4, c =5;
c = (a<2) ? (2-a) : (5/a);
cout << c;
```

15. Sa do te jete vlera perfundimtare e identifikatorit "c" pas ekzekutimit te instruksioneve te meposhtme:

```cpp
int a = 2, c = 3;
if(a>3)
 c+=a;
c++;
cout << c;
```

16. Bazuar ne instruksionet e meposhtme, cilat jane vlerat perfundimtare te variablave te plote **i** dhe **n**?

```cpp
n = 2;
i = 3;
i = n++;
```

17. Gjeni vlerat e shprehjet e meposhtme logjike, nese vlerat fillestare te variablave jane: a = 2, b = 3 dhe d = 5;

```cpp
c == a+b || c == d
a != 7 && c >= 6 || a+c <= 20
!(b <= 12) && a % 2 == 0
a<c/b || d%a==a
!(a >5) || c < a+b
```

18. Nese vlera fillestare e "x" eshte **2**, sa do te jene vlerat e variablave "a" dhe "b" pas ekzekutimit te kodit te meposhtem?

```cpp
a = 0, b = 0;
if(x < 2.1){
    a *= x;
    b -= 1;
}
```

19. Nese "y" ka vleren fillestare **3**, sa do te jete vlera e variablit "y" pas ekzekutimit te kodit te meposhtem?

```cpp
if(y < 2)
    y += 3;
else
    y /= 3;
y++;
```

20. Sa eshte vlera e identifikatorit "c" pas ekzekutimit te kodit te meposhtem

```
switch(x){
  case 1: c = 'A'; break;
  case 2: c = 'B'; break;
  case 3: c = 'C'; break;
  case 4: c = 'D'; break;
  default: c = 'F';
}
```

21. Sa eshte vlera perfundimtare e variablit "c" pas ekzekutimit te instruksioneve te meposhtme?

```cpp
int a = 2, b = 3, c;
c = ++b - a--;
```

22. Supozoni se x eshte nje ndryshore/variabel **int** atehere vlera e shprehjeve logjike te meposhtme jane:

```cpp
(x > 0) || (x <= 0)
(x >= 0) || (x == 0)
(x > 0) &&  (x <= 0)
(x > 0) && (x == 0)

```

23. Cila eshte vlera e e pare dhe e fundit e identifikatorit "i" qe do te shfaqet nga ekzekutimi i kodit te meposhtem?

```cpp
n = 50;
for(int i=n/3; i<n/2; i=i+2){
 //...
}
```

24. Bazuar ne kodin e meposhtem sa here rritet variabli shuma. Me fjale te tjera sa here ekzekutohet instruksioni ne rreshtin X?

```cpp
shuma = 0;
for(int i = 1; i <= 3; i++)
    for(int j = 1; j<=2; j++)
        shuma++; // Rreshti X
```
