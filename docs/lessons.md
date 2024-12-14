# Hyrje ne Algoritme dhe Programim

## Leksioni 1

Hyrje ne sistemet kompjuterike

### CPU dhe Memoria Kryesore

Te gjitha programet duhen te ngarkohen ne memorien kryesore perpara se te ekzekutohen sidhe gjitha te dhenat duhen te vendosen ne memorien kryesore perpara se te manipulohen.
Memoria kryesore eshte nje sekuence e renditur e qelizave te memories (cdo qelize permban instruksione ose te dhena dhe ka nje vendndodhje unike ne memorien kryesore qe quhet adresa e memories).

### Memoria dytesore

Paisje qe ruajne informacioin ne menyre permanente dhe mund te lexohen dhe shkruhen nga kompjuteri. Memoria dytesore eshte e nevojshme per te ruajtur te dhenat per nje kohe te gjate.

### Software

Programe kompjuterike jane te shkruara per te performuar detyra specifike, programet ndahen ne sisteme operative (monitoron aktivitetet e pergjithshme te kompjuterit) dhe programe aplikative (performojne detyra specifike si perpunim teksti, perpunim te dhenash dhe lojra).

### Gjuha e kompjuterit

- **Sinjali Analog:** forma valore e vazhdueshme qe ndryshon vazhdimisht.
- **Shifra binare(bit):** shifra 0 dhe 1 qe perdoren per te shprehur te dhenat.
- **Gjuha makine:** gjuhe qe kompjuteri e kupton, eshte e shkruar ne shifra binare.

### Zhvillimi i nje programi ne C++

Hapat qe nevojiten per krijimin e nje programi ne C++ jane:

1. Perdorni nje editor teksti per te krijuar nje kod burim ne C++.
2. Perfshini direktivat e paraprocesoreve dhe deklarimet e librave (libraria permban funksione te parashkruara).
3. Perdorni kompilatorin per te kontrolluar sintaksen dhe kompiuluar kodin burim.
4. Perdorni nje mjedis te integruar zhvillimi per te zhvilluar programe ne gjuhe te nivelit te larte.
5. Loader-i ngarkon programin ne memorien kryesore per ekzekutim.
6. Ekzekutimi i programit.

> Linkeri kombinon programin objekt me programet e tjera ne librari per te ekzekutuar kodin.

### Programim i strukturuar

- **Dizenjim i strukturuar:** Ndarja e problemit ne probleme me te vegjel.
- **Programim i strukturuar:** Perfshin implementimin e nje dizenjimi te strukturuar.
- **Dizenjimi i strukturuar** gjithashtu quhet: **Top-Down Design**, **Stepwise Refinement** dhe **modular programming**.

### Programim i dizenjuar ne objekte

Object Oriented Design (OOD) eshte nje metodologji e programimit qe perdor objekte per te modeluar sistemet dhe per te zgjidhur problemet.

### Programimi i orientuar ne objekte

Object Oriented Programming (OOP) eshte nje model programimi qe perdor objekte dhe klase per te projektuar dhe organizuar programe.

## Leksioni 2

Elementet baze te C++

### Baza e programimit ne C++

Rregullat e nje Gjuhe Programimi ndahen ne **Rregulla Sintaksore** dhe **Rregulla Semantike**.

- **Rregullat Sintaksore:** Rregulla qe specifikojne cilat deklarime (instruksione) jane te pranueshme ose te vlefshme.
- **Rregullat Semantike:** Percaktojne kuptimin e deklarimeve (instruksioneve-udhezimeve).
- **Nenprogrami:** Nje koleksion instruksionesh, komandash dhe udhezimesh qe kryejne nje detyre te caktuar.

### Komentet

Komentet jane per lexuesin jo per kompilatorin. Sherbejne per t'a bere me te kuptueshem kodin e programit.
Ndahen ne dy lloje:

- **Komente ne nje rresht:** Fillon me `//` dhe perfundon me fundin e rreshtit.
- **Komente me shume rreshta:** Fillon me `/*` dhe perfundon me `*/`.

### Fjale te rezervuara (keywords)

Fjalet e rezervuara jane fjale qe nuk mund te perdoren si emra te variablave, funksioneve ose klasave, disa shembuj jane:

- `int`
- `float`
- `double`
- `char`
- `if`
- `else`
- `while`
- `for`
- `do`
- `class`

### Identifikatoret

Nje **identifikator** eshte emri i nje entiteti qe shfaqet ne nje program si p.sh. emri i nje variabli, funksioni, klase, etj.
Identifikatoret perbehen nga shkronja, numra dhe simbole te vecanta si `_` dhe `#`, duhet te fillojne me nje shkronje ose nenvizim, nuk duhet te jete fjale kyce sidhe nuk mund te permbaje hapsira dhe simbole te vecanta.

Dy identifikatoret qe do te perdorim me teper jane **cout** dhe **cin**.

Ne ndryshim nga fjalet e rezervuara identifikatoret e paracaktuar mund te ripercaktohen por nuk eshte nje ide e mire.

