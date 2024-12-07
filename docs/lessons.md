# Leksioni 1 - Hyrje ne Sistemet Kompjuterike dhe Gjuhet e Programimit

## CPU dhe Memoria Kryesore

Te gjitha programet duhen te ngarkohen ne memorien kryesore perpara se te ekzekutohen sidhe gjitha te dhenat duhen te vendosen ne memorien kryesore perpara se te manipulohen.
Memoria kryesore eshte nje sekuence e renditur e qelizave te memories (cdo qelize permban instruksione ose te dhena dhe ka nje vendndodhje unike ne memorien kryesore qe quhet adresa e memories).

## Memoria dytesore

Paisje qe ruajne informacioin ne menyre permanente dhe mund te lexohen dhe shkruhen nga kompjuteri. Memoria dytesore eshte e nevojshme per te ruajtur te dhenat per nje kohe te gjate.

## Software

Programe kompjuterike jane te shkruara per te performuar detyra specifike, programet ndahen ne sisteme operative (monitoron aktivitetet e pergjithshme te kompjuterit) dhe programe aplikative (performojne detyra specifike si perpunim teksti, perpunim te dhenash dhe lojra).

## Gjuha e kompjuterit

- **Sinjali Analog:** forma valore e vazhdueshme qe ndryshon vazhdimisht.
- **Shifra binare(bit):** shifra 0 dhe 1 qe perdoren per te shprehur te dhenat.
- **Gjuha makine:** gjuhe qe kompjuteri e kupton, eshte e shkruar ne shifra binare.

## Zhvillimi i nje programi ne C++

Hapat qe nevojiten per krijimin e nje programi ne C++ jane:

1. Perdorni nje editor teksti per te krijuar nje kod burim ne C++.
2. Perfshini direktivat e paraprocesoreve dhe deklarimet e librave (libraria permban funksione te parashkruara).
3. Perdorni kompilatorin per te kontrolluar sintaksen dhe kompiuluar kodin burim.
4. Perdorni nje mjedis te integruar zhvillimi per te zhvilluar programe ne gjuhe te nivelit te larte.
5. Loader-i ngarkon programin ne memorien kryesore per ekzekutim.
6. Ekzekutimi i programit.

> Linkeri kombinon programin objekt me programet e tjera ne librari per te ekzekutuar kodin.

## Programim i strukturuar

- **Dizenjim i strukturuar:** Ndarja e problemit ne probleme me te vegjel.
- **Programim i strukturuar:** Perfshin implementimin e nje dizenjimi te strukturuar.
- **Dizenjimi i strukturuar** gjithashtu quhet: **Top-Down Design**, **Stepwise Refinement** dhe **modular programming**.

## Programim i dizenjuar ne objekte

Object Oriented Design (OOD) eshte nje metodologji e programimit qe perdor objekte per te modeluar sistemet dhe per te zgjidhur problemet.

## Programimi i orientuar ne objekte

Object Oriented Programming (OOP) eshte nje model programimi qe perdor objekte dhe klase per te projektuar dhe organizuar programe.

# Leksioni 2 - Elementet Baze te C++

## Baza e programimit ne C++

Rregullat e nje Gjuhe Programimi ndahen ne **Rregulla Sintaksore** dhe **Rregulla Semantike**.

- **Rregullat Sintaksore:** Rregulla qe specifikojne cilat deklarime (instruksione) jane te pranueshme ose te vlefshme.
- **Rregullat Semantike:** Percaktojne kuptimin e deklarimeve (instruksioneve-udhezimeve).
- **Nenprogrami:** Nje koleksion instruksionesh, komandash dhe udhezimesh qe kryejne nje detyre te caktuar.

## Komentet

Komentet jane per lexuesin jo per kompilatorin. Sherbejne per t'a bere me te kuptueshem kodin e programit.
Ndahen ne dy lloje:

- **Komente ne nje rresht:** Fillon me `//` dhe perfundon me fundin e rreshtit.
- **Komente me shume rreshta:** Fillon me `/*` dhe perfundon me `*/`.

## Fjale te rezervuara (keywords)

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

## Identifikatoret

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

## Hapesirat

Hapesirat ndajne simbolet e vecanta, fjale te rezervuara dhe identifikatoret, perdorimi i duhur i hapesirave eshte shume i rendesishem.
Perdorimi i duhur i hapesirave eshte shume i rendesishem per ta bere kodin e programit me te lexueshem.

## Tipi/Lloji i te dhenave (Data Type)

Nje lloji i te dhenave eshte nje segment vlerash se bashku me nje grup operacionesh te lejuara qe mund te kryhen mbi to.

Llojet e te dhenave ne C++ ndahen ne tre kategori:

1. Lloje te dhenash primitive (te thjeshta si `integers`,`floating-point` dhe `enumeration`).
2. Lloje te dhenash te perbera (te strukturuara si `struct`,`class`,`union` dhe `enum`).
3. **Pointers** te cilet jane variabla qe ruajne adresen e nje variabli tjeter ne memorie ne vend te nje vlere.

## Operatoret Aritmetik

Operatoret aritmetik jane operatoret qe kryejne operacione mbi dy ose me shume operande dhe ata operatore jane:

- `+` per mbledhje
- `-` per zbritje
- `*` per shumezim
- `/` per pjestim
- `%` per pjestim me mbetje

