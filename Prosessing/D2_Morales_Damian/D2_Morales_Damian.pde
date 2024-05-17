/*
CONSIDERACIONES:

el programa iniciara en ceros,para añadir valores a las barras clikee en el espacio de la barra.

cuando se pulse el boton reset se quedara congelado en los valores de 50, para volver a darle valores con el mouse debera darle click otra vez al boton reset.

cuando pulse el boton de linea , se hara una linea en los picos de las barras,para quitarla debe pulsar otra vez el boton.
*/



String [] comida={"arroz","papa","pastel","empanada","pan","pizza","pollo","carne","queso","huevo"};
int x=100;//variable x de las barras
int y=600;//variable y de las barras
int s=50; //ancho de las barras
float [] y2=new float [10];//arry de alturas para las barras
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
        for(int i=0;i<=9;i++)
          {
            rect((i+1)*x,y,s,-y2[i]);  
          }
        //rectas que unen los picos de las barras
        for(int i=0;i<=8;i++)
          {
            line((i+1)*x+25,y-y2[i],((i+2)*x)+25,y-y2[i+1]); 
          }

       }
       else//si boton linea es falso
       { 
         fill(random(100,255),random(100,255),random(100,255));//color de barras
         //barras
         for(int i=0;i<=9;i++)
          {
           rect((i+1)*x,y,s,-y2[i]);
          }
       }
    }
   
 else //si boton reset es falso
  {
    if(botonl)//si boton linea es verdadero
     {
       fill(random(100,255),random(100,255),random(100,255));//color de barras
        //barras
        for(int i=0;i<=9;i++)
        {
          rect((i+1)*x,y,s,-y2[i]);  
        }
        //rectas que unen los picos de las barras
         for(int i=0;i<=8;i++)
        {
          line((i+1)*x+25,y-y2[i],((i+2)*x)+25,y-y2[i+1]); 
        }
      
      }
      else//si boton linea es falso
      {
       fill(random(100,255),random(100,255),random(100,255));//color de barras
       //barras
       for(int i=0;i<=9;i++)
        {
          rect((i+1)*x,y,s,-y2[i]);
        }
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
for(int i=0;i<=9;i++)
 {
  text(y2[i],(i+1)*x,y-20-y2[i]);
 }
 //escribir nombre de la barra
for(int i=0;i<=9;i++)
 {
  text(comida[i],(i+1)*x,y+20);
 }
 //escribir tema
 text("CALORIAS POR PORCION DE 100 GRAMOS",400,650);
}
