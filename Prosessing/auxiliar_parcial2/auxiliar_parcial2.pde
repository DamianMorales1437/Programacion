int x=100;
int y=600;
int s=50; 
int [] y2=new int [10];
void setup()
{
 size (1400,700); 
}

void draw()
{
background(0);

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

void mousePressed()
{
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
