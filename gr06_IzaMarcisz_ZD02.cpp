#include <iostream>
 
using namespace std;

class Fraction { 
  private:
    int numerator, denominator;
  public:
    Fraction(int num, int den) { //parameterized constructor
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
    void print() {
      cout << get_numerator() << "/" << get_denominator() << endl;
    }
    Fraction(int var) { //converting constructor
      numerator = var;
      denominator = 1;
    }
    bool is_equal(Fraction fraction) {
      if (get_numerator()*fraction.get_denominator() == fraction.get_numerator()*get_denominator())
        return true;
      else
      return false;
    } 
};

Fraction division(Fraction fraction_1, Fraction fraction_2) {
  Fraction divided_fraction(fraction_1.get_numerator() * fraction_2.get_denominator(), fraction_1.get_denominator() * fraction_2.get_numerator());
  return divided_fraction;
}


// int divisor(int a, int b) { //function finding greatest common divisor
//   while(a != b) {
//     if(a > b)
//       a = (a - b);
//     else
//       b = (b - a); 
//   }
//   return a;
// }

int main() {
  cout << "Fraction 1: "; Fraction fraction_1(2, 3); fraction_1.print();
  cout << "Fraction 2: "; Fraction fraction_2(3, 4); fraction_2.print();

  cout << "Fractions after division: "; division(fraction_1, fraction_2).print(); 

  cout << "Fraction 1 after division by 5: "; division(fraction_1, 5).print();

  Fraction fraction_a(5,10); Fraction fraction_b(15,30);

  cout << "Greatest common divisor numer: " << divisor(fraction_a.get_numerator(), fraction_b.get_numerator()) << endl;
  cout << "Greatest common divisor denom: " << divisor(fraction_a.get_denominator(), fraction_b.get_denominator()) << endl;

  cout << fraction_a.is_equal(fraction_b);

  return 0;
}
