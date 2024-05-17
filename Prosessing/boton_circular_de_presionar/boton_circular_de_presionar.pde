boolean boton=false;
int x=150;
int y=150;
int radio =100;
void setup()
{
 size(1000,1000);
 ellipseMode(RADIUS);
}
void draw()
{
if(boton)//si boton es verdadero
  {
  background(255);
  stroke(255);
  }
  else //si boton es falso 
  {
   background(0);
   stroke(0);
  }
fill(50,50,255);//color circulo del boton
ellipse(x,y,radio,radio);//circulo del boton
}
void mousePressed()//funcion cuando el mouse esta presionado
{
  float d=dist(mouseX,mouseY,x,y);//distancia entre el mouse y el centro del boton
 if(d<radio)
 {
   if (boton)
   {
     boton=false;//si boton es vardadera cambia a false
   }
   else
   {
    boton=true; //si boton es falsa cambia a verdadera
   }
 } 
}
