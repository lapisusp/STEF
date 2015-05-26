/*
 * Saida.cpp
 *
 *  Created on: 25/11/2013
 *      Author: rafaeltesta
 */


#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <GL/glut.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <ctime>

#include "Saida.h"
Saida::Saida() {
	// TODO Auto-generated constructor stub

}

Saida::~Saida() {
	// TODO Auto-generated destructor stub
}

void Saida::salvarImagem(char* filename)
{
 GLubyte * bits; //RGB bits
 GLint viewport[4]; //current viewport

 //get current viewport
 glGetIntegerv(GL_VIEWPORT, viewport);

 int w = viewport[2];
 int h = viewport[3];

 bits = new GLubyte[w*3*h];

 //read pixel from frame buffer
 glFinish(); //finish all commands of OpenGL
 glPixelStorei(GL_PACK_ALIGNMENT,1); //or glPixelStorei(GL_PACK_ALIGNMENT,4);
 glPixelStorei(GL_PACK_ROW_LENGTH, 0);
 glPixelStorei(GL_PACK_SKIP_ROWS, 0);
 glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
 glReadPixels(0, 0, w, h, GL_BGR_EXT, GL_UNSIGNED_BYTE, bits);

 IplImage * capImg = cvCreateImage( cvSize(w,h), IPL_DEPTH_8U, 3);
 for(int i=0; i < h; ++i)
 {
  for(int j=0; j < w; ++j)
  {
   capImg->imageData[i*capImg->widthStep + j*3+0] = (unsigned char)(bits[(h-i-1)*3*w + j*3+0]);
   capImg->imageData[i*capImg->widthStep + j*3+1] = (unsigned char)(bits[(h-i-1)*3*w + j*3+1]);
   capImg->imageData[i*capImg->widthStep + j*3+2] = (unsigned char)(bits[(h-i-1)*3*w + j*3+2]);
  }
 }
 //pega data e coloca no nome
 //time_t now = time(0);
 //char* dt = ctime(&now);
// strcat(filename, ".jpg");

 cvSaveImage(filename, capImg);

 //cvSaveImage("img.jpg", capImg);
 cvReleaseImage(&capImg);
 delete[] bits;
 //printf("salvo resultado");
}


