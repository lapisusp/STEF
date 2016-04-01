/*
 * Face.cpp
 *
 *  Created on: 25/11/2013
 *      Author: rafaeltesta
 */
#include <stdio.h>
#include <GL/glut.h>

#include "Face.h"


Face::Face(GLint altura, GLint largura, GLint etinia) {
		this->altura=altura;
		this->largura=largura;
		//(altura/Antropometria::alturaCabeca)
		//desenha = new Desenha(altura, largura, 2.7);
		desenha = new Desenha(altura, largura, 4);
		medidas = new Medidas();
		antropometria = new Antropometria(altura, largura, etinia);
		movimentos = new Movimentos(altura, largura);
}


Face::~Face() {
	delete desenha;
	delete medidas;
	delete antropometria;
	delete movimentos;
}
void Face::inicilizaArraysCurvas()
{
	//sobrancelha
	antropometria->getSombrancelhaEsquerda(se);
	antropometria->getSombrancelhaDireita(sd);
	//olho
	antropometria->getOlhoEsquerdoCima(oec);
	antropometria->getOlhoEsquerdoBaixo(oeb);
	antropometria->getOlhoDireitoCima(odc);
	antropometria->getOlhoDireitoBaixo(odb);
	//nariz
	antropometria->getNarizEsquerda(ne);
	antropometria->getNarizDireita(nd);
	//boca
	antropometria->getLabioSuperiorCima(lsc);
	antropometria->getLabioSuperiorBaixo(lsb);
	antropometria->getLabioInferiorCima(lic);
	antropometria->getLabioInferiorBaixo(lib);
	//rugas olho
	antropometria->getRugasOlhoEsquerdoCima(roec);
	antropometria->getRugasOlhoEsquerdoMeio(roem);
	antropometria->getRugasOlhoEsquerdoBaixo(roeb);
	antropometria->getRugasOlhoDireitoCima(rodc);
	antropometria->getRugasOlhoDireitoMeio(rodm);
	antropometria->getRugasOlhoDireitoBaixo(rodb);
	//palpebras
	antropometria->getPalpebraEsquerda(pe);
	antropometria->getPalpebraDireita(pd);
	//contorno
	antropometria->getContornoEsquerdoCima(cec);
	antropometria->getContornoEsquerdoBaixo(ceb);
	antropometria->getContornoDireitoCima(cdc);
	antropometria->getContornoDireitoBaixo(cdb);
	//rugas testa
	antropometria->getRugaTestaCima(rtc);
	antropometria->getRugaTestaMeio(rtm);
	antropometria->getRugaTestaBaixo(rtb);
	//rugas centro testa
	antropometria->getRugaCentroTestaCima(rctc);
	antropometria->getRugaCentroTestaMeio(rctm);
	antropometria->getRugaCentroTestaBaixo(rctb);
	//pupilas
	antropometria->getPupilaEsquerda(pue);
	antropometria->getPupilaDireita(pud);
	pupilaR=antropometria->getRaioPupila();
	//
	antropometria->getRugaInteriorSobrancelhaEsquerda(rsie);
	antropometria->getRugaInteriorSobrancelhaCentro(rsic);
	antropometria->getRugaInteriorSobrancelhaDireita(rsid);
	//
	antropometria->getRugaSobrancelhaNarizCima(rsnc);
	antropometria->getRugaSobrancelhaNarizMeio(rsnm);
	antropometria->getRugaSobrancelhaNarizBaixo(rsnb);
	//
	antropometria->getRugaNarizEsquerdaCima(rnec);
	antropometria->getRugaNarizEsquerdaBaixo(rneb);
	antropometria->getRugaNarizDireitaCima(rndc);
	antropometria->getRugaNarizDireitaBaixo(rndb);
	//
	antropometria->getRugaBochechaEsquerda(rbe);
	antropometria->getRugaBochechaDireita(rbd);
	//
	antropometria->getNasolabialEsquerda(nle);
	antropometria->getNasolabialDireita(nld);
	//
	antropometria->getNasolabialInternaEsquerda(nlie);
	antropometria->getNasolabialInternaDireita(nlid);

}
void Face::desenhaSobrancelhaEsquerda()
{
	imprimePontos("Sobrancelha esquerda", se, 8);
    desenha->desenhaCurva(se, 8);
}

