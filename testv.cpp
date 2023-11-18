#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lw[3];
    int um[3];
    int cig[3];
    int h[3];
    lw[0] = 1100;
    lw[1] = 18;
    lw[2] = 1;
    um[0] = 900;
    um[1] = 12;
    um[2] = 4;
    cig[0] = 200;
    cig[1] = 28;
    cig[2] = 3;
    h[0] = 100;
    h[1] = 0;
    h[2] = 2;
    int lwd = (lw[0] * 5) / 100;

    int umd = (um[0] * 5) / 100;
    int plw = (((lw[0] * lw[1]) / 100) - lwd) * lw[2];
    int pum = (((um[0] * um[1]) / 100) - umd) * um[2];
    int pcig = ((cig[0] * cig[1]) / 100) * cig[2];
    int ph = ((h[0] * h[1]) / 100) * h[2];
    int total;
    total = plw + pum + pcig + ph;
    cout << total << endl;
}