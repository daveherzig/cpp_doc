/*
HF-ICT, Programmieren C++
Algorithmen und Datenstrukturen
Arbeitsblatt Rekursion
19-Sep-2017, David Herzig (dave.herzig@gmail.com)
*/

#include <iostream>
using namespace std;

/* AUFGABE 1, Fakultaet
Welches ist die groesste Zahl, fuer welche die Fakultaet mit C++
berechnet werden kann (falls der Datentyp long long verwendet wird.)?
*/

/* AUFGABE 2, Fibonacci Rekursiv (inkl Performance Messung!)
*/
int fibRe(int n) {
  // your code
}


/* AUFGABE 3, Fibonacci Iterativ (inkl Performance Messung!)
*/
int fibIt(int n) {
  // your code
}

/* AUFGABE 4, Fibonacci Rekursiv mit Verbesserung
*/
int fibReImp(int n) {
  // your code
}

/* AUFGABE 5, Exponentiation Rekursiv
*/
double power(double x, int n) {
  // your code
}

int main(int argc, char **argv) {
  
  // Test Aufgabe 2
  if (fibRe(1) == 1 && fibRe(3) == 2 && fibRe(8) == 21) {
    cout << "Aufgabe 2 ist richtig" << endl;
  } else {
    cout << "Aufgabe 2 ist falsch" << endl;
  }
  
  // Test Aufgabe 3
  if (fibIt(1) == 1 && fibIt(3) == 2 && fibIt(8) == 21) {
    cout << "Aufgabe 3 ist richtig" << endl;
  } else {
    cout << "Aufgabe 3 ist falsch" << endl;
  }
  
  // Test Aufgabe 4
  if (fibReImp(1) == 1 && fibReImp(3) == 2 && fibReImp(8) == 21) {
    cout << "Aufgabe 4 ist richtig" << endl;
  } else {
    cout << "Aufgabe 4 ist falsch" << endl;
  }
  
  // Test Aufgabe 5
  if (power(2, 2) == 4 && power(2, 0) == 1 && power(3, 3) == 27) {
    cout << "Aufgabe 5 ist richtig" << endl;
  } else {
    cout << "Aufgabe 5 ist falsch" << endl;
  }
  
  return 0;
}


