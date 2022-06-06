#include<iostream>
class Carte
{
    char domeniu[50], autor[50], titlu[50], termen[50];

public:
    Carte();
    Carte(char *titlu, char *autor, char *domeniu);
    Carte(char *titlu, char *autor, char *domeniu, char termen);

    char* afisare();

    //Metode de tip get
    char* getTitlu();
    char* getAutor();
    char* getDomeniu();
    char* getData();
    char* getTermen();

    //Metode de tip set
    void setTitlu(char *titlu);
    void setAutor(char *autor);
    void setDomeniu(char *domeniu);
    void setTermen(char termen);

    //Destructor
    ~Carte();
};
