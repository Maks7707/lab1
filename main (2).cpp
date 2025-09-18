/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    double a, b;
    cout << "Введіть катет a: ";
    cin >> a;
    cout << "Введіть катет b: ";
    cin >> b;
    double S = (a * b) / 2.0;
    cout << "Площа трикутника: " << S << endl;
    
    return 0;
}