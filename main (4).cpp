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

    double V_kmh;
    cout << "Введіть швидкість у км/год: ";
    cin >> V_kmh;
    
    double V_ms = V_kmh * 1000.0 / 3600.0;
    
    cout << "Введіть у м/с = " << V_ms << endl;

    return 0;
}