#include <iostream>
using namespace std;

int saque;
int um;
int cinco;
int dez;
int cinquenta;
int cem;

int main(){

cout << "Qual o valor que deseja sacar?\n"; cin >> saque; 

if(saque < 10 || saque > 600){
    cout << "Nao foi possivel realizar seu saque!";       
}

else if(saque >= 10 || saque <= 600){

    cem = saque/100;
    saque = saque - (cem * 100);

    cinquenta = saque/50;
    saque = saque - (cinquenta * 50);

    dez = saque/10;
    saque = saque - (dez * 10);
    
    cinco = saque/5;
    saque = saque - (cinco * 5);

    um = saque;

    cout << cem << " notas de cem" << endl;
    cout << cinquenta << " notas de cinquenta" <<endl;
    cout << dez << " notas de dez" <<endl;
    cout << cinco << " notas de cinco" <<endl;
    cout << um << " notas de um" <<endl;

}


    return 0;
}