| Identifikator i pa vlefshem | Arsyeja                                                | Identifikator i vlefshem |
| --------------------------- | ------------------------------------------------------ | ------------------------ |
| `employee Salary`           | Nuk mund te kete hapesire.                             | `employeeSalary`         |
| `Hello!`                    | Pikecuditja nuk mund te perdoret ne nje identifikator. | `Hello`                  |
| `one+two`                   | Simboli + nuk mund te perdoret ne nje identifikator.   | `onePlusTwo`             |
| `2nd`                       | Nje identifikator nuk mund te filloje me numer.        | `second`                 |

### Hapesirat

Hapesirat ndajne simbolet e vecanta, fjale te rezervuara dhe identifikatoret, perdorimi i duhur i hapesirave eshte shume i rendesishem.
Perdorimi i duhur i hapesirave eshte shume i rendesishem per ta bere kodin e programit me te lexueshem.

### Tipi/Lloji i te dhenave (Data Type)

Nje lloji i te dhenave eshte nje segment vlerash se bashku me nje grup operacionesh te lejuara qe mund te kryhen mbi to.

Llojet e te dhenave ne C++ ndahen ne tre kategori:

1. Lloje te dhenash primitive (te thjeshta si `integers`,`floating-point` dhe `enumeration`).
2. Lloje te dhenash te perbera (te strukturuara si `struct`,`class`,`union` dhe `enum`).
3. **Pointers** te cilet jane variabla qe ruajne adresen e nje variabli tjeter ne memorie ne vend te nje vlere.

### Operatoret Aritmetik

Operatoret aritmetik jane operatoret qe kryejne operacione mbi dy ose me shume operande dhe ata operatore jane:

- `+` per mbledhje
- `-` per zbritje
- `*` per shumezim
- `/` per pjestim
- `%` per pjestim me mbetje

`+`, `-`, `*`, dhe `/` mund te perdoren me llojet e te dhenave te numrave te plote (Integer) dhe numrave me presje (floating point).

Mbetja e pjestimit `%` mund te perdoret vetem me llojin e te dhenave integer.

### Perparesia e Operatoreve dhe Shprehjeve Matematikore

Kur perdorni karakterin slash se bashku me tipet e te dhenave integer, rezultati do te jete vetem pjesa e plote (pa rrumbullakosje).

- **Shprehjet aritmetike:** permbajne vlera dhe operator aritmetik.
- **Operandet:** jane numra qe marin pjese ne nje shprehje.
- **Operatoret:** kryejne veprime me operandet (operatoret mund te jene unary, binary ose ternary).

### Rendi i Perparesise se operatoreve

Perparesia e veprimeve kryesore me operatoret matematikore baze ne shprehjet ne C++ eshte:

- Te gjitha veprimet qe kryhen brenda kllapave () per nga renditja e perparesise jane te paret.
- Shumezimi `*`, pjestimi `/` dhe mbetja `%` jane ne te njejtin nivel perparesie dhe jane te renditur pas.
- Veprimi i mbledhjes `+` dhe zbritjes `-` jane ne te njejtin nivel perparesie dhe jane te renditur ne fund.
- Kur perparesia dhe renditja jane ne te njejtin nivel veprimet kryhen nga e majta ne te djathte.

### Konvertimi i Llojit te te Dhenave

**Konvertimi Implicit (i nenkuptuar):** kryhet kur vlera e nje tipi te te dhenave konvertonet ne menyre automatike ne nje vlere te nje lloji tjeter te dhene.

**Konvertimi Explicit (type conversion ose type casting):** Mundeson konvertimin eksplicit te nje tipi te dhene ne nje lloji tjeter.

```cpp
// sintaksa e konvertimit explicit
static_cast<data_type>(expression);
```

### Lloji i te Dhenave String

- Lloji i te dhenave **string** eshte e percaktuar nga programuesi mbeshtetur ne librarine standarte te C++ `ANSI/ISO`.
- Nje **string** eshte nje sekuence e zero ose me shume karaktereve te vendosura midis thonjezave te dyfishta `" "`.
- Nje string **null** (ose bosh) eshte nje string pa karaktere.
- Secili prej karaktereve ka nje pozicion relativ ne nje string (pozicioni i karakterit te pare eshte 0).
- Gjatesia e nje stringu eshte numri i karaktereve qe permban.

### Leximi i te Dhenave

- `cin` perdoret me `>>` per te marre nje apo me shume vlera nga perdoruesi.
  cin eshte nje instruksion per **futjen e te dhenave** dhe operatori per marrjen e bashkesise se karaktereve (stream extraction operator) `>>` perdoret per te lexuar vlerat nga perdoruesi.

```cpp
// leximi i nje vlere
cin >> variable;
// leximi i me shume se nje vlere
cin >> variable1 >> variable2 >> variable3;
```

### Operatoret Rrites dhe Zbrites

- **Operatori i rritjes `++`:** rrit vleren e nje variabli per nje.
- **Operatori i zbrites `--`:** zbre vleren e nje variabli per nje.

```cpp
// operatori i rritjes
variable++;
// operatori i zbrites
variable--;
```

