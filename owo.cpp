#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /// calcular las raices x1 y x2 de una ecuaci�n cuadr�tica
    /// declaracion de variables
    double a, b, c; cin >> a >> b >> c;
    double d=pow(b,2)-(4*a*c);
    /// ciclos ifs
    if(d<0)
    {
        cout<<"NA";
    }
    else if(d==0)
    {
        double x=((b*-1)+sqrt(d))/(2*a);
        cout<<x*1.0;
    }
    else
    {
        double x1=((b*-1)+sqrt(d))/(2*a);
        double x2=((b*-1)-sqrt(d))/(2*a);
        if(x1<x2)
        {
            cout<<x1*1.0<<endl<<x2*1.0;
        }
        else
        {
            cout<<x2*1.0<<endl<<x1*1.0;
        }
    }
}
