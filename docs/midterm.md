# Seksioni i Pyetjeve Teorike:

01. Perfaqesimi dhe perpunimi i te dhenave ne Kompjuter.
02. Cfare quajme Program Kompjuterik, Programim, Editor, Kompilator, Linker dhe Kodim.
03. Rregullat ne deklarimin e identifikatoreve.
04. Llojet e komenteve ne C++ // Komentet me nje rresht, /_ Komentet me shume rreshta _/
05. Escape Characters.
06. Skedaret header qe mbajne manipulatoret dhe pa parametra.
07. Llojet e Operatoreve ne C++.
08. Percaktimi sipas tipit perkates te operatoreve qe perdoren ne C++.
09. Tabelat e vertetesise se operatoreve logjik.
10. Strukturat kushtezuese (if, if-else, nested if, operatori kushtezues).
11. Strukturat Ciklike (for, while, do...while, nested loops).

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
