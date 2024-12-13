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

### Rendi i Perparesise

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

### Permbledhje

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

### Permbledhje

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
