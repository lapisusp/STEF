/*
 * parametrizacao.h
 *
 *  Created on: 08/12/2013
 *      Author: rafa
 */

#ifndef PARAMETRIZACAO_H_
#define PARAMETRIZACAO_H_
#include <GL/glut.h>

class Parametrizacao {
public:
	Parametrizacao();
	virtual ~Parametrizacao();
	const static GLint OPEN = 0;
	const static GLint CLOSED = 1;
	const static GLint UNIFORM = 1;
	const static GLint CHORDlENGTH = 2;
	const static GLint CENTRIPETAL = 3;
	void curv_parametrize(int numpts, float datpts[][3], int opcl, int param, float knots[]);

private:
	float curv_pt_dist(int num1, float first[][3],int num2, float last[][3]);
};

#endif /* PARAMETRIZACAO_H_ */
