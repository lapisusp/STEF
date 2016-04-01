#ifndef MEDIDASBASE_H
#define MEDIDASBASE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "unistd.h"
#include "Grafo.h"

using namespace std;

/*------------------ Base Class ------------------*/
class MedidasBase {

    public:
        int cont=0;
        float alphas[46];
        virtual void imprimeAlpha()=0;
        virtual void lerAlphas(int emotion) = 0;
        virtual void lerGrafo(Grafo*grafo)=0;

};

#endif // MEDIDASBASE_H
