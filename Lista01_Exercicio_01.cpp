#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float n1, n2, media;

    cout << "Informe a primeira nota: ";
    cin >> n1;

    cout << "Informe a segunda nota: ";
    cin >> n2;

    media = (n1+n2)/2;

    cout << "sua media final e: " << media << endl; 

    if (media >= 7)
    {
        cout << "Voce foi aprovado" << endl;
    }
    else
    {
        cout << "Voce foi reprovado" << endl;
    }
    
    system ("pause");
    return 0;
}