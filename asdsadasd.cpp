#include <iostream>

using namespace std;

void sub();
void mul();
void add();
void div();
void square();
double a;
double b;
double addd;
double subb;
double mull;
double divv;
double sq;
double sq2;
int sel;

int main()
{
    cout << "Input a number.\n";
    cin >> a;
    cout << "input another.\n";
    cin >> b;
    addd = a + b;
    subb = a - b;
    mull = a * b;
    divv = a/b;
    sq = (a * a)
    sq2
    cout << "1. Add\n2. Sub\n3. Multi\n4. divide\n";
    cin >> sel;
    switch(sel) {
    case 1: add();
            break;
    case 2: sub();
            break;
    case 3: mul();
            break;
    case 4: div();
            break;
    }
}

void add() {
    cout << addd;
}

void sub() {
    cout << subb;
}

void mul() {
    cout << mull;

}

void div() {
    cout << divv;
}

void square() {

}
