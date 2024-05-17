int puntaje1=0;//puntaje jugador 1
int puntaje2=0;//puntaje jugador 2
float radio=40;//radio elipses primera fase
float radio2=60;//radio elipses segunda fase
float velocidad=3;//velocidad de movimiento primera fase
float velocidad2=2;//velocidad de movimiento segunda fase
int tiempo=1000;//tiempo limite
float angulo;//angulo de giro de los cuadrados 
float vrota=0.04;//velocidad de rotacion de los cuadrados
float w=100;//variable dimenciones de los cuadrasos primera fase
float w2=200;//variable dimenciones de los cuadrasos segunda
int xb1=400;//variable x del boton de inicio de seleccion jugador 1
int yb1=400;//variable y del boton de inicio de seleccion jugador 1
int xb2=800;//variable x del boton de inicio de seleccion jugador 2
int yb2=400;//variable y del boton de inicio de seleccion jugador 2
int radb=100;//radio circulos de botones de inicio de jugadores
int opc=14;//variable para el segun de jugadores

void setup()
{
  size(1300,600);//dimenciones ventana
  noStroke();//sin bordes
  ellipseMode(RADIUS);//la ellipse se mide segun sus radios
  background(0);//fondo negro
}

float x1=-40;//variable x de la primera elipse 
float y1=-40;//variable y de la primera elipse 
float x2=width+900;//variable x de la segunda elipse 
float y2=-40;//variable y de la segunda elipse 
float x3=width+500;//variable x de la tercera elipse 
float y3=height+600;//variable y de la tercera elipse 
float xc1=500; //variable x del primer cuadrado
float yc1=-100;//variable y del primer cuadrado 
float xc2=-100; //variable x del segundo cuadrado
float yc2=height+800;//variable y del segundo cuadrado 
//fase 2
float x4=700;//variable x de la cuarta elipse 
float y4=height+200;//variable y de la cuarta elipse 
float x5=width+900;//variable x de la quinta elipse 
float y5=-100;//variable y de la quinta elipse 
float x6=width+500;//variable x de la sexta elipse 
float y6=height+600;//variable y de la sexta elipse 
float xc3=500; //variable x del tercer cuadrado 
float yc3=-100;//variable y del tercer cuadrado 
float xc4=-100; //variable x del cuarto cuadrado 
float yc4=height+800;//variable y del cuarto cuadrado 


//dos jugadores
//fase 1
float xc5=300; //variable x del quinto cuadrado 
float yc5=900;//variable y del quinto cuadrado 
//fase 2
float xc6=1500; //variable x del cuarto cuadrado 
float yc6=300;//variable y del cuarto cuadrado 

void draw()
{
 switch(opc)//segun de los jugadores
{
case 1:
jugador1();//caso de 1 jugador
break;
case 2:
jugador2();//caso de 2 jugadores
break;
default://en caso de aun no seleccionar
background(0);

fill(52,23,252);//color circulo del boton jugador 1
ellipse(xb1,yb1,radb,radb);//circulo del boton jugador1
fill(252,34,23);//color circulo del boton 2 jugadores
ellipse(xb2,yb2,radb,radb);//circulo del boton 2 jugadores
textSize(20);//tamaño letra
fill(255);//color letra
text("1 jugador",350,405);//escribir jugador 1 sobre el boton
text("2 jugadores",750,405);//escribir 2 jugadores sobre el boton
textSize(50);
text("FAST COLOR",450,200);
}
}
