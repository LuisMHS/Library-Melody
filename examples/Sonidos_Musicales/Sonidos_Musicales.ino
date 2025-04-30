/*
   @Sketch: Sonidos_Musicales.ino
   @author: Luis Miguel Hernández Samaniego
   Arduino: 2.3.4
   @version ESP32: 3.1.1
    Arduino: 2.3.6
   @version ESP32: 3.2
   
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
  //-------------------------------------------------//

  //-------------------------------------------------//
  //Inicializar la comunicación serial con la PC
  Serial.begin(9600);
  //-------------------------------------------------//
}
void loop() {
  //-------------------------------------------//
  Melody.sound_Connection();
  //-------------------------------------------//
  //Happy Birthday to You
  Melody.sound_Happy_Birthday();
  //-------------------------------------------//
  //Noche de paz
  Melody.sound_Noche_paz();
  //-------------------------------------------//
  //Christmas music
  Melody.sound_Christmas_Music();
  //-------------------------------------------//
  Melody.sound_Disconnection();
  //-------------------------------------------//
}
