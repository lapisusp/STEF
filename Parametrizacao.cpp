/*
 * parametrizacao.cpp
 *
 *  Created on: 08/12/2013
 *      Author: rafa
 */

#include "Parametrizacao.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>



Parametrizacao::Parametrizacao() {
	// TODO Auto-generated constructor stub

}

Parametrizacao::~Parametrizacao() {
	// TODO Auto-generated destructor stub
}
//----------------------------------------------------------------
// Function: curv_parametrize
//
// Author: Steven Fleming
//
// Description: To parametrize a cubic B-spline curve based on chord length
// Method
//
// Inputs: number of poGLints, array of data points, open or closed,
// type of parametrization
//
// Outputs: Knot vector
//----------------------------------------------------------------
void Parametrizacao::curv_parametrize(GLint numpts, GLfloat datpts[][3], GLint opcl, GLint param, GLfloat knots[])
{
	GLfloat ratio; /*ratio of knot spacing to point dist*/
	GLfloat distance;
	//GLfloat first[3], last[3];
	GLint i;
	//GLfloat tol = 0.01;
	/* initialize first knot GLinterval */
	knots[3] = 0.0;
	knots[4] = 1.0;
	/* perform correct type of parametrization */
	switch(param)
	{
		/* uniform parametrization */
		case(1):
			for ( i = 5; i <= numpts+2; i++)
			{
				knots[i] = knots[i-1] + 1;
			}
		break;
		/*chord length parametrization*/
		case(2):
			distance = curv_pt_dist(1,datpts,2,datpts);
			ratio = 1/distance;
			/* calculate domain knots */
			for (i = 5; i <= numpts+2; i++)
			{
				distance = curv_pt_dist(i-3, datpts, i-2, datpts);
				knots[i] = distance * ratio + knots[i-1];
			}
		break;
		/*centripetal parametrization*/
		case(3):
			distance = curv_pt_dist(1, datpts, 2, datpts);
			ratio = 1/sqrt(distance);
		/*calculate domain knots*/
			for (i = 5; i <= numpts + 2; i++)
			{
				distance = sqrt(curv_pt_dist(i-3, datpts, i-2, datpts));
				knots[i] = distance*ratio + knots[i-1];
			}
		break;
		default:
			for (i=5; i <= numpts+2; i++)
			{
				knots[i] = knots[i-1] + 1;
			}
		}

		if (opcl == OPEN){
			distance = knots[3] - knots[4];
			for (i = 3; i >= 1; i--)
			{
				knots[i-1] = knots[i]+distance;
			}

			distance = knots[numpts+2] - knots[numpts+1];
			for (i = 2; i <= 4; i++)
			{
				knots[numpts+i+1] = knots[numpts+i]+distance;
			}

		} else {
			for (i=2; i >= 0; i--)
			{
				knots[i] = knots[i+1] + (knots[numpts+i-1] - knots[numpts+i]);
			}

			for (i=3; i <=5; i++)
			{
				knots[numpts+i] = knots[numpts+i-1] + (knots[i+1] - knots[i]);
			}
		}

 }
//-------------------------------------------------------------------
// module name: curv_pt_dist
//
// Description: calculates the actual distance between two 3-D poGLints
//
// Input: poGLint arrays for first and last points, poGLint numbers in array
//
// Output: distance between poGLints
//--------------------------------------------------------------------
GLfloat Parametrizacao::curv_pt_dist(GLint num1, GLfloat first[][3],GLint num2, GLfloat last[][3])
{
	GLfloat distance; /* distance between points*/
	distance = sqrt ((last[3*(num2-1)][0] - first[3*(num1-1)][0])*
	(last[3*(num2-1)][0] - first[3*(num1-1)][0])+
	(last[3*(num2-1)][1] - first[3*(num1-1)+1][1])*
	(last[3*(num2-1)][1] - first[3*(num1-1)+1][1])+
	(last[3*(num2-1)][2] - first[3*(num1-1)+2][3])*
	(last[3*(num2-1)][2] - first[3*(num1-1)+2][3]));
	return (distance);
}

