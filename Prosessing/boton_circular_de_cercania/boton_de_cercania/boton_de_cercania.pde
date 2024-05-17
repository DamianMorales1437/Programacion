int y=400;
int x=400;
int radio=200;

void setup()
{
  size(800,800);
  ellipseMode(RADIUS);
}

void draw()
{
background(100);
float d=dist(mouseX,mouseY,x,y);
if(d<radio)
 {
  fill(0,0,255);
 }
 else
 {
  fill(255,0,0); 
 }
 ellipse(x,y,radio,radio);
}
