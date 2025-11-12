#include <GL/gl.h>
#include "../include/util.h"

void form_indices(double m[][3], int n)
{
    m[0][0] *= n;
    m[1][0] *= n;
    m[2][0] *= n;
    m[3][0] *= n;
    m[4][0] *= n;
    m[5][0] *= n;
    m[6][0] *= n;
    m[7][0] *= n;

    glBegin(GL_LINE_LOOP);

    glVertex3dv(m[0]);
    glVertex3dv(m[1]);
    glVertex3dv(m[2]);
    glVertex3dv(m[3]);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3dv(m[4]);
    glVertex3dv(m[5]);
    glVertex3dv(m[6]);
    glVertex3dv(m[7]);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3dv(m[0]);
    glVertex3dv(m[1]);
    glVertex3dv(m[5]);
    glVertex3dv(m[6]);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3dv(m[3]);
    glVertex3dv(m[2]);
    glVertex3dv(m[4]);
    glVertex3dv(m[7]);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*n, MIN, MIN_DEP);
    glVertex3f(MAX*n, MAX, MIN_DEP);
    glVertex3f(MAX*n, MAX, MAX_DEP);
    glVertex3f(MAX*n, MIN, MAX_DEP);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*n, MIN, MIN_DEP);
    glVertex3f(MAX*n, MAX, MIN_DEP);
    glVertex3f(MAX*n, MAX, MAX_DEP);
    glVertex3f(MAX*n, MIN, MAX_DEP);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*3*n, MIN+MOD_MIN, MAX_DEP-SEC_MOD_MIN);
    glVertex3f(MAX*3*n, MIN+MOD_MIN, MIN_DEP+SEC_MOD_MIN);
    glVertex3f(MAX*4*n, ZERO, ZERO);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*3*n, MAX-MOD_MIN, MAX_DEP-SEC_MOD_MIN);
    glVertex3f(MAX*3*n, MAX-MOD_MIN, MIN_DEP+SEC_MOD_MIN);
    glVertex3f(MAX*4*n, ZERO, ZERO);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*3*n, MAX-MOD_MIN, MAX_DEP-SEC_MOD_MIN);
    glVertex3f(MAX*3*n, MIN+MOD_MIN, MAX_DEP-SEC_MOD_MIN);
    glVertex3f(MAX*3*n, MIN+MOD_MIN, MIN_DEP+SEC_MOD_MIN);
    glVertex3f(MAX*3*n, MAX-MOD_MIN, MIN_DEP+SEC_MOD_MIN);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*1.5*n, ZERO+TER_MOD_MIN, MIN_DEP+MOD_MIN);
    glVertex3f(MAX*1.5*n, ZERO+TER_MOD_MIN, MAX_DEP-MOD_MIN);
    glVertex3f(MAX*3*n, ZERO+TER_MOD_MIN, MAX_DEP-MOD_MIN);
    glVertex3f(MAX*3*n, ZERO+TER_MOD_MIN, MIN_DEP+MOD_MIN);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(MAX*1.5*n, ZERO-TER_MOD_MIN, MIN_DEP+MOD_MIN);
    glVertex3f(MAX*1.5*n, ZERO-TER_MOD_MIN, MAX_DEP-MOD_MIN);
    glVertex3f(MAX*3*n, ZERO-TER_MOD_MIN, MAX_DEP-MOD_MIN);
    glVertex3f(MAX*3*n, ZERO-TER_MOD_MIN, MIN_DEP+MOD_MIN);

    glEnd();
}
