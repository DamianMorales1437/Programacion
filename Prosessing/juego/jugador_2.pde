void jugador2()
{
  
if(tiempo>0)//si el tiempo es mayor a cero
 {
 do//hacer
  { 
      
    if(puntaje1+puntaje2<20)//limite fase uno
      {
       fill(0,0,0,30);//degradado del rectangulo
       rect(0,0,width,height);//rectangulo para hacer el efecto estela
  
       fill(6,4,180);//color primera elipse
       ellipse(x1,y1,radio,radio);//dibujar primera elipse
       x1=x1+velocidad;//dezplazamiento x primera elipse
       y1=y1+velocidad;//desplazamiento y primeraelipse
       if (x1>width-200+radio && y1>height+radio)//retorno de mostrar en pantalla
         {
           x1=random(0,width-200);
           y1=random(0,height);
         }
      puntaje1(x1,y1,'a');//puntaje por esa elipse
      
      //en adelante asi son todas las elipses

      fill(196,4,7);
      ellipse(x2,y2,radio,radio);
      x2=x2-velocidad;
      y2=y2+velocidad;
      if (x2<-radio && y2>height+radio)
         {
           x2=random(0,width-200);
           y2=random(0,height);
         }
      puntaje1(x2,y2,'s');
 
      fill(3,255,12);
      pushMatrix();//inicio figura como un como un conunto de ordenes
      translate(xc1,yc1);//traslacion de todo el sistema
      rotate(angulo);//rotacion
      rect(-w/2,-w/2,w,w);//cuadrado
      popMatrix();//fin conjunto
      
      yc1+=velocidad;//cambio de posicion
      angulo+=vrota;//velocidad de rotacion
      if(yc1>height+w)//volver a mostrar en pantalla
         {
           xc1=random(0,width-200);
           yc1=random(0,height);
         }
          
      puntaje1(xc1,yc1,'d');//puntaje por cuadrado
      
      //en adelante asi son todos los cuadrados
         
         
      fill(229,84,12);
      pushMatrix();
      translate(xc2,yc2);
      rotate(angulo);
      rect(-w/2,-w/2,w,w);
      popMatrix();
      xc2+=velocidad;
      yc2-=velocidad;
      angulo+=vrota;
      if(xc2>width-200 && yc2<-w)
         {
           xc2=random(0,width-200);
           yc2=random(0,height);
         }
          
      puntaje2(xc2,yc2,'j');
      
      fill(98,12,198);
      ellipse(x3,y3,radio,radio);
      x3=x3-velocidad;
      y3=y3-velocidad;
      if(x3<-radio && y3<-radio)
         {
           x3=random(0,width-200);
           y3=random(0,height);
         }
      puntaje2(x3,y3,'k'); 
      
      fill(22,184,102);
      pushMatrix();
      translate(xc5,yc5);
      rotate(angulo);
      rect(-w/2,-w/2,w,w);
      popMatrix();
      yc5-=velocidad;
      angulo+=vrota;
      if( yc5<-w)
         {
           xc5=random(0,width-200);
           yc5=random(0,height);
         }
      puntaje2(xc5,yc5,'l');
      
      instrucciones21();
       velocidad=velocidad+0.001;
      }
      
  else //fase 2
      {
       fill(0,0,0,30);//degradado del rectangulo
       rect(0,0,width,height);//rectangulo para hacer el efecto estela
  
       fill(252,10,196);
       ellipse(x4,y4,radio2,radio2);
       y4=y4-velocidad2;
       if (y4<-radio2)
         {
           x4=random(0,width-200);
           y4=random(0,height);
         }
      puntaje1(x4,y4,'a');

      fill(20,245,201);
      ellipse(x5,y5,radio2,radio2);
      x5=x5-velocidad2;
      y5=y5+velocidad;
      if (x5<-radio && y5>height+radio2)
         {
           x5=random(0,width-200);
           y5=random(0,height);
         }
      puntaje1(x5,y5,'s');
 
      fill(49,252,23);
      pushMatrix();
      translate(xc3,yc3);
      rotate(angulo);
      rect(-w2/2,-w2/2,w2,w2);
      popMatrix();
      
      yc3+=velocidad2;
      angulo+=vrota;
      if(yc3>height+w)
         {
           xc3=random(0,width-200);
           yc3=-yc3;
         }
          
      puntaje1(xc3,yc3,'d');
         
         
      fill(225);
      pushMatrix();
      translate(xc4,yc4);
      rotate(angulo);
      rect(-w2/2,-w2/2,w2,w2);
      popMatrix();
      xc4+=velocidad2;
      yc4-=velocidad2;
      angulo+=vrota;
      if(xc4>width-200 && yc4<-w)
         {
           xc4=random(0,width-200);
           yc4=random(0,height);
         }
          
      puntaje2(xc4,yc4,'j');
      
      fill(252,245,23);
      ellipse(x6,y6,radio2,radio2);
      x6=x6-velocidad2;
      y6=y6-velocidad2;
      if(x6<-radio && y6<-radio)
         {
           x6=random(0,width-200);
           y6=random(0,height);
         }
      puntaje2(x6,y6,'k'); 
      
      fill(107,19,155);
      pushMatrix();
      translate(xc6,yc6);
      rotate(angulo);
      rect(-w2/2,-w2/2,w2,w2);
      popMatrix();
      xc6-=velocidad2;
      angulo+=vrota;
      if( xc6<-w)
         {
           xc6=random(0,width-200);
           yc6=random(0,height);
         }
      puntaje2(xc6,yc6,'l');
      
      instrucciones22();
       velocidad2=velocidad2+0.003;
      }

      

      fill(255);
      textSize(15);
      text("jugador 1",width-130,120);
      text(puntaje1,width-120,140);
      text("jugador 2",width-130,320);
      text(puntaje2,width-120,340);
      text("tiempo",width-130,50);
      text(tiempo,width-130,70);
      tiempo=tiempo-1;
    }
  while(tiempo<0);//hacer hasta que el tiempo sea menor a cero
 }
 else//si el tiempo es menor a cero
{
 textSize(45);//tamaño letra fin de juego
 text("GAME OVER",width/2-100,height/2);//mensaje de fin de juego
 textSize(20);//tamaño letra puntajes
 text("jugador 1:",width/2-10,height/2+50);//escribir la palabra puntaje
 text(puntaje1,width/2+100,height/2+50);//escribir el valor del puntaje
 text("jugador 2:",width/2-10,height/2+110);//escribir la palabra puntaje
 text(puntaje2,width/2+100,height/2+110);//escribir el valor del puntaje
}
}
