#include<iostream>
#include<ctime>
#include<string>
#include<stdio.h>
#include "header.h"

using namespace std;

Carte::Carte()
{
    strcpy(titlu, "Anonim");
    strcpy(autor, "Anonim");
    strcpy(domeniu, "Anonim");
    strcpy(termen, "Nu exista");
    //Constructor fara argumente.
}

Carte::Carte(char* titlu, char* autor, char* domeniu)
{
    strcpy(this->titlu, titlu);
    strcpy(this->autor, autor);
    strcpy(this->domeniu, domeniu);
    //Constructor cu argumente.
}

Carte::Carte(char* titlu, char* autor, char* domeniu, char termen)
{
    strcpy(this->titlu, titlu);
    strcpy(this->autor, autor);
    strcpy(this->domeniu, domeniu);
    strcpy(this->termen, termen);
    //Constructor cu argumente.
}

char* Carte::afisare()
{
    cout<<this->titlu<<" "<<this->autor<<" "<<this->domeniu<<this->termen<<endl;
}

char* Carte::getTitlu()
{

}

char* Carte::getAutor()
{

}

char* Carte::getDomeniu()
{

}

char* Carte::getData()
{

}

char* Carte::getTermen()
{

}

void Carte::setTitlu(char* titlu)
{

}

void Carte::setAutor(char* autor)
{

}

void Carte::setDomeniu(char* domeniu)
{

}

void Carte::setTermen(char termen)
{

}


Carte::~Carte()
{
    //Destructor
}
