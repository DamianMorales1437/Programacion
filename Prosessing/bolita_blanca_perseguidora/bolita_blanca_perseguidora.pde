float x,y;
float easing=0.05;
float diametro=60;

void setup()
{
size(800,800);
}
void draw()
{
  background(0);
  float targetx=mouseX;
  float targety=mouseY;
  x+=(targetx-x)*easing;
  y+=(targety-y)*easing;
  fill(220);
  ellipse(x,y,diametro,diametro);
  
  fill(200,0,0);
  ellipse(mouseX,mouseY,diametro/2,diametro/2);
}