void Face::desenhaSobrancelhaDireita()
{
	imprimePontos("Sobrancelha direita", sd, 8);
	desenha->desenhaCurva(sd, 8);
}

void Face::desenhaOlhoEsquerdoCima()
{
	imprimePontos("Olho esquerdo cima", oec, 4);
    desenha->desenhaCurva(oec, 4);
}

void Face::desenhaOlhoEsquerdoBaixo()
{
	imprimePontos("Olho esquerdo baixo", oeb, 4);
	desenha->desenhaCurva(oeb, 4);

}

void Face::desenhaOlhoDireitoCima()
{
	imprimePontos("Olho direito cima", odc, 4);
	desenha->desenhaCurva(odc, 4);
}

void Face::desenhaOlhoDireitoBaixo()
{
	imprimePontos("Olho direito baixo", odb, 4);
	desenha->desenhaCurva(odb, 4);

}

void Face::desenhaNarizEsquerda()
{
	imprimePontos("Nariz esquerda", ne, 6);
    desenha->desenhaCurva(ne, 6);
}
void  Face::desenhaNarizDireita()
{
	imprimePontos("Nariz direita", nd, 6);
    desenha->desenhaCurva(nd, 6);
}

void Face::desenhaLabioSuperiorCima()
{
    imprimePontos("Boca cima", lsc, 4);
    desenha->desenhaCurva(lsc, 4);
}

void Face::desenhaLabioSuperiorBaixo()
{
	imprimePontos("Boca meio cima", lsb, 4);
	desenha->desenhaCurva(lsb, 4);
}

void Face::desenhaLabioInferiorCima()
{
	imprimePontos("Boca meio baixo", lic, 4);
	desenha->desenhaCurva(lic, 4);
}

void Face::desenhaLabioInferiorBaixo()
{
	imprimePontos("Boca baixo", lib, 4);
	desenha->desenhaCurva(lib, 4);
}

void Face::desenhaRugasOlhoEsquerdo()
{
	imprimePontos("rugas olho esquerdo cima", roec, 4);
	desenha->desenhaCurva(roec, 4);
	imprimePontos("rugas olho esquerdo meio", roem, 4);
	desenha->desenhaCurva(roem, 4);
	imprimePontos("rugas olho esquerdo baixo", roeb, 4);
	desenha->desenhaCurva(roeb, 4);
}
void Face::desenhaRugasOlhoDireito()
{
	imprimePontos("rugas olho direito cima", rodc, 4);
	desenha->desenhaCurva(rodc, 4);
	imprimePontos("rugas olho direito meio", rodm, 4);
	desenha->desenhaCurva(rodm, 4);
	imprimePontos("rugas olho direito baixo", rodb, 4);
	desenha->desenhaCurva(rodb, 4);
}

void Face::desenhaPalpebraEsquerda()
{
	imprimePontos("Palpebra esquerda", pe, 4);
	desenha->desenhaCurva(pe, 4);
}

void Face::desenhaPalpebraDireita()
{
	imprimePontos("Palpebra direita", pd, 4);
	desenha->desenhaCurva(pd, 4);
}

void Face::desenhaContronoEsquerdo()
{
	imprimePontos("Contorno esquerdo cima", cec, 4);
	desenha->desenhaCurva(cec, 4);
	imprimePontos("Contorno esquerdo baixo", ceb, 4);
	desenha->desenhaCurva(ceb, 4);
}

void Face::desenhaContornoDireito()
{
	imprimePontos("Contorno direito cima", cdc, 4);
	desenha->desenhaCurva(cdc, 4);
	imprimePontos("Contorno direito baixo", cdb, 4);
	desenha->desenhaCurva(cdb, 4);
}

void Face::desenhaRugaTestaCima()
{
	imprimePontos("Ruga testa cima", rtc, 8);
	desenha->desenhaCurva(rtc, 8);
}
void Face::desenhaRugaTestaMeio()
{
	imprimePontos("Ruga testa meio", rtm, 8);
	desenha->desenhaCurva(rtm, 8);
}
void Face::desenhaRugaTestaBaixo()
{
	imprimePontos("Ruga testa baixo", rtb, 8);
	desenha->desenhaCurva(rtb, 8);
}

