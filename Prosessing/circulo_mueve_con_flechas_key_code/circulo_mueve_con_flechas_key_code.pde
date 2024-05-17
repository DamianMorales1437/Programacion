int x=215;
int y=215;

void setup()
{
 size(480,480);
 background(0);
}

void draw()
{
 if(keyPressed&&(key==CODED))
 {
  if(keyCode==LEFT)
  {
    x-=3;
  }
  else
  {
     if(keyCode==RIGHT)
     {
      x+=3;
     }
     else 
     {
         if(keyCode==UP)
         {
          y-=3;
         }
         else
         {
             if(keyCode==DOWN)
              {
                y+=3;
              }
         }
     }
  }
 }
 fill(0,0,0,30);
 rect(0,0,480,480);
 fill(0,0,200);
 ellipse(x,y,20,20);
}
