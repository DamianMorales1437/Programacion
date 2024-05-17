float x=0.0;
float velocidad=3.0;
float radio=55.0;
void setup()
{
 size(500,500);
 noStroke();
 ellipseMode(RADIUS);
 background(0);
}

void draw()
{ 
  fill(0,0,0,20);
 rect(0,0,width,height);
 fill(random(100,255),random(100,255),random(100,255));
 ellipse(x,height/2,radio,radio);
 x=x+velocidad;
 
 if (x>width+radio)
 {
   x=-radio;
 }
}