### Shfaqja e te Dhenave

`cout` eshe nje instruksion per shfaqjen e te dhenave.

```cpp
// shfaqja e nje vlere
cout << "Hello World!";
```

Nje manipulator perdoret per te ndryshuar outputin (endl ben nderprerje te rreshtit aktual duke kaluar ne rresht te ri).

Karakteri per rresht te ri (new line escape sequence) eshte `\n` dhe mund te perdoret kudo ne varg.

Nje **escape sequence** eshte nje sekuence karakteresh qe nuk perfaqeson vetveten kur perdoret brenda nje karakteri ose vargu fjalesh, por perkthen ne nje karakter tjeter ose nje sekuence karakteresh qe mund te jete e veshtire ose e pamundur te perfaqesohet drejtperdrejte disa **escape sequences characters** jane:

| Escape Sequence | Pershkrimi        |
| --------------- | ----------------- |
| `\\`            | Backslash         |
| `\'`            | Single quote      |
| `\"`            | Double quote      |
| `\?`            | Question mark     |
| `\a`            | Bell              |
| `\b`            | Backspace         |
| `\f`            | Form feed         |
| `\n`            | New line          |
| `\r`            | Carriage return   |
| `\t`            | Horizontal tab    |
| `\v`            | Vertical tab      |
| `\0`            | Null character    |
| `\nnn`          | Octal value       |
| `\xhh`          | Hexadecimal value |

### Direktivat e Preprocessorit

- C++ ka nje numer te vogel veprimesh.
- Shume funksione dhe simbole qe nevojiten per te ekzekutuar nje program ne C++ jane te perfshira ne librarite e kesaj gjuhe.
- Cdo librari ka nje emer qe mund t'i referohesh nga nje **header file**.
- Direktivat e preprocessorit jane te perpunuara nga nje program i quajtur **preprocessor**.
- Direktiva me e njohur e preprocessorit eshte `<iostream>`.
- **cin** dhe **cout** jane dy objekte te klases **istream** dhe **ostream**.

### Perdorimi i Llojit te te Dhenave String ne nje Program

Per te perdorur llojin e te dhenave **string** duhet ta aksesojme ate nepermjet headerit **string**.

```cpp
#include <string>

string name = "John Doe";
```

### Formimi i nje Programi ne C++

Nje program ne C++ eshte nje bashkesi funksionesh, njeri prej te cileve eshte funksioni kryesor **main**.
Sintaksa e funksionit **main** eshte:

```cpp
int main (){
    return 0;
}
```

- **Kodi Burim** eshte i perbere nga direktivat e preprocessorit dhe instruksionet.
- **Skedari i kodit burim** permban kodin burim.
- Kompilatori gjeneron **kodin objekt**.
- Kodi i ekzekutueshem krijohet ne momentin qe object code eshte i lidhur me objektet Hardware dhe Software te sistemit (system resources).
- Nje program C++ permban dy lloje instruksionesh **deklarative** (instruksione qe deklarojne variabla) dhe **ekzekutuese** (instruksione te cilat kryejne llogaritje ose manipulojne te dhena).

### Avancime ne Instruksionet e Vleredhenjes

Kemi dy forma te vleredhenies te qe jane:

- Operatore te thjeshte: `+`, `-`, `*`, `/`, `%`.
- Operatore te perbere (compound): `+=`, `-=`, `*=`, `/=`, `%=`.

### Permbledhje (Leksioni 2)

- Nje program ne C++ eshte nje bashkesi funksionesh, ku funksioni kryesor eshte funksioni **main**.
- **Identifikatoret** perbehen nga shkronja, numra dhe nenvija dhe fillojne gjithmone me shkronje ose nenvije.
- **Operatoret aritmetike** jane mbledhja `+`, zbritja `-`, shumezimi `*`, pjestimi `/` dhe mbetja `%`.
- **Shprehjet aritmetike** ekzekutohen duke perdorur rregullat e perparesise.
- Te gjithe operatoret ne nje shprehje interger jane numra te plote.
- Te gjithe operatoret ne nje shprehje floating-point jane numra me presje.
- Nje instruksion i perziere permban dhe numra te plote dhe numra me presje.
- **Konvertimi i llojit te te dhenave** mund te jete implicit ose eksplicit.
- Nje konstante inicializohet ne momentin qe deklarohet.

## Leksioni 3

Input / Output

### Rrjedhat Hyrese/Dalese dhe Paisjet Standarte per I/O

Input/Output: sekuence bytesh nga burimi deri ne destinacion.

- **Rrjedha (Stream):** Sekuence karakteresh nga burimi ne destinacion.
- **Rrjedha Hyrese (Input Stream):** Sekuence karakteresh nga nje paisje hyrese drejt nje kompjuteri/njesie qendrore.
- **Rrjedha Dalese (Output Stream):** Sekuence karakteresh nga nje kompjuter/njesi qendrore drejt nje paisje dalese.

Per te marre te dhena nga tastiera dhe per t'i shfaqur ne ekran duhet te perdoret header file **iostream**.
Ky skedar permban perkufiszimet e dy tipeve te te dhenave: `istream` (Input Stream) dhe `ostream` (Output Stream).

