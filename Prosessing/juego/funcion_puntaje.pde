      void puntaje1(float x,float y,char letra)//puntaje jugador 1
      {
       if(x>=0 && x<=width-200 && y>=0 && y<height && key==letra )
         {
           puntaje1=puntaje1+1;
           key='|';
         }
      }
      
      void puntaje2(float x,float y,char letra)//puntaje jugador 2
      {
       if(x>=0 && x<=width-200 && y>=0 && y<height && key==letra )
         {
           puntaje2=puntaje2+1;
           key='|';
         }
      }
