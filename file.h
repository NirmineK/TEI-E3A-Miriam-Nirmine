#ifndef __HELLO_H__
#define __HELLO_H__


typedef struct
{
    float re,im;
} Complex;

typedef struct
{
 Complex  m[2][2];
} Matrice;


typedef struct 
{
//champs créés par le traducteur du fichier    
char composant; //'R', 'L', 'C'
char pos;        //'S', 'P'
float valeur; 

//champs calculés en f de la fréquence
Complex Z;  
Matrice m;

} Quadripole;


typedef struct
{
int nel;
Quadripole* t;
}  Circuit;


//fonction de lecture du fichier
Circuit traduction(char *nomfichier );
Complex makecomplex(float re, float im);

//fonctions sur les complexes
Complex cadd(Complex a, Complex b);

//fonctions sur les matrices
Matrice produit(Matrice a, Matrice b);

//calculs en f de la freq
//remplit Z
void calculZ(Quadripole *q, float freq);

//remplit m à partir de Z
void calculmatrice(Quadripole *q); 

//calcul matrice totale du circuit
Matrice matricetotale(Circuit c);

#endif//__HELLO_H__
