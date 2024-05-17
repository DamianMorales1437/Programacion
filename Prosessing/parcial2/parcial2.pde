int x=100;//variable x de las barras
int y=600;//variable y de las barras
int s=50; //ancho de las barras
int [] y2=new int [10];//arry de alturas para las barras
boolean botonr=false;//condicion inicial del boton reset
float xbr=1150;//coordenda x del centro del boton reset
float ybr=100;//coordenada y de centro del boton reset
int radior=40;//radio del boton reset
boolean botonl=false;//condicion inicial del boton linea
float xbl=1150;//coordenda x del centro del boton linea
float ybl=200;//coordenada y de centro del boton linea
int radiol=40;//radio del boton linea

void setup ()
{
  size (1200,700);//tamaño de ventana de visualizacion
  ellipseMode(RADIUS);//el modo en que se mide la elipse (se mide el radio)
  strokeWeight(10);
}
void draw()
{
  background(125,150,200);//color de fonde (negro)
  
  if(botonr)//si boton reset es verdadero
   {
     y2[0]=y2[1]=y2[2]=y2[3]=y2[4]=y2[5]=y2[6]=y2[7]=y2[8]=y2[9]=50;
     
     if(botonl)// si boton linea es verdadero
       {
        fill(random(100,255),random(100,255),random(100,255));//color de barras
        //barras
        rect(x,y,s,-y2[0]);
        rect(2*x,y,s,-y2[1]);
        rect(3*x,y,s,-y2[2]);
        rect(4*x,y,s,-y2[3]);
        rect(5*x,y,s,-y2[4]);
        rect(6*x,y,s,-y2[5]);
        rect(7*x,y,s,-y2[6]);
        rect(8*x,y,s,-y2[7]);
        rect(9*x,y,s,-y2[8]);
        rect(10*x,y,s,-y2[9]);
        //rectas que unen los picos de las barras
        line(x+25,y-y2[0],(2*x)+25,y-y2[1]);
        line(2*x+25,y-y2[1],(3*x)+25,y-y2[2]);
        line(3*x+25,y-y2[2],(4*x)+25,y-y2[3]);
        line(4*x+25,y-y2[3],(5*x)+25,y-y2[4]);
        line(5*x+25,y-y2[4],(6*x)+25,y-y2[5]);
        line(6*x+25,y-y2[5],(7*x)+25,y-y2[6]);
        line(7*x+25,y-y2[6],(8*x)+25,y-y2[7]);
        line(8*x+25,y-y2[7],(9*x)+25,y-y2[8]);
        line(9*x+25,y-y2[8],(10*x)+25,y-y2[9]);
        
       }
       else//si boton linea es falso
       { 
         fill(random(100,255),random(100,255),random(100,255));//color de barras
         //barras
         rect(x,y,s,-y2[0]);
         rect(2*x,y,s,-y2[1]);
         rect(3*x,y,s,-y2[2]);
         rect(4*x,y,s,-y2[3]);
         rect(5*x,y,s,-y2[4]);
         rect(6*x,y,s,-y2[5]);
         rect(7*x,y,s,-y2[6]);
         rect(8*x,y,s,-y2[7]);
         rect(9*x,y,s,-y2[8]);
         rect(10*x,y,s,-y2[9]);
       }
    }
   
 else //si boton reset es falso
  {
    if(botonl)//si boton linea es verdadero
      {
       fill(random(100,255),random(100,255),random(100,255));//color de barras
       //barras
       rect(x,y,s,-y2[0]);
       rect(2*x,y,s,-y2[1]);
       rect(3*x,y,s,-y2[2]);
       rect(4*x,y,s,-y2[3]);
       rect(5*x,y,s,-y2[4]);
       rect(6*x,y,s,-y2[5]);
       rect(7*x,y,s,-y2[6]);
       rect(8*x,y,s,-y2[7]);
       rect(9*x,y,s,-y2[8]);
       rect(10*x,y,s,-y2[9]);
       //rectas que unen los picos de las barras
       line(x+25,y-y2[0],(2*x)+25,y-y2[1]);
       line(2*x+25,y-y2[1],(3*x)+25,y-y2[2]);
       line(3*x+25,y-y2[2],(4*x)+25,y-y2[3]);
       line(4*x+25,y-y2[3],(5*x)+25,y-y2[4]);
       line(5*x+25,y-y2[4],(6*x)+25,y-y2[5]);
       line(6*x+25,y-y2[5],(7*x)+25,y-y2[6]);
       line(7*x+25,y-y2[6],(8*x)+25,y-y2[7]);
       line(8*x+25,y-y2[7],(9*x)+25,y-y2[8]);
       line(9*x+25,y-y2[8],(10*x)+25,y-y2[9]);
      
      }
      else//si boton linea es falso
      {
       fill(random(100,255),random(100,255),random(100,255));//color de barras
       //barras
       rect(x,y,s,-y2[0]);
       rect(2*x,y,s,-y2[1]);
       rect(3*x,y,s,-y2[2]);
       rect(4*x,y,s,-y2[3]);
       rect(5*x,y,s,-y2[4]);
       rect(6*x,y,s,-y2[5]);
       rect(7*x,y,s,-y2[6]);
       rect(8*x,y,s,-y2[7]);
       rect(9*x,y,s,-y2[8]);
       rect(10*x,y,s,-y2[9]);
          
      }
  }


textSize(15);//tamaño de letra
fill(50,150,255);//color circulo del boton reset
ellipse(xbr,ybr,radior,radior);//circulo del boton de reset
fill(255,50,50);//color circulo del boton linea
ellipse(xbl,ybl,radiol,radiol);//circulo del boton de linea
fill(0);//color letra
text("reset",1133,106);//escribir reset
text("linea",1133,206);//escribir linea
//escribir valores de altura de las barras
text(y2[0],x,y+20);
text(y2[1],2*x,y+20);
text(y2[2],3*x,y+20);
text(y2[3],4*x,y+20);
text(y2[4],5*x,y+20);
text(y2[5],6*x,y+20);
text(y2[6],7*x,y+20);
text(y2[7],8*x,y+20);
text(y2[8],9*x,y+20);
text(y2[9],10*x,y+20);
}

