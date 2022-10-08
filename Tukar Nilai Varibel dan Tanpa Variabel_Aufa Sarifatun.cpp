#include <iostream>
using namespace std;

int main () {
    int x = 9, y = 18, z, a,b;

    //Menukar Variabel dengan Variable Sementara

    z = x;
    x = y;
    y = z;

    cout << "Menukarkan Varibael dengan Variabel Sementara\n";
    cout << "X : " << x << endl << "y : " << y << endl;


    //Menukarkan Variable tanpa Variabel Sementara

    a = 6;
    b = 12;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "Menukarkan Variable tanpa Variable Sementara\n";
    cout << "\nA : " << a << endl << "B : " << b << endl;

    return 0;

}