### cin dhe operatori i nxjerrjes >>

**Sintaksa** per futjen e te dhenave me ane te `cin` dhe operatorit nxjerrjes `>>` eshte:

```cpp
cin >> "Hello World\n";
```

Operatori nxjerres `>>` eshte binar (pra manipulon dy operande).

// build table two cols and three rows

| Lloji i variablit | Vlere Hyrese e vlefshme per a                                                                                                                                                                  |
| ----------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `char`            | Nje karakter pervec hapsires boshe                                                                                                                                                             |
| `int`             | Nje numer i plote negativ apo pozitiv                                                                                                                                                          |
| `double`          | Numer me presje negativ ose pozitiv mundesisht i parandjekur nga shenja. Nese numri i futur eshte numer i plote, ai konvertohet ne numer me presje, ku shifra pas presjes dhjetore eshte zero. |

- Nese nje tip te dhene `char` vendoset nje vlere apo variabel `int` ose `double` shkaktohen probleme serioze qe quhen **Gabime ne Futjen e te Dhenave (Input Failure)**.

Kur lexohen te dhenat e nje variabli te tipit `char` `>>` injoron te gjitha hapsirat, gjen dhe ruan vetem karakterin pasardhes

Kur lexon te dhenat e variableve `int` dhe `double` injoron hapsirat, lexon shenjat + ose - (nese ka), lexon shifrat duke perfshire numrat me presje dhjetore apo floating point dhe ndalon kur ka hapsire apo nje karakter jo shifror.

### Perdorimi i Funksioneve te paracaktuar ne nje program

Nje funksion (nenprogram) eshte nje bashkesi instruksionesh. `main` ekzekutohet kur programi vihet ne pune. Funksionet e tjera ekzekutohen vetem kur thirren. C++ eshte i pasur me shume funksione.

- **Header file** mund te permbaje disa funksione.

- Per te perdorur nje **funksion te paracaktuar**, duhet te perdorim emrin e duhur te header file ku gjendet ky funksion.

- Per te perdorur nje funksion te paracaktuar gjithashtu duhet te dime: emrin, numrin e parametrave, radhen e parametrave, tipin e cdo parametri, cfare kryen funksioni dhe cfare lloji vlere kthen ai.

Per te perdorur funksionin e paracaktuar **pow**, duhet te perfshijme header file `cmath`.

### Funksioni cin dhe get

Variabli `cin` mund te aksesoje funksionin/metoden e rrjedhes get

Funksioni/metoda `get` perdoret per te lexuar **Karakterin** qe vjen menjehere me pas perfshi dhe **Hapesiren** nga Rrjedha Hyrese.

Sintaksa e funksionit cin dhe get:

```cpp
cin.get();
```

### Funksioni cin dhe ignore

Variabli `cin` mund te aksesoje funksionin e rrjedhes `ignore` (cin.ignore() sherben per te injoruar nje pjese te rrjedhes hyrese).

Sintaksa e funksionit `ignore` eshte:

```cpp
cin.ignore(intExp, chExp);
// intExp eshte nje shprehje e tipit int
// chExp eshte nje shprehje e tipit char
```

Nese intExp eshte nje vlere m, instruksioni ben te injorohen m karakteret paraardhes ose te gjitha deri ne karakterin e specifikuar nga chExp.

### Funksioni putback dhe peek

Funksioni putback vendos perseri karakterin e meparshem te hequr nga funksioni get nga nje rrjedhe hyrese, serish ne ate rrjedhe.

Funksioni peek kthen karakterin pasardhes nga rrjedha hyrese dhe nuk e heq karakterin nga ajo rrjedhe.

Sintaksa e funksionit putback dhe peek:

```cpp
// nje variabel i rrjedhes hyrese
isCtreamVar.putback(ch);
ch = isStreamVar.peek();
```

### Roli i pikes midis variablave te rrjedhes I/O dhe funksioneve I/O: Nje mase paraprake

`cin.get(ch);` cin dhe get jane dy identifikatore te ndryshem te ndare nga nje pike.

i ashtuquajturi dot notation ben ndarjen e emrit te variablave te rrjedhes hyrese nga emri i funksionit ose elementit.

Ne C++, pike eshte **operatori i aksesimit te anetarit**.

### Problematikat ne futjen e te dhenave

Nese te dhenat e futura nuk jane te njejta me tipin e variablit te deklaruar, programi mund te nxjerre probleme.

Nese perpiqeni te lexoni nje shkronje ne nje variabel `int` ose `double` do keni gabime ne futjen e te dhenave (input failure).

Nese ndodh nje gabim kur lexon te dhenat, Input Stream futet ne gjendje deshtimi.

### Funksioni clear

Nese programi hyn ne gjendjen e gabimit **Fail State**, te gjitha instruksionet e metejshme **injorohen**.

Programi vazhdon te ekzekutoje instruksionet pasardhese me cfaredo lloji vlere te ruajtur ne variabel me heret ose ne forme te rastesishme.

