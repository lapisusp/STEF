#include "MedidasBase.h"

/*------------------ Derived class RafaMedidas from MedidasBase ------------------*/
class RafaMedidas: public MedidasBase{
    public:
        void imprimeAlpha(){
        for(int i2=0;i2<46;i2++){
                cout << alphas[i2] << "\n";
            }
        }
        void lerAlphas(int emotion){

            ifstream infilestream;
            string line;
            string line2;
            float n;
            int i=0;
            if (emotion==1) infilestream.open("1_Alfas_Neutra_Satisfacao.txt");
            if (emotion==2) infilestream.open("2_Alfas_Neutra_Tristeza.txt");
            if (emotion==3) infilestream.open("3_Alfas_Neutra_Surpresa.txt");
            if (emotion==4) infilestream.open("4_Alfas_Neutra_Medo.txt");
            if (emotion==5) infilestream.open("5_Alfas_Neutra_Raiva.txt");
            if (emotion==6) infilestream.open("6_Alfas_Neutra_Aversao.txt");
            for(int x=0;x<5;x++){
                infilestream >> line;
            }
            //SEsquerda
            for(int x=0;x<3;x++){
                infilestream >> line;
            }
            for(int x=0;x<6;x++){
                infilestream >> line;
                infilestream >> line;
                infilestream >> n;
                alphas[i++]=n;
            }
            //SDireita
            for(int x=0;x<3;x++){
                infilestream >> line;
            }
            for(int x=0;x<6;x++){
                infilestream >> line;
                infilestream >> line;
                infilestream >> n;
                alphas[i++]=n;
            }
            //Oesquerdo
            for(int x=0;x<3;x++){
                infilestream >> line;
            }
            for(int x=0;x<8;x++){
                infilestream >> line;
                infilestream >> line;
                infilestream >> n;
                alphas[i++]=n;
            }
             //Odireito
            for(int x=0;x<3;x++){
                infilestream >> line;
            }
            for(int x=0;x<8;x++){
                infilestream >> line;
                infilestream >> line;
                infilestream >> n;
                alphas[i++]=n;
            }
            //Nariz
            for(int x=0;x<2;x++){
                infilestream >> line;
            }
            for(int x=0;x<10;x++){
                infilestream >> line;
                infilestream >> line;
                infilestream >> n;
                alphas[i++]=n;
            }

            //Boca
            for(int x=0;x<2;x++){
                infilestream >> line;
            }
            for(int x=0;x<8;x++){
                infilestream >> line;
                infilestream >> line;
                infilestream >> n;
                alphas[i++]=n;
            }
            infilestream.close();
        }
/*----------------------------------------------------*/

        void lerGrafo(Grafo*grafo){
            ifstream infilestream;
            string line;
            //N
            int tipo;
            string id;
            //R
            int no1;
            int no2;
            int i=0;
            infilestream.open("grafo.txt");
            while (infilestream) {
                infilestream >> line;
                if(line=="N") {
                        infilestream >> tipo;
                        infilestream >> id;
                        criaNo(tipo,id, grafo);
                }
                if(line=="F") {
                        infilestream >> tipo;
                        float coo;
                        infilestream >> coo;
                        infilestream >> id;

                        criaNoFolha(tipo,id, coo,grafo);
                }
                if(line=="R") {
                        infilestream >> no1;
                        infilestream >> no2;
                        criaRelacaoBin(no1, no2, grafo);
                }

            }
            cont=0;
            infilestream.close();

            //grafo.buscaAndOr(grafo.n[0]);
        }
/*----------------------------------------------------*/

        void criaNo(int tipo,string valor, Grafo *g){
          //  printf("[[criando no %i  %i]]\n",tipo, cont);
            No n0(tipo,cont,valor,0);
            g->n[cont]=n0;
            cont++;
        }
        void criaNoFolha(int tipo,string valor,float coo, Grafo *g){
           // printf("[[criando no %i  %i]]\n",tipo, cont);
            No n0(tipo,cont,valor,coo);
            g->n[cont]=n0;
            cont++;
        }

        void criaRelacaoBin(int pai,int filho,Grafo * g){
//        printf("[[criando aresta %i %i]]\n",pai, filho);

            g->adicionarAresta(g->n[pai],g->n[filho]);
            g->copiaArestas(&g->n[pai]);
        }
};
