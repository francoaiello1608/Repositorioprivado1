#include <iostream>

using namespace std;

int main()
{
    int p1, p2, o1, o2, x, y ;
    cout << "ingrese el valor de la pendiente de la primera recta" << endl;
    cin  >> p1;
    cout << "ingrese el valor de la ordenada al origen de la primera recta" << endl;
    cin  >> o1;
    cout << "ingrese el valor de la pendiente de la segunda recta" << endl;
    cin  >> p2;
    cout << "ingrese el valor de la ordenada al origen de la segunda recta" << endl;
    cin  >> o2;
    if (p1==p2 && o1==o2)
    {
        cout <<"las rectas ingresadas son coincidentes" << endl;
    }
        else if (p1==p2)
        {
            cout <<"las rectas ingresadas son paralelas (no se intersectan) " << endl;
        }
            else
            {
                x=(o2-o1)/(p2-p1);
                y=(p1*x)+o1 ;
                cout << "la recta se intersecta en x= " << x << endl;
                cout << "e y = " << y << endl;
            }

        return 0;
}