Funksioni `clear` riparon rrjedhen hyrese duke e kthyer ne nje gjendje pune.

Sintaksa e funksionit `clear`:

```cpp
isStreamVar.clear();
```

### Outputi dhe Formatimi i tij

Sintaksa e `cout` kur perdoret `<<` eshte:

```cpp
cout << expression or manipulator << expression or manipulator ... ;
```

Manipulatori perdoret per te formatuar outputin (shembull kemi endl).

### Manipulatori setprecision

Sintaksa e manipulatorit `setprecision` eshte:

```cpp
setprecision(n);
```

Shfaq numrat me presje n pas presjes dhjetore.

Argumenti **n** eshte numer i plote.

Ne program duhet te perfshihet headeri `iomanip`.

### Manipulatori fixed

- **fixed** shfaq numrat me presje ne nje format te rregulluar decimal (Mund t'a hiqni duke perdorur funksionin unsetf `cout.unsetf(ios::fixed);`.

- Manipulatori `scientific` shfaq numrat me presje ne formatin shkencor.

### Manipulatori showpoint

- **showpoint** mundeson shfaqjen e numrave me presje bashke me zerot pa vlere pas presjes dhjetore.

```cpp
cout << fixed << showpoint;
```

### Ndaresi i 14 shifrave ne C++

- Ne leximin dhe shkrimin e numrave shume te gjate mund te ndodhin dhe gabime.
- Ne C++ presjet nuk mund te perdoren per te ndare shifrat e numrave.
- C++ ka ndaresin e tij te shifrave (thonjezat teke 1'000'000).

### Manipulatori setw

- Shfaq vlerat e nje instruksioni ne nje numer te specifikuar kolonash.

```cpp
cout << setw(n) << x << endl;
```

- Nese numri i kolonave te percaktuara tejkalon numrin e kolonave qe ze rezultati i shprehjes rezultati vendoset ne te djathte dhe kolonat e paperdorura ne te majte mbeten bosh.

- Ne program duhet te perfshihet dhe headeri i file **iomanip**.

### Mjetet shtese te formatimit te output-it

- Disa mjete shtese qe na japin me teper mundesi per kontrollin e formatit te outputit jane: `setfill`, `left`, `right`, `unsetf`.

### Manipulatori setfill

- Variablat e rrjedhes dalese perdorin `setfill` per te mbushur me karaktere apo shenja kolonat e paperdorura.

```cpp
ostreamVar << setfill(ch);
cout << setfill("#")
```

### Manipulatoret left dhe right

- Manipulatori `left` shfaq rezultatin ne te majte.

```cpp
ostreamVar << left;
```

- `left` mund te caktivizohet duke perdorur `unsetf`.

```cpp
ostreamVar.unsetf(ios::left);
```

- Manipulatori `right` shfaq rezultatin ne te djathte.

```cpp
ostreamVar << right;
```

### Llojet e Manipulatoreve

- Ekzistojne dy lloje manipulatoresh per Rrjedhat Hyrese/Dalese, `me parametra` dhe `pa parametra`.

- Nese perdoren **Manipulatoret e Rrjedhave me Parametra** ne program duhet te perfshihet dhe skedari header **iomanip**.

- Nese perdoren **Manipulatoret e Rrjedhave pa Parametra** ne program duhet te perfshihet nga skedari header **iostream**.

### Input/Output dhe tipi i te dhenave string

- Nje variabel i rrjedhes hyrese si `cin` dhe operatori `>>` mund te lexojne nje string ne nje variabel te llojit string.

- Operatori i nxjerrjes (Extraction Operator) nuk mund te perdoret kur rrjedha hyrese permban hapsira sepse `>>` ndalon leximin e rrjedhes kur ka nje hapsire boshe.

- Perdoret funksioni `getline` i lexon gjithe rrjedhen hyrese deri ne fund te rreshtit aktual.

```cpp
getline(istreamVar, strVar);
```

### Debugging: Te kuptojme gabimet logjike dhe gjetjen e gabimeve me instruksionet cout

- Gabimet sintaksore percaktohen nga kompilatori.

- Ndersa gabimet logjike zakonisht nuk kapen nga kompilatori

### Skedaret Input/Output

Nje skedar eshte nje hapsire ne memorien dytesore ku ruhen informacione.

Leximi dhe Shkrimi ne skedare eshte nje **proces me pese hapa:**

1. Perfshini ne program skedarin header `fstream`.
2. Deklaroni variablat e file stream.
3. Shoqeroni variablat e skedarit file stream me burimet input/output - te referuara si **opening the files**.
4. Perdorni variablat e skedarit stream me `>>` , `<<` apo funksione te tjera input/output.
5. Mbyllni skedaret.

### Permbledhje (Leksioni 3)

- **Rrjedha:** Sekuence e pafundme karakteresh nga burimi ne destinacion.
- **Rrjedhe Hyrese:** nga burimi ne kompjuter.
- **Rrjedhe Dalese:** nga kompjuteri ne burim.
- **cin:** te dhenat hyrese standarte.
- **cout:** te dhenat dalese standarte.
- Per te perdurur **cin** dhe **cout**, duhet te prfshini skedarin header **iostream**.
- **get** lexon te dhenat karakter pas karakteri pa anashkaluar asnje karakter.
- **ignore** injoron leximin e te dhenave ne nje rresht.
- **putback** vendos perseri karakterin e fundit te marre nga funksioni get ne rrjedhen hyrese te te dhenave.
  **peek** kthen karakterin pasardhes te rrjedhes hyrese, por nuk e heq ate nga rrjedha.
- Perpjekja per te lexuar te dhena te pavlefshme brenda variablave shkakton gjendje gabimi.
- Manipulatoret `setprecision`, `fixed`, `showpoint`, `setw`, `setfill`, `left` dhe right mund te perdoren per te formatuar te dhenat dalese.
- Per te perdorur manipulatoret `setprecision`, `setw` dhe `setfill` ne program duhet te perfshihet skedari header **iomanip**.
- Skedari header **fstream** permban perkufizime per `ifstream` dhe `ofstream`.

## Leksioni 4

Strukturat e Kontrollit

### Strukturat Kushtezuese: if dhe if ... else

Nje shprehje qe rezultati vleresohet nese eshte `true` ose `false` quhet **shprehje logjike**.

**Strukturat Kushtezuese** ndryshojne rrjedhen e programit ne varesi te vleres se shprehjes logjike.

### Operatoret Relacional

Secili prej operatoreve **relacional** eshte nje operator **binar**.

Shprehjet qe perdorin **operatoret relacionale** vleresohen gjithmone si `true` ose `false`.

| Operator | Pershkrimi                    |
| -------- | ----------------------------- |
| `==`     | e barabarte me                |
| `!=`     | e ndryshme nga                |
| `>`      | me e madhe se                 |
| `<`      | me e vogel se                 |
| `>=`     | me e madhe ose e barabarte me |

### Krahasimi i karaktereve

Ne perdorimin e **Operatoreve Relacional** ne nje shprehje me vlerat char rezultati varet nga sekuenca e renditjes (ASCII) e karaktereve.

### Strukturat kushtezuese me nje dege

**Sintaksa** e struktures kushtezuese me nje dege eshte:

```cpp
if (shprehja)
    instruksioni;
```

Instruksioni brenda struktures kushtezuese do te ekzekutohet nese vlera e shprehjes eshte `true` ne te kundert programi shkon tek instruksioni pasardhes.

**shprehje** gjithashtu mund te quhet dhe **vendim-marresi**.

### Strukturat kushtezuese me dy dege

**Sintaksa** e struktures kushtezuese me dy dege eshte:

```cpp
if(shprehja)
    instruksioni1;
else
    instruksioni2;
```

Struktura kushtezuese me dy dege do te ekzekutoje instruksionin e pare nese eshte true ne te kundert do te ekzekutoje instruksionin e dyte.

### Lloji i te Dhenave int dhe Shprehjet Logjike

Versionet e meparshme te C++ nuk i perfshinin llojet e te dhenave built-in qe kishin vlera logjike **Boolean**.

Shprehjet logjike vleresohen me 1 ose 0, vlera e shprehjeve logjike ruhej ne variablin e tipit te te dhenave int.

Mund te perdorim tipin e te dhenave `int` per te manipuluar shprehjet logjike **Boolean**.

### Lloji i te Dhenave bool dhe Shprehjet Logjike

Tipi i te denave `bool` ka vlera logjike `true` dhe `false`.

`bool`, `true` dhe `false` jane fjale kyce te C++ (ku true ka vleren 1 dhe false 0).

### Operatoret Logjike dhe Shprehjet Logjike

Operatoret Logjike na mundesojne kombinimin e shprehjeve Logjike, pra sherbejne per ndertimin e kushteve komplekse.

Tabela e Operatoreve Logjike:

| Operator       | Pershkrimi        |
| -------------- | ----------------- |
| `!` (Unar)     | Operatori **NOT** |
| `&&` (Binar)   | Operatori **AND** |
| `\|\|` (Binar) | Operatori **OR**  |

### Rendi i Perparesise

- **Operatoret Relacionale** dhe **Operatoret Logjike** vleresohen nga e majta ne te djathte.

- Parantezat mund te ndryshojne rendin e perparesise.

Me poshte jepet tabela e perparesise se operatoreve te analizuar deri ne kete leksion:

| Operatori    | Rendi i Perparesise |
| ------------ | ------------------- |
| !, +, -      | E para              |
| ()           | E dyta              |
| \*, /, %     | E treta             |
| +, -         | E katerta           |
| <, <=, >, >= | E pesta             |
| ==, !=       | E gjashta           |
| &&           | E shtata            |
| \|\|         | E tetta             |
| =            | E fundit            |

Ne baze te instruksioneve te meposhtme analizojme vlerat e shprehjeve logjike:

```cpp
bool found = true;
int age = 20;
double hourse = 45.30;
double overTime = 15.00;
int count = 20;
char ch = 'A';
```

| Shprehja/Instruksioni        | Vlera/Kuptimi        |
| ---------------------------- | -------------------- |
| !found                       | E barabarte me false |
| hour > 40.00                 | E barabarte me true  |
| !found && (age >= 18)        | E barabarte me false |
| !(found && (age >=18))       | E barabarte me false |
| hours + overTime <= 70.00    | E barabarte me true  |
| count >= 0) && (count <= 100 | E barabarte me true  |
| ch <= 'A' && ch <= 'Z'       | E barabarte me true  |

### Operatoret Relacional dhe Lloji i te dhenave string

- Operatoret Relacional mund te perdoren edhe me variablat te llojit `string`.
  Stringjet krahasohen karakter pas karakteri, duke filluar nga karakteri i pare.
  Krahasimi vazhdon deri ne nje mosperputhje karakteresh ose deri kur te gjithe karakteret kane rezultuar te barabarte (te njejte).
  Nese krahasohen dy stringje me gjatesi te ndryshme dhe krahasimi ndalon ne karkaterin e fundit te stringut me te shkurter atehere **stringu me i shkurter eshte me i vogel se stringu me i gjate**.

- Ne baze te instruksioneve te meposhtme le te analizojme vlerat e shprehjeve logjike:

```cpp
string str1 = "Hello";
string str2 = "Hi";
string str3 = "Air";
string str4 = "Bill";
string str5 = "Big";
```

| Shprehja/Instruksioni | Vlera/Kuptimi                                      |
| --------------------- | -------------------------------------------------- |
| str1 < str2           | E barabarte me true                                |
| str1 > "Hen"          | E barabarte me false                               |
| str3 < "An"           | E barabarte me true                                |
| str1 == "hello"       | E barabarte me false                               |
| str3 <= str4          | E barabarte me true                                |
| str2 > str4           | E barabarte me true                                |
| str4 >= "Billy"       | E barabarte me false ("Bill " eshte me i shkurter) |

### Blloqet e instruksioneve

Nje bllok instruksionesh ka kete forme:

```cpp
instriksioni1;
instruksioni2;
// ...
// ...
// ...
instruksioni_n
```

Nje bllok instruksionesh funksionon si nje instruksion i vetem.

### Strukturat Kushtezuese te Nderthurura

Kur nje strukture kontrolli gjendet brenda nje strukture tjeter quhet **strukture kontrolli e nderthurur**.

Kur nje strukture kushtezuese gjendet brenda nje strukture tjeter, quhet **strukture kusthezuese e nderthurur**.

`else` shoqerohet me `if` me te afert te pashoqeruar me `else`.

```cpp
if(score >= 90)
    cout << "The grade is A." << endl;
else if (score >= 80)
    cout << "The grade is B." << endl;
else if (score >= 70)
    cout << "The grade is C." << endl;
else if (score >= 60)
    cout << "The grade is D." << endl;
else
    cout << "The grade is F." << endl;
```

### Vleresimi i Qarkut te Shkurter

Vleresimi i qarkut te shkurter (Short-circuit evaluation): Vleresimi i nje shprehje logjike ndalon sapo gjendet vlera e kesaj shprehje, pa qene e ndevojshme te vlersohen te gjitha nenshprehjet.

### Krahasimi i numrave Floating-Point per Barazine

Krahasimi i numrave floating-point per barazi, mund te mos kryhet ashtu sic do pritej:

```cpp
3.0/7.0 + 2.0/7.0 + 2.0/7.0 = 0.99999999999999989
```

Nje zhgjedhje eshte kontrolli per nje vlere tolerance si:

```cpp
if fabs (x-y) < 0.000001
```

### Shoqerimi i Operatoreve Relacional

```cpp
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Fusni nje numer te plote: " << endl;
    cin >> num;

    if(0 <= num <= 10)
        cout << num << " eshte mes 0 dhe 10." << endl;
    else
        cout << num << "nuk eshte mes 0 dhe 10." << endl;

    return 0;
}
```

### Shmangia e gabimeve duke shmangur konceptet dhe teknikat pjeserisht te kuptueshme

Konceptet dhe teknikat e nje gjuhe programimi duhen perdorur sakte ne te kundert zgjidhja do te jete e pasakte ose jo e plote.

Nese nuk e kuptoni teresishte nje teknike ose nje koncept mos e perdorni ate.

### Deshtimi ne futjen e te dhenave dhe instruksioni if

Nese nje rrjedhe hyrese (input stream) futet ne gjendje deshtimi te gjitha komandat per futjen e te dhenave pasardhese lidhura me ate rrjedhen injorohen, programi vazhdon te ekzekutohet dhe kodi numd te shaqe rezultate te gabuara.

Perdorni instruksionet `if` per te kontrolluar gjendjen e rrjedhes hyrese.
Nese rrjedha hyrese futet ne gjendje deshtimi, shtoni instruksione qe mundesojne ndalimin e ekzekutimit te programit.

### Ndryshimi mes barazise dhe operatorit te vleredhenies

C++ ju lejon te perdorni cfaredo lloji instruksioni qe vleresohet si `true` ose `false` ne nje strukture `if`.

```cpp
if (x = 5)
    cout << "Vlera eshte pese" << endl;
```

Shkruajtja e `=` ne vend te `==` eshte nje thike me dy presa (gabim logjik dhe jo sintaksor).

### Operatori Kushtezues `?:`

Operatori Ternar merr si argumente operande

```cpp
expression1 ? expression2 : expression3;
```

Nese shprehja e pare eshte e vertete rezultati i instruksionit kushtezues do te jete shprehja e dyte, ne te kundert do te jete shprehja e trete.

### Stili dhe Forma e Programit: Kryeradha

Nje program i shkruar sic duhet ju ndihmon te dalloni dhe ti rergulloni me shpejt gabimet dhe shfaq grupimin e sakte te instruksioneve.

Vendosni nje rresht bosh mes instruksioneve qe jane te ndara apo nuk kane lidhje me njeri-tjetrin.

Dy stilet me te perdorshme per vendosjen e kllapave:

- Secila kllape ne nje rresht me vete.

```cpp
if (expression)
{
    statement;
}
```

- Kllapa hapese vendoset ne nje rresht vetem, ndersa kllapa mbyllese vendoset ne fund te instruksioneve si rresht me vete

```cpp
if (expression) {
    statement;
}
```

### Perdorimi i pseudokodeve per te programuar, testuar dhe korigjuar nje program

- **Pseudokodi** eshte nje miksim joformal i gjuhes C++ me nje gjuhe tjeter te folur, na ndihmon te zhvillojme me shpejte strukturen e sakte te programit dhe te shmangim gabimet e zakonshme.

Nuk ekzekutohet ne kompjuter por te jep mundesine t'a mendosh dhe t'a projektosh nje program para se t'a shkruash.

### Struktura switch

Struktura `switch` eshte nje menyre tjeter per te zgjedhur nga disa opsione.

Ne `switch` ne fillim vleresohet instruksioni i pare.

Vlera e instruksionit vendos se cili rezultat do te shfaqet.

Ndonjehere instruksioni/shprehja quhet **perzgjedhja**.

Ne strukturen switch nje instruksion mund te kete nje ose me shume etiketa `case`.

Nuk ju nevojiten kllapa per te mbledhur nje grup instruksionesh ne nje instruksion te vetem.

Kur nje vlere `case` perputhet me kushtin, te gjithe kushtet e tjera vazhdojne te ekzekutohen deri ne momentin qe vendoset nje instruksion `break`.

Mund ta vendosni instruksionin `break` ne fund te cdo instruksione ose ne fund te te gjithe instruksioneve.

`switch`, `case`, `break` dhe `default` jane fjale te rezervuara.

```cpp
switch (expression)
{
    case constant1:
        statement;
        break;
    case constant2:
        statement;
        break;
    // ...
    // ...
    // ...
    default:
        statement;
}
```

### Perfundimi i nje programi me ane te funksionit assert

Disa lloje gabimesh jane shume te veshtira per t'u gjetur (pjestimi me 0).

Funksioni `assert` sherben per te ndaluar programin kur ndodhin gabime te ketilla.

```cpp
#include <cassert>

int main(){
    int x = 0;
    assert(x != 0);
    return 0;
}
```

Nese expression vleresohet si `true` atehere ekzekutohet instruksione i radhes.

Nese expression vleresohet si `false` programi perfundon dhe tregon se ku ka ndodhur gabimi ne program.

`assert` perdoret per te zbatuar kufizime ne programim gjate ndertimit te nje programi.

Pasi te keni testuar programin, hiqni instruksionin `assert`.

Direktiva e preprocessor-it `#define NDEBUG` duhet te vendoset para direktives `#include <cassert>` per te caktivizuar funksionin `assert`.

### Permbledhje (Leksioni 4)

- Strukturat e kontrollit ndryshojne rrjedhen normale te kontrollit.
- Strukturat e kontrollit me te perdorura jane strukturat kushtezuese dhe strukturat ciklike.
- Operatoret relacionale jane: `==`, `!=`, `>`, `<`, `>=`, `<=`.
- Shprehjet logjike vleresohen si 1, e vertete ose 0, e gabuar.
- Operatoret Logjik jane: `!`, `&&`, `||`
- Strukturat kushtezuese mund te jene me nje ose me dy dege.
- Nje strukture kushtezuese brenda nje strukture tjeter formon nje strukture kushtezuese te nderthurur.
- Shprehja brenda nje `if` apo nje `if`...`else` eshte zakonisht nje shprehje logjike.
- `else` nuk qendron asnjehere vetem ne nje instruksion ne C++. Cdo `else` ka nje `if`.
- Nje bashkesi instruksiones te mbylluar me kllapat gjarperushe quhet ndryshe nje bllok instruksionesh.
- Perdorimi i operatorit te vleredhenies ne vend te operatorit te barazise krijon **problem semantik**.
- Ekzekutimi i struktures `switch` permban shume rruge.
- Ekzekutimi i komandes `break` perfundon/mbyll nje komand switch.
- Perdorimi i `assert` perfundon programin nese has ne gabime qe jane te veshtira per tu gjetur.
