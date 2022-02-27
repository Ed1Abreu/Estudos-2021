#include <iostream>
#include <math.h>
using namespace std;

bool finalizar;
string escolha;
string subescolha;
float delta;
float a;
float b;
float c;
float x1;
float x2;
float celsius;
float fahrenheit;
float peso;
float altura;
float imc;
float area_retangulo;
float base_retangulo;
float altura_retangulo;
float area_trapezio;
float base_maior;
float base_menor;
float altura_trapezio;

int main(){

while(finalizar != true){
finalizar = false;

system("cls");

cout << "Selecione a opcao desejada" << endl;
cout << "a - Calculador de IMC" << endl;
cout << "b - Calculador de Bahskara" << endl;
cout << "c - Geometria..." << endl;
cout << "d - Conversor de unidade..." << endl;
cout << "e - Sair do programa" << endl;

cin >> escolha;

if(escolha == "a"){
    system("cls");
    cout << "Calculador de IMC" << endl;
    cout << "CLASSIFICACAO      | IMC" << endl;
    cout << "Abaixo do peso     | Abaixo 18,5" << endl;
    cout << "Peso normal        | 18,5 - 24,9" << endl;
    cout << "Sobre peso         | 25,0 - 29,9" << endl;
    cout << "Obesidade grau I   | 30,0 - 34,9" << endl;
    cout << "Obesidade grau II  | 35,0 - 39,9" << endl;
    cout << "Obesidade grau III | Maior ou igual 40" << endl;

    cout << "Digite sua altura: "; cin >> altura;
    cout << "Digite seu peso: "; cin >> peso;
    imc = peso/(altura*altura);
    cout << "Seu IMC e: " << imc << endl;
    system("pause");
}


if(escolha == "b"){
    system("cls");
    cout << "Calculador de Bahskara" << endl;
    cout << "Digite o valor de a: "; cin >> a; 
    cout << "Digite o valor de b: "; cin >> b;
    cout << "Digite o valor de c: "; cin >> c;
    
    delta = (b * b) - 4 * a *c;
    cout << "valor de delta =" << delta << endl;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    cout << "O valor da primeira raiz e: " << x1 << endl;
    cout << "O valor da segunda raiz e: " << x2 << endl;
    system("pause");   
}


if(escolha == "c"){
    system("cls");
    cout << "Geometria..." << endl;
    cout << "r - Calcular area do retangulo" << endl;
    cout << "t - Calcular area do trapezio" << endl;

    cin >> subescolha;

    if(subescolha == "r"){
    cout << "Digite o valor da base do retangulo em cm: "; cin >> base_retangulo;
    cout << "Digite o valor da altura do retangulo em cm: "; cin >> altura_retangulo; 
    area_retangulo = base_retangulo * altura_retangulo;
    cout << "A area deste retangulo e igual a: " << area_retangulo; cout <<" cm2"<< endl;
    system("pause");
    }

    if(subescolha == "t"){
    cout << "Digite o valor da base maior do trapezio em cm: "; cin >> base_maior;
    cout << "Digite o valor da base menor do trapezio em cm: "; cin >> base_menor;           
    cout << "Digite o valor da altura do trapezio em cm: "; cin >> altura_trapezio;
    area_trapezio = ((base_maior + base_menor) * altura_trapezio) / 2;
    cout << "A area deste trapezio e igual a " << area_trapezio; cout << " cm2" << endl;
    system("pause");
    }
}

if(escolha == "d"){
    system("cls");
    cout << "Conversor de unidade..." << endl;
    cout << "f - Converter Celsius para Fahrenheit" << endl;
    cout << "s - converter Fahrenheit para Celsius" << endl;
    
    cin >> subescolha;
    
    if (subescolha == "f"){
    cout << "Digite o valor em Celsius: "; cin >> celsius;    
    fahrenheit = (celsius * 1.8) + 32;
    cout << fahrenheit;
    cout << " Grau Fahrenheit\n";
    system("pause");
    }
    
    if (subescolha == "s"){
    cout << "Digite o valor em Fahrenheit: "; cin >> fahrenheit;    
    celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
    cout << " Grau Celsius\n"; 
    system("pause");
    }   
}

if(escolha == "e"){
    finalizar = true;
    cout << "Fim do programa";
}


}

    return 0;
}
