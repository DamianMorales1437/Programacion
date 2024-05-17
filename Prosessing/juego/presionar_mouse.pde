void mousePressed()//funcion cuando el mouse esta presionado
{
  float d=dist(mouseX,mouseY,xb1,yb1);//distancia entre el mouse y el centro del boton
  float d2=dist(mouseX,mouseY,xb2,yb2);//distancia entre el mouse y el centro del boton
   if(d<radb)
    {
      opc=1;
    }
   if(d2<radb)
    {
      opc=2;
    }
}
