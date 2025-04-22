/*
   @Sketch: Sonidos_Musicales.ino
   @author: Luis Miguel Hernández Samaniego
   @author: Milagros de la Cruz Quispe
   Arduino: 2.2.1
   @version V1.0
   @date: 2024-01-05
   Actualización 
   @Arduino: 2.3.4
   Actualización 
   @Arduino: 2.3.6
   @version ESP32:3.2
*/
//-------------------------------------------------//
//incluir el archivo Notas.h
#include <Notas.h>
//-------------------------------------------------//

//-------------------------------------------------//
//Creación de un Objeto
Notas Melody(14);
//-------------------------------------------------//

void setup() {
  //-------------------------------------------------//
  //Inicializar la librería Notas
  Melody.begin();
}
void loop() {
  //-------------------------------------------//
  //-------------------------------------------//
  //Happy Birthday to You
  Melody.note("Sol5", 250);
  Melody.note("Sol5", 250);

  Melody.note("La", 500);
  Melody.note("Sol", 500);
  Melody.note("Do5", 500);

  Melody.note("Si", 1000);
  Melody.note("Sol", 250);
  Melody.note("Sol", 250);

  Melody.note("La", 500);
  Melody.note("Sol", 500);
  Melody.note("Re5", 500);

  Melody.note("Do5", 500);
  Melody.note("Do5", 250);
  Melody.note("Mi5", 250);

  Melody.note("Sol5", 500);
  Melody.note("Mi5", 500);
  Melody.note("Do5", 500);

  Melody.note("Si", 500);
  Melody.note("La", 500);
  Melody.note("Fa5", 250);
  Melody.note("Fa5", 250);

  Melody.note("Mi5", 500);
  Melody.note("Do5", 500);
  Melody.note("Re5", 500);
  Melody.note("Do5", 500);
  Melody.note("SILENCE", 2000);
  //-------------------------------------------//
  //-------------------------------------------//
  //Noche de paz
  Melody.note("Sol", 750);
  Melody.note("La", 250);
  Melody.note("Sol", 500);
  Melody.note("Mi", 1000);
  Melody.note("Sol", 500);
  Melody.note("La", 250);
  Melody.note("Sol", 500);


  Melody.note("Mi", 1000);
  Melody.note("Re5", 1000);
  Melody.note("Re5", 500);
  Melody.note("Si", 1000);
  Melody.note("D5", 1000);
  Melody.note("Do5", 500);

  Melody.note("Sol", 1000);
  Melody.note("La", 1000);
  Melody.note("La", 500);
  Melody.note("Do5", 500);
  Melody.note("Si", 250);
  Melody.note("La", 500);
  Melody.note("Sol", 500);
  Melody.note("La", 250);
  Melody.note("Sol", 500);

  Melody.note("Mi", 1000);
  Melody.note("La", 1000);
  Melody.note("La", 500);
  Melody.note("Do5", 500);
  Melody.note("Si", 250);
  Melody.note("La", 500);
  Melody.note("Sol", 500);
  Melody.note("La", 250);
  Melody.note("Sol", 500);

  Melody.note("Mi", 1000);
  Melody.note("Re5", 1000);
  Melody.note("Re5", 500);
  Melody.note("Fa5", 500);
  Melody.note("Re5", 250);
  Melody.note("Si", 500);
  Melody.note("Do5", 1000);

  Melody.note("Mi5", 1000);
  Melody.note("Do5", 500);
  Melody.note("Sol", 250);
  Melody.note("Mi", 500);
  Melody.note("Sol", 500);
  Melody.note("Fa", 250);
  Melody.note("Re", 500);
  Melody.note("Do", 1000);
  Melody.note("SILENCE", 2000);
  //-------------------------------------------//
  //-------------------------------------------//
  //Musica de navidad
  Melody.note("Mi", 250);
  Melody.note("Mi", 250);
  Melody.note("Mi", 500);

  Melody.note("Mi", 250);
  Melody.note("Mi", 250);
  Melody.note("Mi", 500);

  Melody.note("Mi", 250);
  Melody.note("Sol", 250);
  Melody.note("Do", 250);
  Melody.note("Re", 250);
  Melody.note("Mi", 500);
  Melody.note("SILENCE", 500);
  Melody.note("Fa", 250);
  Melody.note("Fa", 250);
  Melody.note("Fa", 500);

  Melody.note("Fa", 250);
  Melody.note("Mi", 250);
  Melody.note("Mi", 500);

  Melody.note("Mi", 250);
  Melody.note("Re", 250);
  Melody.note("Re", 250);
  Melody.note("Mi", 250);
  Melody.note("Re", 500);
  Melody.note("Sol", 500);

  Melody.note("Mi", 250);
  Melody.note("Mi", 250);
  Melody.note("Mi", 500);

  Melody.note("Mi", 250);
  Melody.note("Mi", 250);
  Melody.note("Mi", 500);

  Melody.note("Mi", 250);
  Melody.note("Sol", 250);
  Melody.note("Do", 250);
  Melody.note("Re", 250);
  Melody.note("Mi", 500);

  Melody.note("SILENCE", 500);

  Melody.note("Fa", 250);
  Melody.note("Fa", 250);
  Melody.note("Fa", 500);

  Melody.note("Fa", 250);
  Melody.note("Mi", 250);
  Melody.note("Mi", 500);

  Melody.note("Sol", 250);
  Melody.note("Sol", 250);
  Melody.note("Fa", 250);
  Melody.note("Re", 250);
  Melody.note("Do", 500);

  Melody.note("SILENCE", 500);
  Melody.note("SILENCE", 2000);
  //-------------------------------------------//
  //-------------------------------------------//
}