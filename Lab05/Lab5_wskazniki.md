# Rozwiązywanie konfliktów w git

Do konfliktu dochodzi w momencie gdy
- Chcemy zrobić merge dwóch gałęzi 
- Chcemy zrobić push lub pull, a wersja lokalna i zdalna są skonfliktowane

Konflikt to sytuakcja, w której istnieją dwie różne wersje tekstu. Konieczność ręcznego rozwiązania konfliktu ma miejsce wtedy, gdy mechanizmy git nie są w stanie automatycznie połączyć dwóch różnych wersji.

W poniższym przykładzie git połączy obie wersje - ponieważ jest w stanie dokonać analizy tekstu i potrafi wykryć, że w tekście drugim dodano dodatkową linię. Wynikiem automatycznego scalenia będzie drugi tekst

Tekst1:
```cpp 
main(){
  cout<<"Paczki sa dobre"<<endl;
}
```
Tekst 2:
```cpp
main(){
  cout<<"Precelki sa smaczne"<<endl;
  cout<<"Paczki sa dobre"<<endl;
}
```

W poniżym przykładzie git nie będzie w stanie automatycznie rozwikłać konfliktu, poniewaź nie wie, któa wersja jest prawidłowa:

Tekst1:
```cpp 
main(){
  cout<<"Paczki sa dobre"<<endl;
}
```
Tekst 2:
```cpp
main(){
  cout<<"Paczki sa niesmaczne"<<endl;
}
```

Rezultatem tego konfliktu będzie utworzenie pliku o następującej zawartości:

```cpp 
main(){
<<<<<<< HEAD    
  cout<<"Paczki sa dobre"<<endl;
=======
  cout<<"Paczki sa niesmaczne"<<endl;
>>>>>>> nazwaGalezi
}
```
To co jest między znacznikami `<<<<<<< HEAD` a `=======` to stan z naszego brancha zaś poniżej, pomiędzy `=======` a `>>>>>>> nazwaGalezi` to stan z gałęzi, z którą łączymy. W tej sytuacji musimy plik wyedytować, wybrać właściwą wersję i usunąć znaczniki.

>>Istnieją narzędzia wspomagające dobrym interfejsem usuwanie konfliktów jak na przykład meld lub p4merge. Wywołanie narzędzia poleceniem `git mergetool` - oczywiście po poprzednim zainstalowaniu narzędzia i skonfigurowaniem gita poleceniem `git config --global merge.tool`

# Tablice

1. Proszę skompilować kod `Lab5_1.cpp`. Czy kod wykonuje się poprawnie? Proszę zmienić kod tak, aby wyświetlać jedynie zawartość tabel. Dla lepszego zrozumienia problemu proszę dopisać nieskończoną pętlę `while` wypisującą kolejne elementy tablicy w postaci `id: , wartosc: `. Proszę zobaczyć, że program zawsze zgłosi błąd. Rozwiązanie proszę zapisać jako plik `Lab5_1_solved.cc` i umieść w swojej gałęzi git.
1. Proszę napisać program który wypełnia tablicę kwadratami liczb od 1 do 10. Następnie proszę wypisać kwadraty liczb występujących w tablicy `tab[] = {1, 5, 3, 10};`. Proszę zachować kolejność z tablicy `tab`. Rozwiązanie proszę zapisać jako plik `Lab5_2_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program w którym deklarowana jest tablica intów. Następnie proszę obliczyć i wypisać, sumę, minimum, maksimum i wartość średnią wszystkich elementów tablicy. Rozwiązanie proszę zapisać jako plik `Lab5_3_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę stworzyć tablicę dwuwymiarową z wynikami tabliczki mnożenia liczb od 1 do 10. Proszę wypisać ją na ekran, może być pomocny znak tabulacji `\t`. Rozwiązanie proszę zapisać jako plik `Lab5_4_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę rozbudować kod `Lab5_5.cpp`, dopisując przypisanie zmiennej `au` do drugiego elementu tablicy oraz obliczając długość tablicy z wykorzystaniem funkcji `sizeof()`. Rozwiązanie proszę zapisać jako plik `Lab5_5_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę policzyć liczbę wystąpień każdej cyfry w tablicy `digits` w pliku `Lab5_6.cpp`. Rozwiązanie proszę zapisać jako plik `Lab5_6_solved.cpp` i umieść w swojej gałęzi git.

