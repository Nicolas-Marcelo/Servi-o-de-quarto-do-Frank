
#include <iostream
using namespace std;


int main () {


    double metros;
    double valor;


    cout << "Bem vindo ao software desenvolvido para tranformar metros em centimetros, milimetros e decimetros!" << endl;


    cout << "Digie o valor em metros que voce quer transformar: " << endl;
    cin >> metros;


    cout << "Digite para qual operador voce quer tranformar, digite 1 para centimetro, 2 para milimetro ou 3 para decimetro!" << endl;
    cin >> valor;


if (valor == 1) {


    double centimetros;
    centimetros = metros * 100;


    cout << metros << " em centimetros fica " << centimetros << " cm!" << endl;


} else if (valor == 2) {


    int milimetros;
    milimetros = metros * 1000;


    cout << metros << " em milimetros fica " << milimetros << " mm!" << endl;


} else if (valor == 3) {


    int decimetros;
    decimetros = metros * 10;


    cout << metros << " em decimetros fica " << decimetros << " dc!" << endl;


} else {


    cout << "digite um valor valido" << endl;


}
}

