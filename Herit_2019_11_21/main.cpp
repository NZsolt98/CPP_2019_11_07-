#include <iostream>

using namespace std;

class Pair
{
private:
    int a_m;
    int b_m;
public:
    /*Pair(int a, int b)
    {
        a_m=a;
        b_m=b;
    }
    */

    //Pair(int a,int b):a_m(a),b_m(b) {}

    Pair(int a, int b);
    Pair() {};
    int a() {return a_m;}
    int b() {return b_m;}
    void setA(int a)
    {
        a_m=a;
    }
    void setB(int b)
    {
        b_m=b;
    }
};

class Complex:protected Pair
{
public:
    Complex(int i, int j):Pair(i,j)
    {
        //Pair(i,j);
        //setA(i);
        //setB(j);
    }
    int real() {return a();}
    int img() {return b();}
    Complex add(Complex c1, Complex c2)
    {
        int a=c1.real()+c2.real();
        int b=c1.img()+c2.img();
        /*
        Complex c3(a,b);
        return c3;
        */

        return Complex(a,b);
    }
};

Pair::Pair(int a, int b):a_m(a),b_m(b) {} // Inicializálási lista!!!!!!!!!!!!!!!!!

int main()
{
    Pair p1(5,6);
    Pair p2();

    Complex z1(4,5);
    Complex z2(4,7);

    cout << z1.real() << "+" << z1.img() << "i" << endl;

    Complex z3=z3.add(z1,z2);

    cout << z3.real() << "+" << z3.img() << "i" << endl;

    int var0=4;   // értékadás
    int var1(4); // konstruktor
    int var2{4}; //univerzális inicializátor
    return 0;
}
