#ifndef NO_H
#define NO_H
#include <iostream>
#include <list>
#include <string>
#include <GL/glut.h>
#define AND 2
#define OR  1

using namespace std;

class No
{
    public:
        No();
        No(int,int,string,GLfloat);
        int id;
        string valor;
        int tipo;
        GLfloat coordenada;
        list<No> lista;
        void imprime();
        string getTipo();
    protected:
    private:

};

#endif // NO_H
