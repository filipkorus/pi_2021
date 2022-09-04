# Tematy zaawansowane
1. Proszę napisać program, który wyświetli na ekranie listę argumentów linii komend, z którymi uruchomiono program. Rozwiązanie proszę zapisać jako plik `Lab8_1_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program, który otrzymawszy jako argument `-l` wyświteli tekst `File list`. Uruchomienie z innym argumentem lub bez argumentu powinno wyświetlić tekst `-l - list avaliable files`. Przydatny może być ten wpis: https://stackoverflow.com/questions/5183203/checking-argv-against-a-string-c
Rozwiązanie proszę zapisać jako plik `Lab8_2_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę napisać program implementujący makrodefinicję `mmax(a,b)` znajdującą większą liczbę z pary `(a,b)` (Wykład 8 slajd 14). Rozwiązanie proszę zapisać jako plik `Lab8_3_solved.cpp` i umieść w swojej gałęzi git.

# Wprowadzenie do programowania obiektowego
1. Proszę napisać klasę `vector2d`. Klasa powinna posiadać składowe `x1` i `x2` przechowujące współrzędne wektora oraz metody `add` i `print2d`. Metoda `print2d` wyśwtetla współrzędne wektora. Metoda `add` jako argument przyjmuje obiekt klasy `vector2d` i dodaje jego wspórzędne do swoich. Rozwiązanie proszę zapisać jako plik `Lab8_4_solved.cpp` i umieść w swojej gałęzi git.
2. Proszę rozszerzyć powyższą klasę o getter, setter i konstruktor. Rozwiązanie proszę zapisać jako plik `Lab8_5_solved.cpp` i umieść w swojej gałęzi git.
>> Dla niektórych setter to rasa psa ;). 
3. Proszę przepisać powyższą klasę tak, aby współrzędne wektora były przechowywane w tablicy (Wykład 9, slajd 48). Rozwiązanie proszę zapisać jako plik `Lab8_6_solved.cpp` i umieść w swojej gałęzi git.

# Zadanie zaawansowane
Proszę zaimplementować kalkulator liczb zespolonych (`complexCalc`) przy użyciu podstawowych koncepcji programowania obiektowego. Obiekt powinien mieć pola `real` i `imag`. Powinien tez wspierać gettery, settery i (co najmniej) następujące metody :
1. `bool isReal()` - sprawdza, czy liczba jest rzeczywista 
1. `bool isImag()` - sprawdza, czy liczba jest zespolona 
1. `bool equals(complexCalc)` - sprawdza, czy liczba jest równa liczbie podanej jako argument - obiekt kasy `complexCalc` 
1. `add(complexCalc)`, - dodaje do siebie liczbę podaną jako argument - obiekt kasy `complexCalc` 
1. `substract(complexCalc)`, - odejmuje od siebie liczbę podaną jako argument - obiekt kasy `complexCalc`
1. `print()`, - wyświetla na ekran w postacj np `4+7i`
1. `string toString()` - zwraca string postaci np `4+7i`

Proszę zaimplementować interfejs tekstowy kalkulatora używając powyższych metod. 

# Zadanie domowe
Proszę zaimplementować grę w kółko i krzyżyk 3x3 w terminalu (tekstowo) dla dwóch graczy (bez AI) stosując zasady programowania obiektowego. Sugerujemy rozpoczęcie pracy od wykonania projektu aplikacji. Dla chętnych: proszę o uzupełnienie programu o możliwość rogrywki z komputerem. Sugerujemy użycie algorytmu losowego. Inne, bardziej zaawansowane algorytmy dla gracza komputerowego to algorytmy drzew decyzyjnych i agorytm min-max.
