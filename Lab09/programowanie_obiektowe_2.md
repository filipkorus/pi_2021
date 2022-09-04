# Lab 9

## Dynamiczna alokacja pamięci dla klas

1. Proszę poszerzyć kod z wykładu służący do dodawania wektorów (slajd 28 do 42) o wypisanie adresu wskaźników do klasy `Vector` oraz danych `data_`. Proszę dokładnie prześledzić, kiedy obiekty są tworzone i usuwane z pamięci. Rozwiązanie proszę zapisać jako plik `Lab9_4_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę poszerzyć kod z wykładu o wypisywanie adresów wskaźników dla kodu poprawnie wykonującego zwalnianie pamięci z wykorzystaniem każdego z przedstawionych rozwiązań: wskaźnik, referencja i konstruktor kopiujący (slajdy 43 do 50). Rozwiązanie proszę zapisać jako plik `Lab09_5_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę poszerzyć klasę wektor o możliwość przechowywania danych dla wektorów dłuższych od 1. Następnie proszę rozwiązać problem funkcji `add` z wykorzystaniem konstruktora kopiującego. Rozwiązanie proszę zapisać jako plik `Lab09_6_solved.cpp` i umieść w swojej gałęzi git.

## Dziedziczenie

1. Proszę stworzyć klasę `CD`, która posiada dane `content_` będące 10 elementową tablicą znaków oraz "świadomość" czy jest w czytniku. Dodatkowo klasa `CD` posiada metodę `read` odczytującą dane, jeżeli jest w czytniku i metodę `in_out` pozwalającą włożyć lub wyjąć czytnik z odtwarzacza. Będziemy też potrzebować konstruktor, dzięki któremu wpiszemy dane. Rozwiązanie proszę zapisać jako plik `Lab09_7_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę stworzyć klasę `CDRW`, która będzie dziedziczyć po klasie `CD` i dodatkowo implementować metodę `write`. Rozwiązanie proszę zapisać jako plik `Lab09_7_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę stworzyć klasę `BR`, która dziedziczy po klasie `CDRW`, ale posiada więcej miejsca na treść, tablica, zamiast dziesięcio powinna być dwudziesto elementowa. Rozwiązanie proszę zapisać jako plik `Lab09_7_solved.cpp` i umieść w swojej gałęzi git.

## Przeciążenie

1. Proszę zdefiniować klasę czas, która przechowuje czas jako liczba minut od 12 w nocy. Klasa powinna mieć przeciążony konstruktor, w którym możemy podać liczbę minut od 12 w nocy, lub godzinę i minutę, lub string w formacie `03:45` i metodę `print`. Rozwiązanie proszę zapisać jako plik `Lab09_1_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę dokończyć implementację klasy wektor zdefiniowanej na wykładzie. Rozwiązanie proszę zapisać jako plik `Lab09_2_solved.cpp` i umieść w swojej gałęzi git.

## Referencja

1. Proszę stworzyć klasę `Vec` o dwóch danych `x_` i `y_` i metodach `getX`, `getY`, `add_one` dodającej jeden do `x_` i `y_`. Następnie proszę napisać cztery funkcje, które używają metody `add_one` oraz wypisują na ekran wartości `x_` i `y_`, ale w różny sposób pobierają dane do funkcji. Sposób przekazywania danych do funkcji to: kopiowanie, wskaźnik, referencja oraz stała referencja. Jeżeli jakiś sposób przekazania nie działa, proszę go zakomentować i dodać opis czemu to nie działa. Proszę poza wypisaniem danych w funkcji wypisać dane przed i po wywołaniu funkcji. Następnie proszę dodać funkcje, których argumentami jest tablica obiektów `Vec` oraz jej długość. Dla każdego obiektu tablicy wykonujemy metodę `add_one` i wypisujemy otrzymane wartości. Który typ przekazania danych będzie poprawny? Rozwiązanie proszę zapisać jako plik `Lab09_3_solved.cpp` i umieść w swojej gałęzi git.
