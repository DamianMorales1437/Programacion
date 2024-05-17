float[] x = new float[3000];
int direccion=1;
void setup() 
{
 size(1000, 500);
 noStroke();
 fill(255, 200);
 for (int i = 0; i < x.length; i++)
  {
  x[i] = random(-1000, 500);
  }
}
void draw()
{
 background(0);
   for (int i = 0; i < x.length; i++) 
   {
   x[i] += direccion*1;
   float y = i * 1;
   if ((x [i]>width-12) || (x[i]<12)) 
     {
      direccion=-direccion;
     }
     if(direccion==1)
     {
      fill(0,202,204);
      arc(x[i], y, 12, 12, 0.52, 5.76);
     }
     else 
     {
       fill(0,102,104);
       arc(x[i], y, 12, 12, 3.67, 8.9);
     }
   }
}
