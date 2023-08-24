#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    int x, y, z, n;
    float salario, X, Y, Z, s;
    double a, b, c, delta, x1, x2;
    bool op;

/*
    cout << "----------" << " 1- Multiplo de 5 ou nao " << "----------" << endl;

    do{
        cout << "\nDigite um numero: ";
        cin >> x;

        if(x % 5 == 0) cout << x << " faz parte dos multiplos de 5";
        else cout << x << " nao faz parte dos multiplos de 5";
        cout << endl;
    }while(x % 5 != 0);


    cout << "----------" << " 2- Se iguais some, senao multiplique " << "----------" << endl;

    cout << "Digite dois valores sepadaros por um espaco (6 14): ";
    cin >> x >> y;
    if(x == y)
    {
        z = x + y;
        cout << x << " + " << y << " = " << z;
    }
    else
    {
        z = x * y;
        cout << x << " * " << y << " = " << z;
    }

    cout << endl;

    cout << "----------" << " 3- Equacao de segundo grau " << "----------" << endl;

    cout << "Valor de A, B e C(14 31 3): ";
    cin >> a >> b >> c;

    delta = pow(b, 2) - 4 * a * c;
    cout << delta << endl;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << x1 << "\n" << x2;

    cout << "----------" << " 4- calcular a media ponderada " << "----------" << endl;

    cout << "Digite os valores das duas notas: ";
    cin >> x >> y;
    z = (x * 0.7) + (y * 0.3);

    if(z > 7)
        cout << "Aprovado";
    else if (z == 7)
        cout << "Aprovado com distincao";
    else
    cout << "Reprovado";

    cout << endl;

    cout << "----------" << " 5- Reajuste de salario" << "----------" << endl;

    cout << "Informe seu salario: ";
    cin >> salario;

    if(salario < 500) salario += 0.15 * salario;
    else if (salario >= 500 && salario <= 1000) salario += 0.1 * salario;
    else if (salario > 1000) salario += 0.05 * salario;

    cout << fixed << setprecision(2) << "Salario reajustado para R$" << salario << endl;

    cout << "----------" << " 6- triangulo equilatero,isosceles ou escaleno " << "----------" << endl;

    do
    {
        cout << "\nDigite os valores dos lados do triangulo(2 3 4): ";
        cin >> X >> Y >> Z;
        if(X + Y < Z || Z + X < Y || Y + Z < X)
        {
            cout << "\nValores nao formam um triangulo";
            op = false;
        }
        else op = true;
    }while (!op);

    cout << "Triangulo ";

    if(X == Y && X == Z)
        cout << "equilatero";
    else if (X == Y || X == Z || Y == Z)
        cout << "isoscele";
    else
        cout << "escaleno";

    cout << endl;

    cout << "----------" << " 7- Somatorio de raizes " << "----------" << endl;

    do
    {
        cout << "\nDigite um numero entre 0 e 100: ";
        cin >> X;

    }while(x < 10 && x > 100);

    for(int i = 0; i < x; i++)
    {
        s += sqrt(i);
    }
    cout << s << endl;

*/
    cout << "----------" << " 8- Somatorio de fatorial " << "----------" << endl;

    cout << "Digite um numero para o somatorio: ";
    cin >> X;

    cout << "\nDigite a quantidades de termos do somatorio: ";
    cin >> n;

    for(int i = 3; i < n; i += 2)
    {
        cout << i << endl;
        for(int j = i; j <= i && j > 0; j--)
        {
            cout << j << endl;
            if(j < n) y *= j;
            else y = j;
        }
        s += X - (pow(X, i - 1)/y);
    }
    cout << s;




    return 0;
}
