#include <iostream>
#include<string>
#include<fstream>
#include "header.h"

using namespace std;

int main()
{
    Carte *ob = new Carte[10];

    ifstream fin("date.in");

    char domeniu[50], autor[50], titlu[50], termen[50];

    int i=0;

    while(fin>>titlu>>autor>>domeniu)
    {
        ob[i].setTitlu(titlu);
        ob[i].setAutor(autor);
        ob[i].setDomeniu(domeniu);
        i++;
    }

    fin.close();

    for(int i=0; i<5; i++)
        ob[i].afisare();




}
