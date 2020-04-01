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
    void print() {
      cout << get_numerator() << "/" << get_denominator() << endl;
    }
};
 
Fraction division(Fraction fraction_1, Fraction fraction_2) {
  Fraction divided_fraction(fraction_1.get_numerator()*fraction_2.get_denominator(), fraction_1.get_denominator()*fraction_2.get_numerator());
  return divided_fraction;
}

int main() {
  Fraction fraction_1(2,3); fraction_1.print();
  Fraction fraction_2(3,4); fraction_2.print();

  cout << "Fraction after division: "; division(fraction_1, fraction_2).print(); 

}