void Face::desenhaRugaCentroTestaCima()
{
	imprimePontos("Ruga testa centro cima", rctc, 4);
	desenha->desenhaCurva(rctc, 4);
}
void Face::desenhaRugaCentroTestaMeio()
{
	imprimePontos("Ruga testa centro meio", rctm, 4);
	desenha->desenhaCurva(rctm, 4);
}
void Face::desenhaRugaCentroTestaBaixo()
{
	imprimePontos("Ruga testa centro centro baixo", rctb, 4);
	desenha->desenhaCurva(rctb, 4);
}

void Face::desenhaPupilaEsquerda()
{
	imprimePontos("Pupila esquerda", pue, 1);
	desenha->desenhaCirculo(pue, pupilaR);
}

void Face::desenhaPupilaDireita()
{
	imprimePontos("Pupila direita", pud, 1);
	desenha->desenhaCirculo(pud, pupilaR);
}

void Face::desenhaRugasCantoInternoSobrancelhaEsquerda()
{
	imprimePontos("Ruga Canto Interno Sobrancelha Esquerda", rsie, 4);
	desenha->desenhaCurva(rsie, 4);
}

void Face::desenhaRugasCantoInternoSobrancelhaCentro()
{
	imprimePontos("Ruga Canto Interno Sobrancelha Centro", rsic, 4);
	desenha->desenhaCurva(rsic, 4);
}

void Face::desenhaRugasCantoInternoSobrancelhaBaixo()
{
	imprimePontos("Ruga Canto Interno Sobrancelha Direita", rsid, 4);
	desenha->desenhaCurva(rsid, 4);
}

void Face::desenhaRugasNarizSuperiorCima()
{
	imprimePontos("Ruga Nariz Superior Cima", rsnc, 4);
	desenha->desenhaCurva(rsnc, 4);
}

void Face::desenhaRugasNarizSuperiorMeio()
{
	imprimePontos("Ruga Nariz Superior meio", rsnm, 4);
	desenha->desenhaCurva(rsnm, 4);
}

void Face::desenhaRugasNarizSuperiorBaixo()
{
	imprimePontos("Ruga Nariz Superior baixo", rsnb, 4);
	desenha->desenhaCurva(rsnb, 4);
}

void Face::desenhaRugasNarizInferiorEsquerda()
{
	imprimePontos("Ruga Nariz Inferior Esquerda baixo", rneb, 4);
	desenha->desenhaCurva(rneb, 4);
	imprimePontos("Ruga Nariz Inferior Esquerda cima", rnec, 4);
	desenha->desenhaCurva(rnec, 4);
}

void Face::desenhaRugasNarizInferiorDireita()
{
	imprimePontos("Ruga Nariz Inferior direita baixo", rndb, 4);
	desenha->desenhaCurva(rndb, 4);
	imprimePontos("Ruga Nariz Inferior direita cima", rndc, 4);
	desenha->desenhaCurva(rndc, 4);
}

void Face::desenhaRugasBochechasEsquerda()
{
	imprimePontos("Ruga Bochecha Esquerda", rbe, 8);
	desenha->desenhaCurva(rbe, 8);
}

void Face::desenhaRugasBochechasDireita()
{
	imprimePontos("Ruga Bochecha Direita", rbd, 8);
	desenha->desenhaCurva(rbd, 8);
}

void Face::desenhaNazolabialEsquerda()
{
	imprimePontos("Naso Labial Esquerda", nle, 4);
	desenha->desenhaCurva(nle, 4);
}

void Face::desenhaNazolabialDireita()
{
	imprimePontos("Naso Labial Direita", nld, 4);
	desenha->desenhaCurva(nld, 4);
}
void Face::desenhaNazolabialInternoEsquerda()
{
	imprimePontos("Naso Labial interno Esquerda", nlie, 4);
	desenha->desenhaCurva(nlie, 4);
}
void Face::desenhaNazolabialInternoDireita()
{
	imprimePontos("Naso Labial interno Direita", nlid, 4);
	desenha->desenhaCurva(nlid, 4);
}
void Face::desenhaNazolabial()
{
	desenhaNazolabialEsquerda();
	desenhaNazolabialDireita();
	desenhaNazolabialInternoEsquerda();
	desenhaNazolabialInternoDireita();
}

