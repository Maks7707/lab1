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
    double V_kmh;
    cout << "Введіть швидкість у км/год: ";
    cin >> V_kmh;
    
    double V_ms = V_kmh * 1000.0 / 3600.0;
    
    cout << "Введіть у м/с = " << V_ms << endl;

    return 0;
}