# Wskaźniki

1. Proszę zmodyfikować kod `Lab5_7.cpp`, dodając opis, co znaczą wypisane liczby. Dodatkowo proszę dopisać wypisanie wartości elementów tablicy. Proszę zmienić tablicę z `int` na `double` oraz `char` (dla zmiennej `char` trzeba przy wyświetleniu rzutować wskaźnik za pomocą `(void *)`) i zobaczyć co się zmieni. Rozwiązanie proszę zapisać jako plik `Lab5_7_solved.cpp` i umieść w swojej gałęzi git.
1. Które z przypisań w pliku `Lab5_8.cpp` są poprawne. Proszę wykomentować błędne linie kodu oraz dopisać komentarz do każdego przypisania. Proszę wypisać:
* wartości zmiennej,
* adres zmiennej,
* adres wskazywany przez wskaźnik
* wartość wskaźnika.

Rozwiązanie proszę zapisać jako plik `Lab5_8_solved.cpp` i umieść w swojej gałęzi git.

3. Proszę napisać kod, w którym zmienna jest zmodyfikowana z wykorzystaniem wskaźnika, a nie samej zmiennej. Proszę wypisać wartość zmiennej przed i po modyfikacji. Wypisanie też powinno wykorzystać wskaźnik. Rozwiązanie proszę zapisać jako plik `Lab5_9_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program, w którym mamy zadeklarowaną tablicę `char`, która zawiera napis posiadający minimum dwa słowa. Następnie z wykorzystaniem wskaźników do `char` proszę wypisać cały napis oraz z pominięciem pierwszego słowa. Rozwiązanie proszę zapisać jako plik `Lab5_10_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę zmodyfikować kod `Lab5_5_solved.cpp` i wykorzystać wskaźniki wraz z odpowiednim sposobem odwołania się do struktur.
1. Proszę sprawdzić co się stanie, jeżeli wskaźnik wskazuje zmienną, której nie ma. Proszę wykorzystać deklarację zmiennej wewnątrz pętli lub warunku. Rozwiązanie proszę zapisać jako plik `Lab5_11_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napiać kod wypisujący elementy tablicy z wykorzystaniem inkrementacji wskaźników. Proszę przy okazji wypisywania elementów tablicy wypisać adresy wskazywane przez wskaźnik. Proszę zrobić to dla dwóch różnych typów i własnej strukury. Rozwiązanie proszę zapisać jako plik `Lab5_12_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program zmieniający kolejność elementów w tablicy (pierwszy staje się ostatnim, drugi przedostatnim itd.) z wykorzystaniem wskaźników. Proszę zrobić to dla dwóch różnych typów i własnej struktury. Rozwiązanie proszę zapisać jako plik `Lab5_13_solved.cpp` i umieść w swojej gałęzi git.
1. **Dla ambitnych.** Proszę zadeklarować tablicę wskaźników, w której każdy wskaźnik wskazuje na coraz większą tablicę (od 1 do 4 elementów). Tablica z 4 elementami powinna mieć pewne liczby, tablica z trzema elementami posiada dwa pierwsze elementy tablicy większej i sumę dwóch ostatnich elementów. Podobnie tablica o długości 2 i 1. Proszę zainicjalizować tą tablicę oraz wyświetlić ją z wykorzystaniem wskaźników. Rozwiązanie proszę zapisać jako plik `Lab5_14_solved.cpp` i umieść w swojej gałęzi git.

# Zadania programistyczne

1. Napisz kod wyświetlający wszystkie możliwe permutacje podanego przez użtkownika ciągu znaków. Zaimplementuj kod przy użyciu wskaźników.
2. Napisz kod implementujący 10-elementową tablicę losowych zmiennych typu integer. Użytkownik wskazuje dwa indeksy. Następnie zmienne spod wskazanych przez użytkownika indeksów są zamieniane. Zaimplementuj kod przy użyciu wskaźników.
3. Napisz program implmenetujący 10 - elementową tablicę zmiennych typu integer. Zaimplementuj dowolny algorytm sortowania tablicy przy użyciu wskaźników.