void Face::desenhaPupilas()
{
	desenhaPupilaEsquerda();
	desenhaPupilaDireita();
}


void Face::desenhaRugasTesta(GLfloat espessura)
{
	desenha->alteraEspessuraLinha(espessura*Desenha::espessuraPadrao);
	desenhaRugaTestaCima();
	desenhaRugaTestaMeio();
	desenhaRugaTestaBaixo();
	desenha->alteraEspessuraLinha(Desenha::espessuraPadrao);
}

void Face::desenhaRugasCentroTesta(GLfloat espessura)
{
	desenha->alteraEspessuraLinha(espessura*Desenha::espessuraPadrao);
	desenhaRugaCentroTestaCima();
	desenhaRugaCentroTestaMeio();
	desenhaRugaCentroTestaBaixo();
	desenha->alteraEspessuraLinha(Desenha::espessuraPadrao);
}

void Face::desenhaControno()
{
	desenhaContronoEsquerdo();
	desenhaContornoDireito();
}

void Face::desenhaPalpebras()
{
	desenhaPalpebraEsquerda();
	desenhaPalpebraDireita();
}

void Face::desenhaRugasOlhos(GLfloat espessura)
{
	desenha->alteraEspessuraLinha(espessura*Desenha::espessuraPadrao);
	desenhaRugasOlhoEsquerdo();
	desenhaRugasOlhoDireito();
	desenha->alteraEspessuraLinha(Desenha::espessuraPadrao);
}


void Face::desenhaSobrancelha()
{
    desenhaSobrancelhaEsquerda();
    desenhaSobrancelhaDireita();
}

void Face::desenhaOlhoEsquerdo()
{
    desenhaOlhoEsquerdoCima();
    desenhaOlhoEsquerdoBaixo();
}

void Face::desenhaOlhoDireito()
{
    desenhaOlhoDireitoCima();
    desenhaOlhoDireitoBaixo();
}

void Face::desenhaOlho()
{
    desenhaOlhoEsquerdo();
    desenhaOlhoDireito();
}

void Face::desenhaNariz()
{
    desenhaNarizEsquerda();
    desenhaNarizDireita();
}

void Face::desenhaRugasNarizInferior()
{
	desenhaRugasNarizInferiorEsquerda();
	desenhaRugasNarizInferiorDireita();
}

void Face::desenhaRugasNarizSuperior()
{
	desenhaRugasNarizSuperiorCima();
	desenhaRugasNarizSuperiorMeio();
	desenhaRugasNarizSuperiorBaixo();
}

void Face::desenhaRugasCantoInternoSobrancelha(GLfloat espessura)
{
	desenha->alteraEspessuraLinha(espessura*Desenha::espessuraPadrao);
	desenhaRugasCantoInternoSobrancelhaEsquerda();
	//desenhaRugasCantoInternoSobrancelhaCentro();
	desenhaRugasCantoInternoSobrancelhaBaixo();
	desenha->alteraEspessuraLinha(Desenha::espessuraPadrao);
}

void Face::desenhaRugasNariz(GLfloat espessura)
{
	desenha->alteraEspessuraLinha(espessura*Desenha::espessuraPadrao);
	desenhaRugasNarizSuperior();
	desenhaRugasNarizInferior();
	desenha->alteraEspessuraLinha(Desenha::espessuraPadrao);
}

void Face::desenhaRugasBochecha(GLfloat espessura)
{
	desenha->alteraEspessuraLinha(espessura*Desenha::espessuraPadrao);
	desenhaRugasBochechasDireita();
	desenhaRugasBochechasEsquerda();
	desenha->alteraEspessuraLinha(Desenha::espessuraPadrao);
}

void Face::desenhaBoca()
{
    desenhaLabioSuperiorCima();
    desenhaLabioSuperiorBaixo();
    desenhaLabioInferiorCima();
    desenhaLabioInferiorBaixo();
}

void Face::desenhaFace()
{
	 desenhaSobrancelha();
	 desenhaOlho();
	 desenhaNariz();
	 desenhaBoca();
	 desenhaPalpebras();
	 //desenhaControno();
	 desenhaPupilas();
}

