#include <iostream>
#include <math.h>

using namespace std;

class Fraction { 
  private:
    int numerator, denominator;
  public:
    Fraction(int num, int den) { //konstruktor parametryzujący
      numerator = num;
      denominator = den;
    };
    int get_numerator() {
      return numerator;
    }
    int get_denominator() {
      return denominator;
    }
    void set_numerator(int num) {
      numerator = num;
    }
    void set_denominator(int den) {
      denominator = den;
    }
    void print() { //metoda wyświetlajaca pola klasy 
      cout << get_numerator() << "/" << get_denominator() << endl;
    }
    Fraction(int var) { //konstruktor konwertujacy
      numerator = var; 
      denominator = 1;
    }
    bool is_equal(Fraction fraction) { //funkcja sprawdzajaca czy ulamki sa sobie rowne
      if (get_numerator()*fraction.get_denominator() == fraction.get_numerator()*get_denominator()) 
        return true;
      else
      return false;
    } 
    operator double() { //operator konwertujacy 
      return ((double)numerator/(double)denominator);
    }
};

Fraction division(Fraction fraction_1, Fraction fraction_2) { //funkcja globalna sluzaca do podzielenia dwoch ulamkow przez siebie
  Fraction divided_fraction(fraction_1.get_numerator() * fraction_2.get_denominator(), fraction_1.get_denominator() * fraction_2.get_numerator()); 
  return divided_fraction;
}

// int divisor(int a, int b) { //funkcja znajdujaca najwiekszy wspolny dzielnik dwoch liczb
//   while(a != b) {
//     if(a > b)
//       a = (a - b);
//     else
//       b = (b - a); 
//   }
//   return a;
// }

double square_root(double var) { //funkcja zwracajaca pierwiastek kwadratowy z liczby typu double 
  return sqrt(var);
}

int main() {
  cout << "Fraction 1: "; Fraction fraction_1(2, 3); fraction_1.print(); //utworzenie i wyswietlenie ulamka_1
  cout << "Fraction 2: "; Fraction fraction_2(3, 4); fraction_2.print(); //utworzenie i wyswietlenie ulamka_2

  cout << "Fractions after division: "; division(fraction_1, fraction_2).print(); //wynik po podzieleniu przez siebie ulamka_1 i ulamka_2

  cout << "Fraction 1 after division by 5: "; division(fraction_1, 5).print(); //wyswietlenie ulamka_1 podzielonego przez 5

  Fraction fraction_a(5,10); Fraction fraction_b(15,30); //utworzenie pierwiastkow ulamek_a i ulamek_b

  // cout << "Greatest common divisor numer: " << divisor(fraction_a.get_numerator(), fraction_b.get_numerator()) << endl; //wypisanie najwiekszego wspolnego dzielnika dla licznikow odpowiednio ulamka_1 i ulamka_2
  // cout << "Greatest common divisor denom: " << divisor(fraction_a.get_denominator(), fraction_b.get_denominator()) << endl; //wypisanie najwiekszego wspolnego dzielnika dla mianownikow odpoweidnio ulamka_1 i ulamka_2

  cout << "Show '1' if fractions are equivalent or '0' if not: " << fraction_a.is_equal(fraction_b) << endl; //wywolanie funkcji sprawdzajacej czy pierwiastki ulamek_a i ulamek_b sa sobie rowne

  cout << "Square root: " << square_root(fraction_1); //wywolanie funkcji zwracajacej pierwiastek z ulamka_1

  return 0;
}
