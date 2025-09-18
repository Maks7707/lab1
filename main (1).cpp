#include <iostream>
using namespace std;

int main()
{
    double A, B, C;
    cout << "Введіть координати точки A: ";
    cin >> A;
    cout << "Введіть координати точки B: ";
    cin >> B;
    cout << "Введіть координати точки C: ";
    cin >> C;
    
    double AC = abs(A-C);
    double BC = abs(B-C);
    
    double result = AC * BC;
    
    cout <<"Добуток довжин відрізків AC і BC = " << result << endl;
    
    return 0;
}