void mousePressed()//funcion cuando el mouse esta presionado
{
  float dr=dist(mouseX,mouseY,xbr,ybr);//distancia entre el mouse y el centro del boton reset
 if(dr<radior)
 {
   if (botonr)
   {
     botonr=false;//si boton es vardadera cambia a false
   }
   else
   {
    botonr=true; //si boton es falsa cambia a verdadera
   }
 }
 float dl=dist(mouseX,mouseY,xbl,ybl);//distancia entre el mouse y el centro del boton linea
 if(dl<radiol)
 {
   if (botonl)
   {
     botonl=false;//si boton es vardadera cambia a false
   }
   else
   {
    botonl=true; //si boton es falsa cambia a verdadera
   }
 }
 //justo aqui comienzan las condiciones para llenar el array y2 dependiendo si el mouse esta presionado
 //y dependiendo en que barra se encuentre 
 if (mouseX>100 && mouseX<150)
  {
    y2[0]=mouseY;
  }
  else
  {
       if (mouseX>200 && mouseX<250)
      {
        y2[1]=mouseY;
      }
      else
      {
         if (mouseX>300 && mouseX<350)
         {
          y2[2]=mouseY;
         }
          else
         {
           if (mouseX>400 && mouseX<450)
            {
              y2[3]=mouseY;
            }
            else
            {
              if (mouseX>500 && mouseX<550)
               {
                 y2[4]=mouseY;
               }
                else
               {
                 if (mouseX>600 && mouseX<650)
                   {
                    y2[5]=mouseY;
                   }
                 else
                   {
                     if (mouseX>700 && mouseX<750)
                      {
                       y2[6]=mouseY;
                      }
                     else
                      {
                         if (mouseX>800 && mouseX<850)
                         {
                          y2[7]=mouseY;
                         }
                         else
                         {
                           if (mouseX>900 && mouseX<950)
                             {
                               y2[8]=mouseY;
                             }
                           else
                           {
                             if (mouseX> 1000 && mouseX<1050)
                               {
                                y2[9]=mouseY;
                               }
                           }
                         }
                       }
                    }
                }
            }
         }
      }
  }
 
}
