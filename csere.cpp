#include <iostream>

using namespace std;

void exorcsere(int &a,int &b);
void cserekulonbseg(int &a, int &b);
void csereszorzat(int &a, int &b);

int main()
{
    int x, y;
    cout << "Adj meg 2 változót!" << endl;;
    cin >> x >> y;
    cout << "A 2 változó értékei:\n" << x << " és " << y << endl << endl;

    cout << "Csere exorral: " << endl;
    exorcsere(x,y);
    cout << x << " és " << y << endl << endl;

    cout << "Visszacserélve különbséggel:" << endl;
    cserekulonbseg(x,y);
    cout << x << " és " << y << endl << endl;

    cout << "Visszacserélve szorzattal:" << endl;
    csereszorzat(x,y);
    cout << x << " és " << y << endl;

    return 0;
}

void exorcsere(int &a,int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
    }

void cserekulonbseg(int &a, int &b) {
    a=a+b;
    b=a-b;
    a=a-b;
    }

void csereszorzat(int &a, int &b) {
    a=a*b;
    b=a/b;
    a=a/b;
    }
