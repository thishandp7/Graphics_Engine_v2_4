#pragma once
#include <QWidget>
#include <QOpenGLWidget>
#include <gl/GLU.h>
#include <gl/GL.h>

class OGLViewport : public QOpenGLWidget
{
public:
	OGLViewport(QWidget *parent = 0);
	~OGLViewport();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
};