`+`, `-`, `*`, dhe `/` mund te perdoren me llojet e te dhenave te numrave te plote (Integer) dhe numrave me presje (floating point).

Mbetja e pjestimit `%` mund te perdoret vetem me llojin e te dhenave integer.

## Perparesia e Operatoreve dhe Shprehjeve Matematikore

Kur perdorni karakterin slash se bashku me tipet e te dhenave integer, rezultati do te jete vetem pjesa e plote (pa rrumbullakosje).

- **Shprehjet aritmetike:** permbajne vlera dhe operator aritmetik.
- **Operandet:** jane numra qe marin pjese ne nje shprehje.
- **Operatoret:** kryejne veprime me operandet (operatoret mund te jene unary, binary ose ternary).

## Rendi i Perparesise

Perparesia e veprimeve kryesore me operatoret matematikore baze ne shprehjet ne C++ eshte:

- Te gjitha veprimet qe kryhen brenda kllapave () per nga renditja e perparesise jane te paret.
- Shumezimi `*`, pjestimi `/` dhe mbetja `%` jane ne te njejtin nivel perparesie dhe jane te renditur pas.
- Veprimi i mbledhjes `+` dhe zbritjes `-` jane ne te njejtin nivel perparesie dhe jane te renditur ne fund.
- Kur perparesia dhe renditja jane ne te njejtin nivel veprimet kryhen nga e majta ne te djathte.

## Konvertimi i Llojit te te Dhenave

**Konvertimi Implicit (i nenkuptuar):** kryhet kur vlera e nje tipi te te dhenave konvertonet ne menyre automatike ne nje vlere te nje lloji tjeter te dhene.

**Konvertimi Explicit (type conversion ose type casting):** Mundeson konvertimin eksplicit te nje tipi te dhene ne nje lloji tjeter.

```cpp
// sintaksa e konvertimit explicit
static_cast<data_type>(expression);
```

## Lloji i te Dhenave String

- Lloji i te dhenave **string** eshte e percaktuar nga programuesi mbeshtetur ne librarine standarte te C++ `ANSI/ISO`.
- Nje **string** eshte nje sekuence e zero ose me shume karaktereve te vendosura midis thonjezave te dyfishta `" "`.
- Nje string **null** (ose bosh) eshte nje string pa karaktere.
- Secili prej karaktereve ka nje pozicion relativ ne nje string (pozicioni i karakterit te pare eshte 0).
- Gjatesia e nje stringu eshte numri i karaktereve qe permban.

## Leximi i te Dhenave

- `cin` perdoret me `>>` per te marre nje apo me shume vlera nga perdoruesi.
  cin eshte nje instruksion per **futjen e te dhenave** dhe operatori per marrjen e bashkesise se karaktereve (stream extraction operator) `>>` perdoret per te lexuar vlerat nga perdoruesi.

```cpp
// leximi i nje vlere
cin >> variable;
// leximi i me shume se nje vlere
cin >> variable1 >> variable2 >> variable3;
```

## Operatoret Rrites dhe Zbrites

- **Operatori i rritjes `++`:** rrit vleren e nje variabli per nje.
- **Operatori i zbrites `--`:** zbre vleren e nje variabli per nje.

```cpp
// operatori i rritjes
variable++;
// operatori i zbrites
variable--;
```

## Shfaqja e te Dhenave

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

## Direktivat e Preprocessorit

- C++ ka nje numer te vogel veprimesh.
- Shume funksione dhe simbole qe nevojiten per te ekzekutuar nje program ne C++ jane te perfshira ne librarite e kesaj gjuhe.
- Cdo librari ka nje emer qe mund t'i referohesh nga nje **header file**.
- Direktivat e preprocessorit jane te perpunuara nga nje program i quajtur **preprocessor**.
- Direktiva me e njohur e preprocessorit eshte `<iostream>`.
- **cin** dhe **cout** jane dy objekte te klases **istream** dhe **ostream**.

## Perdorimi i Llojit te te Dhenave String ne nje Program

Per te perdorur llojin e te dhenave **string** duhet ta aksesojme ate nepermjet headerit **string**.

```cpp
#include <string>

string name = "John Doe";
```

## Formimi i nje Programi ne C++

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

## Avancime ne Instruksionet e Vleredhenjes

Kemi dy forma te vleredhenies te qe jane:

- Operatore te thjeshte: `+`, `-`, `*`, `/`, `%`.
- Operatore te perbere (compound): `+=`, `-=`, `*=`, `/=`, `%=`.

## Permbledhje

- Nje program ne C++ eshte nje bashkesi funksionesh, ku funksioni kryesor eshte funksioni **main**.
- **Identifikatoret** perbehen nga shkronja, numra dhe nenvija dhe fillojne gjithmone me shkronje ose nenvije.
- **Operatoret aritmetike** jane mbledhja `+`, zbritja `-`, shumezimi `*`, pjestimi `/` dhe mbetja `%`.
- **Shprehjet aritmetike** ekzekutohen duke perdorur rregullat e perparesise.
- Te gjithe operatoret ne nje shprehje interger jane numra te plote.
- Te gjithe operatoret ne nje shprehje floating-point jane numra me presje.
- Nje instruksion i perziere permban dhe numra te plote dhe numra me presje.
- **Konvertimi i llojit te te dhenave** mund te jete implicit ose eksplicit.
- Nje konstante inicializohet ne momentin qe deklarohet.