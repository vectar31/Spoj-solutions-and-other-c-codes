#include <GL/glut.h>
#include "renderstate.h"
#include "piece.h"
#include "gamestate.h"

extern gamestate_t g_gstate;

void renderstate_t::draw_board() 
{
  // draw the base
  glBegin(GL_TRIANGLES);
  glColor4f(0.25, 0.59, 0.945, 1.0);
  glVertex3f(-1.0, -1.0, 0.0); 
  glVertex3f(1.0, -1.0, 0.0); 
  glVertex3f(0.0, 1.0, 0.0); 
  glColor4f(0.945, 0.61, 0.25, 1.0);
  glVertex3f(-0.95, -0.95, 0.0); 
  glVertex3f(0.95, -0.95, 0.0); 
  glVertex3f(0.0, 0.95, 0.0); 
  glEnd();
  
  // draw the pockets
  glPushMatrix();
  glTranslatef(-0.875,-0.9,0.0);
  glColor4f(0.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.045, 40, 16);
  glPopMatrix();
  
  glPushMatrix();
  glTranslatef(0.875,-0.9,0.0);
  glColor4f(0.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.045, 40, 16);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0.0,0.85,0.0);
  glColor4f(0.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.045, 40, 16);
  glPopMatrix();
  
  // Draw lines
  glPushMatrix();
  glBegin(GL_LINES);
    glRotatef(0.0, 0.0, 0.0, 0.0);
    glVertex2f (-0.65, -0.83);
    glVertex2f (0.65, -0.83);
    glVertex2f (-0.65, -0.78);
    glVertex2f (0.65, -0.78);    
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glBegin (GL_LINES);
   glRotatef(120.0, 0.0, 0.0, 0.0);
   glVertex2f (0.68, -0.72);
   glVertex2f (0.065, 0.64);
   glVertex2f (0.63, -0.72);
   glVertex2f (0.02, 0.64);
  glEnd ();
  glPopMatrix();

  glPushMatrix();
  glBegin (GL_LINES);
   glRotatef(60.0, 0.0, 0.0, 0.0);
   glVertex2f (-0.68, -0.72);
   glVertex2f (-0.065, 0.64);
   glVertex2f (-0.63, -0.72);
   glVertex2f (-0.02, 0.64);
  glEnd ();
  glPopMatrix();
  
  // Draw end markers
  glPushMatrix();
  glTranslatef(-0.65,-0.805,0.0);
  glColor4f(1.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.03, 40, 16);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0.65,-0.805,0.0);
  glColor4f(1.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.03, 40, 16);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0.65,-0.72,0.0);
  glColor4f(1.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.03, 40, 16);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0.043,0.63,0.0);
  glColor4f(1.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.03, 40, 16);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-0.043,0.63,0.0);
  glColor4f(1.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.03, 40, 16);
  glPopMatrix();
  
  glPushMatrix();
  glTranslatef(-0.65,-0.72,0.0);
  glColor4f(1.0, 0.0, 0.0, 1.0);
  glutSolidSphere(0.03, 40, 16);
  glPopMatrix();

}

void renderstate_t::render()
{
  glLoadIdentity();
  draw_board();
  
  // draw other state_specific elements
  draw_coin(p1);
  glLoadIdentity();
  draw_coin(p2);
  
  glFlush();
}

void renderstate_t::draw_coin(carrompiece_t& piece)
{
  if(piece.is_visible) {
    switch(piece.type) {
      case STRIKER:
        glColor4f(0.34, 0.91, 0.51, 1.0);
        glTranslatef(piece.pos.x,piece.pos.y,0.0);
        glutSolidSphere(0.038, 20, 16);
        break;
    
      case WHITE:
        glColor4f(1.0, 1.0, 1.0, 1.0);
        glTranslatef(piece.pos.x,piece.pos.y,0.0);
        glutSolidSphere(0.03, 20, 16);
        break;
    
      case BLACK:
        glColor4f(0.37, 0.37, 0.37, 1.0);
        glTranslatef(piece.pos.x,piece.pos.y,0.0);
        glutSolidSphere(0.03, 20, 16);
        break;
    }
  }
}


void renderstate_t::copy_state()
{
  p1.pos.x = g_gstate.striker.pos.x;
  p1.pos.y = g_gstate.striker.pos.y;
  p1.type = g_gstate.striker.type;
  p1.is_visible = g_gstate.striker.is_visible;
  
  p2.pos.x = g_gstate.coin.pos.x;
  p2.pos.y = g_gstate.coin.pos.y;
  p2.type = g_gstate.coin.type;
  p2.is_visible = g_gstate.coin.is_visible;
  
}

