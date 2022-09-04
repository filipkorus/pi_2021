## 1. Git - praca z własną gałęzią i łączenie gałęzi

Na ostatnim laboratorium tworzyliśmy własne gałezie - dla przypomnienia - jest to mechanizm pozwalający na tworzenie alternatywnych wersji kodu w celu pracy nad poszczególnymi funkcjonalnościmi. Umownie - działający kod projektu trzymany jest w gałęzi `master`/`main`. Gdy we własnej gałęzi dopiszemy funkcjonalność - pojawia się konieczność połączenia gałęzi. Tą operację nazywa się merge.

Musimy pamiętać, że jeśli uwtorzyliśmy własną gałąź i pracowaliśmy w niej nad funkcjonalnościami projektu - w tym czasie któryś z innych współpracowników mógł zmienić gałąź `master`. Tak więc operacja merge to coś więcej niż proste zastąpienie gałęzi `master` naszym własnym branchem. Musimy rozwiązać kolnflikty - czyli sytuacje w których dane miejsce w kodzie zostało zmienione na dwa różne sposoby.

**Typowy workflow** dnia pracy programisty jest następujący:
- `git pull` - ściągamy to co się zmieniło w nocy
- `git checkout -b nazwaGalezi` - robimy nową gałąź i na niej pracujemy
- `git add ...` - dodajemy nowe i istotne pliki do indeksu
- `git commit -am "Nowa funkcjonalność"` - commitujemy zmiany
- `git push -u origin myBranch` - wysyłamy zmiany na serwer (-u powoduje, że gałąź master staje się rodzicem, idziemy do domu
- `git pull` - następnego dnia ściągamy zmiany 
- `git checkout nazwaGalezi` - przełączamy się na naszą gałąź i pracujemy
- `git checkout master` - przełączamy się na gałąź `master`
- `git merge nazwaGalezi` - łączymy gałęzie `master` i `nazwaGalezi`. Tu mogą się pojawić konflikty, któe musimy rozwikłać!
- `git commit -am "dodanie dowej funkcjonalnosci"` - commitujemy zmiany
- `git push` - wysyłamy na serwer zdalny

**Workflow na laboratorium** jest nieco inny. Ponieważ nie pracujemy nad kodem, a gałęzie służą do trzymania indywidualnego kodu - nie będziemy dołączać do `master` naszej gałęzi - lecz będziemy do naszej gałęzi dołączać to, co zmieniło się w gałęzi `master`.:

JEDNORAZOWO (to już powinni Pństwo mieć zrobione i wtedy proszę tego nie robić!) należy wykonać:
- `git checkout master` - przejście do gałęzi głównej
- `git pull` - ściągnięcie z głównej do lokalnej ewentualnych zmian
- `git checkout -b myBranch` - utworzenie własnej gałęzi tak, żeby rodzicem była gałąź master (to jest ważne!)
- `git push -u origin myBranch` - utworzenie gałęzi na zdalnym repozytorium

Po pracy w swojej gałęzi - np wyedytowaniu przykładu lub stworzeniu nowego pliku z kodem:
- `git commit -am "zmiany"` - zatwierdza te zmiany
- `git add ...` - dodaje pliki z kodem ew. inne tekstowe pliki potrzebne do działania kodu
- `git push` - przesyła je do zdalnego repozytorium

Po przyjściu na kolejne laboratorium (w master pojawiły się zmiany - dopisaliśmy nowe ćwiczenie):
- `git checkout myBranch` - przełącza się na swoją gałąź (zakładamy, że repozytorium jest już utworzone)
- `git pull` - ściąga najnowszą wersję (np. by móc pracować w domu na innym komputerze i coś sobie dodać)
- `git merge master` - w tym miejscu dołącza gałąź główną (tą w której my robiliśmy zmiany) do swojej. Tylko nowe pliki, albo uaktualnione pliki zostaną ściągnięte z master i wklejone do myBranch.
- `git commit -am "...."` - zatwierdzamy zmiany zrobione w czasie laboratorium
- `git push` - myBranch wysyłamy do zdalnego repozytorium

**Zadanie**
- Od tej pory proszę wszystkie wykonane ćwiczenia trzymać w swojej gałęzi na gitlabie. 

## 1. Wyrażenia warunkowe

1. Przeanalizuj kod `Lab4_2.cc`. Zmodyfikuj go w taki sposób, by na ekranie wyświetliło się `Suma 3: 3`. Rozwiązanie zapisz jako plik `Lab4_2_solved.cc` i umieść w swojej gałęzi git.
1. Przeanalizuj kod `Lab4_3.cc`. W kodzie znajdują się dwa błędy. Jeden to błąd semantyczny, drugi to błąd logiczny konstrukcji programu. Znajdź błędy, ppraw porgram. Rozwiązanie zapisz jako plik `Lab4_3_solved.cc` i umieść w swojej gałęzi git.
1. Przeanalizuj kod `Lab4_4.cc`. Kod zawiera konstrukcję `if...else`. Zapisz ten sam warunek przy użyciu operatora trójargumentowego. Rozwiązanie zapisz jako plik `Lab4_4_solved.cc` i umieść w swojej gałęzi git.
1. Przeanalizuj kod `Lab4_5.cc`. Kod zawiera błąd. Na czym ten błąd polega? Popraw kod i rozwiązanie zapisz jako plik `Lab4_5_solved.cc` i umieść w swojej gałęzi git. 


## 1. Pętle
1. Napisz program wyświetlający na ekranie liczby od 1 do 100. Napisz ten program używając pętli `for`. Rozwiązanie zapisz jako plik `Lab4_6_solved.cc` i umieść w swojej gałęzi git.
1. Napisz program wyświetlający na ekranie liczby od 100 do 1 co 3 (100,97,94,91 itd.). Napisz ten program używając pętli `while`. Rozwiązanie zapisz jako plik `Lab4_7_solved.cc` i umieść w swojej gałęzi git.
1. Napisz program wyświetlający na ekranie jedynie parzyste liczby w zakresie od 1 do 100. Nie używaj instrukcji warunkowych. Rozwiązanie zapisz jako plik `Lab4_8_solved.cc` i umieść w swojej gałęzi git.
1. Dla kodu `Lab4_1.cc` zaobserwuj działanie słów `break` i `continue`
1. Zaimplementuj pseudokod zawarty w pliku `Lab4_pseudo.txt` w języku C++. Rozwiązanie zapisz jako plik `Lab4_9_solved.cc` i umieść w swojej gałęzi git.  

>> Na rozwiązane ćwieczenie laboratoryjne składa się 8 plików z kodem z rozwiązanimi umieszczonych we własnej gałęzi na GIT

