#include <stdlib.h>
#include <GL/glut.h>
#include "Medidas.h"
#include "Saida.h"
#include "Desenha.h"
#include "Face.h"
#include "Antropometria.h"
#include "Animacao.h"
#include "Entrada.h"
#include "Movimentos.h"
#include <sstream>>
#include <string>
#include "unistd.h"
#include "MedidasBase.h"
#include "RafaMedidas.cpp"
#include "TesteMedidas.cpp"
using namespace std;

GLint largura = 1000, altura = 1000;
Entrada* e;
GLint k = 0;
int exp = Face::expressaoNeutra;
Animacao* a;
string img;
bool pontos=false;
Grafo g(1000);


enum Type{RAFANUM,TESTENUM, REGGAE, INVALID};

/*------------------ Factory Class ------------------*/
class MedidasFactory {
    public:
    MedidasBase *getMedidas(Type type){
    MedidasBase *medidas = NULL;

    switch(type){
        case RAFANUM:
        medidas = new RafaMedidas();
        break;
        case TESTENUM:
//        medidas = new TesteMedidas();
        break;
        medidas = NULL;
        break;
    }
    return medidas;
    }
};
/*------------------ Final Factory Class ------------------*/

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
	glutSwapBuffers();
}

/**
 M�todo provis�rio para ler txt da �ltima face gerada
 **/
void displayMovimento(void) {
	Saida saida;
	glClear(GL_COLOR_BUFFER_BIT);
	 // "pontos" s� utilizado para exibir pontos antropom�tricos
	if(!pontos)e->arquivo("FaceMov.txt");
	else e->arquivoOpcionalPontos("FaceMov.txt");
	glFlush();
	glutSwapBuffers();
	saida.salvarImagem((char*) img.c_str());
}

void GerenciaMouse(int button, int state, int x, int y) {
	/*Saida s;
	 if (button == GLUT_RIGHT_BUTTON)
	 if (state == GLUT_DOWN) {
	 s.salvarImagem("outa.jpg");
	 }
	 glutPostRedisplay();
	 */
}

void setup(void) {
	glMatrixMode( GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-(largura / 2), (largura / 2), altura, 0, 1.0, -1.0);
	glMatrixMode( GL_MODELVIEW);
	glLoadIdentity();
	glClearColor(1.0, 1.0, 1.0, 1.0);
	e = new Entrada(altura, largura);
}

void GerenciaTeclado(unsigned char key, int x, int y) {

    glClear(GL_COLOR_BUFFER_BIT);
	Face* face = new Face(altura, largura, Antropometria::caucasiano, g);
	face->desenhaFace(exp, 1.0);
	a = new Animacao(altura, largura, Antropometria::caucasiano);
	//a->neutra();
	glFlush();
	glutSwapBuffers();

	if (key == '1') {
		a->satisfacao(1);
		img = "satisfacao100.jpg";
	} else if (key == 'q') {
		a->satisfacao(0.75);
		img = "satisfacao75.jpg";
	} else if (key == 'a') {
		a->satisfacao(0.5);
		img = "satisfacao50.jpg";
	} else if (key == 'z') {
		a->satisfacao(0.25);
		img = "satisfacao25.jpg";
	} else if (key == '2') {
		a->tristeza(1);
		img = "tristeza100.jpg";
	} else if (key == 'w') {
		a->tristeza(0.75);
		img = "tristeza75.jpg";
	} else if (key == 's') {
		a->tristeza(0.5);
		img = "tristeza50.jpg";
	} else if (key == 'x') {
		a->tristeza(0.25);
		img = "tristeza25.jpg";
	} else if (key == '3') {
		a->surpresa(1);
		img = "surpresa100.jpg";
	} else if (key == 'e') {
		a->surpresa(0.75);
		img = "surpresa75.jpg";
	} else if (key == 'd') {
		a->surpresa(0.5);
		img = "surpresa50.jpg";
	} else if (key == 'c') {
		a->surpresa(0.25);
		img = "surpresa25.jpg";
	} else if (key == '4') {
		a->medo(1);
		img = "medo100.jpg";
	} else if (key == 'r') {
		a->medo(0.75);
		img = "medo75.jpg";
	} else if (key == 'f') {
		a->medo(0.5);
		img = "medo50.jpg";
	} else if (key == 'v') {
		a->medo(0.25);
		img = "medo25.jpg";
	} else if (key == '5') {
		a->aversao(1);
		img = "aversao100.jpg";
	} else if (key == 't') {
		a->aversao(0.75);
		img = "aversao75.jpg";
	} else if (key == 'g') {
		a->aversao(0.5);
		img = "aversao50.jpg";
	} else if (key == 'b') {
		a->aversao(0.25);
		img = "aversao25.jpg";
	} else if (key == '6') {
		a->raiva(1);
		img = "raiva100.jpg";
	} else if (key == 'y') {
		a->raiva(0.75);
		img = "raiva75.jpg";
	} else if (key == 'h') {
		a->raiva(0.5);
		img = "raiva50.jpg";
	} else if (key == 'n') {
		a->raiva(0.25);
		img = "raiva25.jpg";
	} else if(key==' ') {
        // S� utilizado para exibir pontos antropom�tricos
		a->neutra();
        pontos=true;
		img = "neutraComPontos.jpg";
	} else {
		a->neutra();
		img = "neutra.jpg";
		//glutKeyboardFunc(GerenciaTeclado);
		//glutMouseFunc(GerenciaMouse);
		//glutDisplayFunc(display);
		//display();
		//glutMainLoop();
	}
	//glutMouseFunc(GerenciaMouse);
	glutKeyboardFunc(GerenciaTeclado);
    glutDisplayFunc(displayMovimento);
	displayMovimento();

	//Limpar buffer
	glFlush();
	glutSwapBuffers();

    // S� utilizado para exibir pontos antropom�tricos
	pontos=false;
}



void AtualizaAlphas2(int emotion) {
    /*ifstream infilestream;
    string line;
    string line2;
    float n;
    infilestream.open("1_Alfas_Neutra_Satisfacao.txt");
    while(infilestream){
        infilestream >> line;
        infilestream >> line2;
        infilestream >> n;
        cout <<n<<"\n";

    }
    infilestream.close();
*/


}
int main(int argc, char** argv) {



	/*Create factory*/
    MedidasFactory *medFac = new MedidasFactory();

    /*Factory instantiating an object of type RAFANUM*/
    MedidasBase *medidas = medFac->getMedidas(RAFANUM);

    if(medidas){
    medidas->lerAlphas(1);
    //medidas->imprimeAlpha();
    medidas->lerGrafo(&g);
     }
    //system("pause");
   // medidas = medFac->getMedidas(TESTENUM);

   // if(medidas)
   // medidas->lerAlphas(2);
    //medidas->imprimeAlpha();
   // medidas->lerGrafo();
    //system("pause");

    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(largura, altura);
	glutInitWindowPosition(100, 10);
	glutCreateWindow(argv[0]);
	setup();
	glutKeyboardFunc(GerenciaTeclado);
	//glutMouseFunc(GerenciaMouse);
	glutDisplayFunc(display);
	display();
	glutMainLoop();
	return 0;
}
