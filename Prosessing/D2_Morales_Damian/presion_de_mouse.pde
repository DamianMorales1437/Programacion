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
