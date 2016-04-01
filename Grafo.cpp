#include "Grafo.h"

Grafo::Grafo(int V)
{
    this->V = V; // atribui o número de vértices
    adj =  new list<No>[V];
}

void Grafo::adicionarAresta(No v1, No v2)
{
    // adiciona vértice v2 à lista de vértices adjacentes de v1
    adj[v1.id].push_back(v2);
}

void Grafo::copiaArestas(No *v1)
{
    v1->lista=adj[v1->id];
}

void Grafo::buscaLargura(No v)
{
    cout << "BUSCA LARGURA NO\n";
    queue<No> fila;
    bool visitados[V]; // vetor de visitados

    for(int i = 0; i < V; i++)
        visitados[i] = false;

    cout << "Visitando vertice " << v.id << " " << v.getTipo() <<" valor " << v.valor << "\n";
    visitados[v.id] = true; // marca como visitado

    while(true)
    {

        // v.imprime();
        list<No>::iterator it;
        for(it = v.lista.begin(); it != v.lista.end(); it++)
        {
            //if(!visitados[it->id])
            //{
            cout << "Visitando vertice " << it->id  << " " << it->getTipo() <<" valor " << it->valor << "\n";
            //visitados[it->id] = true; // marca como visitado
            fila.push(*it); // insere na fila
            //}
        }

        // verifica se a fila NÃO está vazia
        if(!fila.empty())
        {
            v = fila.front(); // obtém o primeiro elemento
            copiaArestas(&v);
            //v.imprime();
            fila.pop(); // remove da fila
        }
        else
            break;
    }
}
int icooordenada=0;
void Grafo::buscaAndOr(No v, GLfloat coordena[])
{
//    cout << "BUSCA AND OR\n";
    queue<No> fila;
    bool visitados[V]; // vetor de visitados

    for(int i = 0; i < V; i++)
        visitados[i] = false;

    //cout << "Visitando vertice " << v.id << " " << v.getTipo() <<" valor " << v.valor << ">>>>" << v.coordenada << "\n";
    visitados[v.id] = true; // marca como visitado
    while(true)
    {
        // v.imprime();
        list<No>::iterator it;
        for(it = v.lista.begin(); it != v.lista.end(); it++)
        {
            visitados[it->id] = true; // marca como visitado
            if(it->getTipo()==("OR"))// pai
            {

            }
            if(it->getTipo()==("AND")) { // pai
                    //cout << "Visitando vertice " << it->id  << " " << it->getTipo() <<" valor " << it->valor << ">>>>" << it->coordenada << "\n";
                    fila.push(*it); // insere na fila
            }
            if(it->getTipo()==("FILHO")) { // pai
                    coordena[icooordenada]=it->coordenada;
                    icooordenada++;
                    //cout << "F Visitando vertice " << it->id  << " " << it->getTipo() <<" valor " << it->valor << ">>>>" << it->coordenada << "\n";
                    //fila.push(*it); // insere na fila
            }
        }

        // verifica se a fila NÃO está vazia
        if(!fila.empty())
        {
            v = fila.front(); // obtém o primeiro elemento
            copiaArestas(&v);
            //v.imprime();
            fila.pop(); // remove da fila
        }
        else
            break;
    }
     //cout << ">>>>>>>>>>>>>>" << coordena[0];
    // system("pause");
    icooordenada=0;
}

No Grafo::buscaId(No v, int i)
{
    cout << "BUSCA\n";
    queue<No> fila;
    bool visitados[V]; // vetor de visitados

    for(int i = 0; i < V; i++)
        visitados[i] = false;

    //cout << "Visitando vertice " << v.id <<" = " << i << "?\n";
    if(v.id==i) return v;
    visitados[v.id] = true; // marca como visitado

    while(true)
    {
        // v.imprime();
        list<No>::iterator it;

        for(it = v.lista.begin(); it != v.lista.end(); it++)
        {
            //if(!visitados[it->id])
            //{
            //cout << "Visitando vertice " << it->id  <<" valor " << it->valor << "\n";
            visitados[it->id] = true; // marca como visitado
            fila.push(*it); // insere na fila
            //}
        }

        // verifica se a fila NÃO está vazia
        if(!fila.empty())
        {
            v = fila.front(); // obtém o primeiro elemento
            copiaArestas(&v);
            if(v.id==i) return v;
            //v.imprime();
            fila.pop(); // remove da fila
        }
        else
            break;
    }
}

