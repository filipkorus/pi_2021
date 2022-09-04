# New, Delete i funkcje

## 1. Operatory New i Delete

1. Proszę napisać kod implementujący strukturę `car` zawierająca pola `displacement` i `seats`. Następnie w funkcji `main` proszę zarezerwować pamięć dla tej struktury i z użyciem wskaźnika zainicjować ją przykładowymi wartościami. Proszę wypisać na ekranie te wartości. Rozwiązanie proszę zapisać jako plik `Lab7_1_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę zarezerwowoać pamięć dla tablicy liczb całkowitych. Rozmiar tablicy powinien być podany przez użytkownika programu (funkcja `cin` z operatorem `>>`). Proszę wypełnić tablicę posługując się arytmetyką wskaźnika do tablicy a następnie wypisać na ekranie. Rozwiązanie proszę zapisać jako plik `Lab7_2_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę spróbować skompilować i wykonać kod `Lab7_3.cc`. Czy w kodzie znajduje się błąd? Jeśli tak - proszę go poprawić. Rozwiązanie proszę zapisać jako plik `Lab7_3_solved.cpp` i umieść w swojej gałęzi git.

## 2. Funkcje

1. Proszę napisać kod implementujący obliczanie miejsc zerowych funkcji kwadratowej. W funkcji main proszę pobrać od użytkownika wartości `a, b i c` funkcji `ax^2+bx+c=0` i wywołać napisaną przez siebie funkcję obliczającą i wyświetlającą miejsca zerowe. W osobnej funkcji proszę zaimplementować obliczanie `delta`. Rozwiązanie proszę zapisać jako plik `Lab7_4_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program który deklaruje tablicę intów o rozmiarze wpisanym przez użytkownika. Proszę użyć programu htop w konsoli, żeby zobaczyć ile pamięci zajmuje nasz program w systemie.
1. Proszę przetestować działanie programu `Lab7_6.cc`. Proszę zastanowić się nad zagadnieniem zasięgu zmiennych. Proszę zadeklarować zmienną globalną `int x=100`. W którym miejscu funkcji `main()` można wypisać wartość zmiennej `x` równą `100`?
1. W programie `Lab7_7.cc` znajdują się błędy uniemożliwiający kompilację. Proszę go znaleźć i poprawić. Rozwiązanie proszę zapisać jako plik `Lab7_7_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program implementujący przycinanie danych (clipping) do zadanego przedziału. W funkcji `main` proszę pobrać od użytkownika wartość. Proszę zaimplementować funkcję `clipping` która a) jeśli podana wartość jest z przedziału <10;20> - zwróci tą wartość, b) jeśli podana wartość jest mniejsza od 10 - zwróci 10 c) jeśli podana wartość jest większa od 20 - zwróci 20. Proszę w funkcji `main` wyświetlić wartość zwracaną przez funkcję `clipping`. Rozwiązanie proszę zapisać jako plik `Lab7_8_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę zmodyfikować kod w taki sposób, aby funkcja obliczająca miejsca zerowe z poprzedniego punktu przyjmowała jako argument strukturę zawierająca parametry `a,b,c` oraz by zwracała znalezione miejsca zerowe (przez wskaźnik na strukturę przechowującą miejsca zerowe). Rozwiązanie proszę zapisać jako plik `Lab7_9_solved.cpp` i umieść w swojej gałęzi git.

>> !!!!!! Przed przejściem do następnego zadania proszę zapisać i pushować całą swoją pracę. Następne zadanie może zawiesić system

6. Proszę w osobnej konsoli uruchomić program `top` lub `htop` (`htop` może wymagać doinstalowania. Proszę zmodyfikować kod `Lab7_10.cc` tak, aby funkcja `create_and_set` wykonywała się w nieskończonej pętli. Proszę zaobserwować zajętość pamięci i zachowanie systemu. Czy da się zmodyfikować program tak, aby nie powodował wycieku pamięci przy zachowaniu wywołania `create_and_set` w nieskończonej pętli? Rozwiązanie proszę zapisać jako plik `Lab7_10_solved.cpp` i umieść w swojej gałęzi git.

## Zadanie algorytmiczne

Proszę napisać strukturę listy, przetrzymującą wartość typu `int` oraz `double`, w której każdy element posiada wskaźnik na następny i ostatni element. Element pierwszy ma wskaźnik na następny NULL. Element ostatni ma wskaźnik na ostatni NULL. Proszę zaimplementować dwie funkcje. Obie posiadają trzy argumenty: wskaźnik do struktury, `int`, `double`. Pierwsza dodaje element przed wskazanym przez wskaźnik, druga jako ostatni element struktury, bez względu na to na co wskazuje wskaźnik. Dodatkowo proszę zaimplementować funkcję wyświetlającą wszystkie elementy listy.