void Face::desenhaFace(GLint expressao, GLfloat qtdExpressao)
{
	glClear(GL_COLOR_BUFFER_BIT);
	inicilizaArraysCurvas();
	 switch (expressao)
	 {
		case expressaoNeutra:
			neutra();
			break;
		case expressaoSatisfcao:
			satisfacao(qtdExpressao);
			break;
		case expressaoTriteza:
			tristeza(qtdExpressao);
			break;
		case expressaoSurpresa:
			surpresa(qtdExpressao);
			break;
		case expressaoMedo:
			medo(qtdExpressao);
			break;
		case expressaoAversao:
			aversao(qtdExpressao);
			break;
		case expressaoRaiva:
			raiva(qtdExpressao);
			break;
		case expressaoDesprezo:
			desprezo(qtdExpressao);
			break;
	}
	 desenhaFace();
	 glFlush();
	 glutSwapBuffers();

	 printf("Desenhou tudo.");
}

void Face::imprimePontos(const char* contexto, GLfloat pontos[][3], GLint nPontos)
{
	//printf("Matriz %s:\n", contexto);
	GLint i;
	for (i = 0; i < nPontos; i++)
	{
	  //printf("x: %f y: %f\n", pontos[i][0], pontos[i][1]);
	}
}

void Face::satisfacao(GLfloat intensidade)
{
	movimentos->au12LipCornerPuller(lsc,lsb,lic,lib,intensidade);
	movimentos->au6CheekRaiserLidCompressor(oeb,oec,odb,odc,pe,pd,roec,roem,roeb,rodc,rodm,rodb,intensidade);
	desenhaRugasOlhos(intensidade);
}

void Face::tristeza(GLfloat intensidade)
{
	movimentos->au1au4(se,sd,oec,odc,rctc,rctm,rctb,intensidade);
	desenhaRugasCentroTesta(intensidade);
	movimentos->au15LipCornerDepresor(lsc,lsb,lic,lib,intensidade);
	desenhaRugasCantoInternoSobrancelha(intensidade);
	//FAZER AU11
}
void Face::neutra()
{
	GLfloat aux[7][3];
	antropometria->getAuxiliares(aux);
	//desenha->desenhaPontosAzul(aux, 7);
	imprimePontos("Auxiliares", aux, 7);
	//desenhaControno();
}

void Face::surpresa(GLfloat intensidade)
{
	movimentos->au1au2(se,sd,oec,odc,rtc,rtm,rtb,rctc,rctm,rctb,intensidade);
	desenhaRugasTesta(intensidade);
	movimentos->au5UpperLidRaiser(oeb,oec,odb,odc,pe,pd,0.8*intensidade);
	movimentos->au26JawDrop(lsc,lsb,lic,lib,intensidade);
}

void Face::medo(GLfloat intensidade)
{
	movimentos->au1au2au4(se,sd,oec,odc,rtc,rtm,rtb,rctc,rctm,rctb,intensidade);
	movimentos->au5UpperLidRaiser(oeb,oec,odb,odc,pe,pd,intensidade);
	movimentos->au26JawDrop(lsc,lsb,lic,lib,0.8*intensidade);
	movimentos->au20LipStretcher(lsc,lsb,lic,lib,intensidade);
	desenhaRugasCantoInternoSobrancelha(intensidade);
}

void Face::aversao(GLfloat intensidade)
{
	movimentos->au9NoseWrinkler(ne,nd, lsc, lsb, intensidade);
	movimentos->au15LipCornerDepresor(lsc,lsb,lic,lib,0.1*intensidade);
	movimentos->au16au25LowerLipDepressor(lsc,lsb,lic,lib,intensidade);
	desenhaRugasNariz(intensidade);
	desenhaRugasBochecha(intensidade);
}

void Face::raiva(GLfloat intensidade)
{
	movimentos->au4BrowLowerer(se, sd, oec, odc, intensidade);
	movimentos->au5UpperLidRaiser(oeb,oec,odb,odc,pe,pd,intensidade);
	movimentos->au7LidTightener(oeb,oec,odb,odc,pe,pd,0.4*intensidade);
	movimentos->au23LipTightener(lsc,lsb,lic,lib,intensidade);
	desenhaRugasCantoInternoSobrancelha(intensidade);
	desenhaNazolabial();
}

void Face::desprezo(GLfloat intensidade)
{
	desenhaControno();
}
