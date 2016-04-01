#include "No.h"

No::No(){}

No::No(int t,int x,string y,GLfloat c)
{
    tipo=t;
    id=x;
    valor=y;
    coordenada=c;
}

void No::imprime(){
    if(tipo==2)cout << "vertice AND " << id << " valor "<< valor<<"\n";
    else cout << "vertice OR " << id << " valor "<< valor<<"\n";
    std::cout << "Filhos:";
    for (std::list<No>::iterator it=lista.begin(); it != lista.end(); ++it)
    std::cout << ' ' << it->id;
    std::cout << "\n\n";
}

string No::getTipo(){
    if(tipo==2){
        return "AND";
    }
    if(tipo==1){
        return "OR";
    }
    if (tipo==3){
        return "FILHO";
    }
    return "ERRO";
}
