/*
 * Nombre del Proyecto o Archivo
 * Copyright (C) 2025 Luis Miguel Hernández y Milagros de la Cruz Quispe
 *
 * Este programa es software libre: puedes redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General de GNU publicada
 * por la Fundación para el Software Libre, ya sea la versión 3 de la
 * Licencia, o (a tu elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN NINGUNA GARANTÍA; ni siquiera la garantía implícita de
 * COMERCIABILIDAD o ADECUACIÓN A UN PROPÓSITO PARTICULAR.
 * Consulta la Licencia Pública General de GNU para más detalles.
 *
 * Deberías haber recibido una copia de la Licencia Pública General de GNU
 * junto con este programa. Si no, consulta <https://www.gnu.org/licenses/>.
 */
/*
   @file  Notas
   @author:
   -Milagros de la Cruz Quispe
   -Luis Miguel Hernández Samaniego
   Arduino: 2.2.1
   @version: 0.0.2
   @date: 2024-01-05
   Actualizacion:
   Se agrego más sonidos Musicales
   -Milagros de la Cruz Quispe
   Arduino: 2.3.2
   @version: 0.0.1
   @date: 2024-03-08
	
*/

#include "Notas.h"

Notas::Notas(byte pin) {
  _pin = pin;
}

void Notas::begin() {
  pinMode(_pin, OUTPUT);
}

void Notas::note(String note_m, unsigned int duration) {
  if(Get_Frequency(note_m)>0){
	  float Th = (1000000 / Get_Frequency(note_m)) / 2;
  unsigned long tp = millis();
  while ((millis() - tp) <= duration) {
    digitalWrite(_pin, 1);
    delayMicroseconds(Th);
    digitalWrite(_pin, 0);
    delayMicroseconds(Th);
  }
  delay(1);
    
  }else{
	  delay(duration);
  }
  

}

float Notas::Get_Frequency(String note_m) {
  if (note_m == "Do") return C;
  else if (note_m == "Do#") return Db;
  else if (note_m == "Re") return D;
  else if (note_m == "Re#") return Eb;
  else if (note_m == "Mi") return E;
  else if (note_m == "Fa") return F;
  else if (note_m == "Fa#") return Gb;
  else if (note_m == "Sol") return G;
  else if (note_m == "Sol#") return Ab;
  else if (note_m == "La") return A;
  else if (note_m == "La#") return Ab;
  else if (note_m == "Si") return B;

  else if (note_m == "Do0") return C0;
  else if (note_m == "Do#0") return Db0;
  else if (note_m == "Re0") return D0;
  else if (note_m == "Re#0") return Eb0;
  else if (note_m == "Mi0") return E0;
  else if (note_m == "Fa0") return F0;
  else if (note_m == "Fa#0") return Gb0;
  else if (note_m == "Sol0") return G0;
  else if (note_m == "Sol#0") return Ab0;
  else if (note_m == "La0") return A0;
  else if (note_m == "La#0") return Ab0;
  else if (note_m == "Si0") return B0;

  else if (note_m == "Do1") return C1;
  else if (note_m == "Do#1") return Db1;
  else if (note_m == "Re1") return D1;
  else if (note_m == "Re#1") return Eb1;
  else if (note_m == "Mi1") return E1;
  else if (note_m == "Fa1") return F1;
  else if (note_m == "Fa#1") return Gb1;
  else if (note_m == "Sol1") return G1;
  else if (note_m == "Sol#1") return Ab1;
  else if (note_m == "La1") return A1;
  else if (note_m == "La#1") return Ab1;
  else if (note_m == "Si1") return B1;

  else if (note_m == "Do2") return C2;
  else if (note_m == "Do#2") return Db2;
  else if (note_m == "Re2") return D2;
  else if (note_m == "Re#2") return Eb2;
  else if (note_m == "Mi2") return E2;
  else if (note_m == "Fa2") return F2;
  else if (note_m == "Fa#2") return Gb2;
  else if (note_m == "Sol2") return G2;
  else if (note_m == "Sol#2") return Ab2;
  else if (note_m == "La2") return A2;
  else if (note_m == "La#2") return Ab2;
  else if (note_m == "Si2") return B2;

  else if (note_m == "Do3") return C3;
  else if (note_m == "Do#3") return Db3;
  else if (note_m == "Re3") return D3;
  else if (note_m == "Re#3") return Eb3;
  else if (note_m == "Mi3") return E3;
  else if (note_m == "Fa3") return F3;
  else if (note_m == "Fa#3") return Gb3;
  else if (note_m == "Sol3") return G3;
  else if (note_m == "Sol#3") return Ab3;
  else if (note_m == "La3") return A3;
  else if (note_m == "La#3") return Ab3;
  else if (note_m == "Si3") return B3;

  else if (note_m == "Do4") return C4;
  else if (note_m == "Do#4") return Db4;
  else if (note_m == "Re4") return D4;
  else if (note_m == "Re#4") return Eb4;
  else if (note_m == "Mi4") return E4;
  else if (note_m == "Fa4") return F4;
  else if (note_m == "Fa#4") return Gb4;
  else if (note_m == "Sol4") return G4;
  else if (note_m == "Sol#4") return Ab4;
  else if (note_m == "La4") return A4;
  else if (note_m == "La#4") return Ab4;
  else if (note_m == "Si4") return B4;

  else if (note_m == "Do5") return C5;
  else if (note_m == "Do#5") return Db5;
  else if (note_m == "Re5") return D5;
  else if (note_m == "Re#5") return Eb5;
  else if (note_m == "Mi5") return E5;
  else if (note_m == "Fa5") return F5;
  else if (note_m == "Fa#5") return Gb5;
  else if (note_m == "Sol5") return G5;
  else if (note_m == "Sol#5") return Ab5;
  else if (note_m == "La5") return A5;
  else if (note_m == "La#5") return Ab5;
  else if (note_m == "Si5") return B5;

  else if (note_m == "Do6") return C6;
  else if (note_m == "Do#6") return Db6;
  else if (note_m == "Re6") return D6;
  else if (note_m == "Re#6") return Eb6;
  else if (note_m == "Mi6") return E6;
  else if (note_m == "Fa6") return F6;
  else if (note_m == "Fa#6") return Gb6;
  else if (note_m == "Sol6") return G6;
  else if (note_m == "Sol#6") return Ab6;
  else if (note_m == "La6") return A6;
  else if (note_m == "La#6") return Ab6;
  else if (note_m == "Si6") return B6;

  else if (note_m == "Do7") return C7;
  else if (note_m == "Do#7") return Db7;
  else if (note_m == "Re7") return D7;
  else if (note_m == "Re#7") return Eb7;
  else if (note_m == "Mi7") return E7;
  else if (note_m == "Fa7") return F7;
  else if (note_m == "Fa#7") return Gb7;
  else if (note_m == "Sol7") return G7;
  else if (note_m == "Sol#7") return Ab7;
  else if (note_m == "La7") return A7;
  else if (note_m == "La#7") return Ab7;
  else if (note_m == "Si7") return B7;


  else if (note_m == "Do8") return C8;
  else if (note_m == "Do#8") return Db8;
  else if (note_m == "Re8") return D8;
  else if (note_m == "Re#8") return Eb8;
  else if (note_m == "Mi8") return E8;
  else if (note_m == "Fa8") return F8;
  else if (note_m == "Fa#8") return Gb8;
  else if (note_m == "Sol8") return G8;
  else if (note_m == "Sol#8") return Ab8;
  else if (note_m == "La8") return A8;
  else if (note_m == "La#8") return Ab8;
  else if (note_m == "Si8") return B8;


  else return 0;
}
void Notas::sound_Connection() {
  note("Mi4", 80);
  note("Mi6", 75);
  note("La6", 70);
  note("Mi5", 80);
  note("Mi5", 75);
  note("La6", 100);
  note("SILENCE", 2000);
}
void Notas::sound_Disconnection() {
  note("La5", 100);
  note("Mi4", 75);
  note("Mi5", 80);
  note("La4", 70);
  note("Mi5", 75);
  note("La4", 80);
  note("SILENCE", 2000);
}
void Notas::sound_Happy_Birthday() {
  note("Sol", 250);
  note("Sol", 250);

  note("La", 500);
  note("Sol", 500);
  note("Do5", 500);
  
  note("Si", 1000);
  note("Sol", 250);
  note("Sol", 250);

  note("La", 500);
  note("Sol", 500);
  note("Re5", 500);

  note("Do5", 500);
  note("Do5", 250);
  note("Mi5", 250);
  note("Sol5", 500);
  note("Mi5", 500);
  note("Do5", 500);

  note("Si", 500);
  note("La", 500);
  note("Fa5", 250);
  note("Fa5", 250);
  note("Mi5", 500);
  note("Do5", 500);
  note("Re5", 500);
  note("Do5", 500);
  note("SILENCE", 2000);
}
void Notas::sound_Noche_paz() {
  note("Sol", 750);
  note("La", 250);
  note("Sol", 500);
  note("Mi", 1000);
  note("Sol", 500);
  note("La", 250);
  note("Sol", 500);

  note("Mi", 1000);
  note("Re5", 1000);
  note("Re5", 500);
  note("Si", 1000);
  note("Do5", 1000);
  note("Do5", 500);
  note("Sol", 1000);
  note("La", 1000);
  note("La", 500);
  note("Do5", 500);
  note("Si", 250);
  note("La", 500);
  note("Sol", 500);
  note("La", 250);
  note("Sol", 500);
  note("Mi", 1000);
  note("La", 1000);
  note("La", 500);
  note("Do5", 500);
  note("Si", 250);
  note("La", 500);
  note("Sol", 500);
  note("La", 250);
  note("Sol", 500);
  note("Mi", 1000);
  note("Re5", 1000);
  note("Re5", 500);
  note("Fa5", 500);
  note("Re5", 250);
  note("Si", 500);
  note("Do5", 1000);
  note("Mi5", 1000);
  note("Do5", 500);
  note("Sol", 250);
  note("Mi", 500);
  note("Sol", 500);
  note("Fa", 250);
  note("Re", 500);
  note("Do", 1000);
  note("SILENCE", 2000);
}
void Notas::sound_Christmas_Music() {
  note("Mi", 250);
  note("Mi", 250);
  note("Mi", 500);

  note("Mi", 250);
  note("Mi", 250);
  note("Mi", 500);
  note("Mi", 250);
  note("Sol", 250);
  note("Do", 250);
  note("Re", 250);
  note("Mi", 500);
  note("SILENCE", 500);
 
  note("Fa", 250);
  note("Fa", 250);
  note("Fa", 500);
  note("Fa", 250);
  note("Mi", 250);
  note("Mi", 500);

  note("Mi", 250);
  note("Re", 250);
  note("Re", 250);
  note("Mi", 250);
  note("Re", 500);
  note("Sol", 500);

  note("Mi", 250);
  note("Mi", 250);
  note("Mi", 500);
  note("Mi", 250);
  note("Mi", 250);
  note("Mi", 500);

  note("Mi", 250);
  note("Sol", 250);
  note("Do", 250);
  note("Re", 250);
  note("Mi", 500);

  note("SILENCE", 500);


  note("Fa", 250);
  note("Fa", 250);
  note("Fa", 500);

  note("Fa", 250);
  note("Mi", 250);
  note("Mi", 500);

  note("Sol", 250);
  note("Sol", 250);
  note("Fa", 250);
  note("Re", 250);
  note("Do", 500);
  note("SILENCE", 2500);  
}
void Notas::sound_Star_Wars() {
	
  // Generar la melodía principal de Star Wars
  note("Sol", 500);
  note("Sol", 500);
  note("Re5", 500);
  note("Si", 375);
  note("Sol5", 125);
  note("Fa5", 500);
  note("Mi5", 500);
  
  note("Re6", 500);
  note("Si5", 375);
  note("Sol5", 125);
  note("Fa5", 500);
  note("Mi5", 500);
  
  note("Re6", 500);
  note("Si5", 375);
  note("Sol5", 125);
  note("Fa5", 500);
  note("Mi5", 500);
  
  note("Fa5", 250);
  note("Re5", 250);
  note("Mi5", 500);
  note("Do5", 375);
  note("Si", 125);
  note("La", 500);
  note("Sol", 500);
  
  note("Sol5", 500);
  note("Fa5", 375);
  note("Mi5", 125);
  note("Re5", 500);
  note("Do5", 500);
  
  note("Si", 375);
  note("La", 125);
  note("Sol", 500);
  note("Do5", 375);
  note("Si", 125);
  note("La", 500);
  
  note("Sol5", 500);
  note("Fa5", 375);
  note("Mi5", 125);
  note("Re5", 500);
  note("Do5", 500);
  
  note("Si", 375);
  note("La", 125);
  note("Sol", 500);
  note("Do5", 375);
  note("Si", 125);
  note("La", 500);
  
  note("SILENCE", 2000);  
  //-------------------------------------------------//
	
}
 //-------------------------------------------------//
void Notas::sound_BillieJean() {
  // Línea de bajo de "Billie Jean" - Versión simplificada
  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms
  note("La4", 500);    // Nota La en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms

  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms
  note("La4", 500);    // Nota La en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms

  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms
  note("La4", 500);    // Nota La en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms

  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("SILENCE", 500); // Silencio de 500 ms

  // Repetir patrón
  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms
  note("La4", 500);    // Nota La en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms

  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms
  note("La4", 500);    // Nota La en la cuarta octava, duración de 500 ms
  note("Sol4", 500);   // Nota Sol en la cuarta octava, duración de 500 ms

  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("SILENCE", 500); // Silencio de 500 ms

  note("Mi4", 500);    // Nota Mi en la cuarta octava, duración de 500 ms
  note("SILENCE", 1000); // Silencio de 1000 ms para finalizar
}

void Notas::sound_Dance() {
  // Primera sección: Ritmo rápido y animado
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Mi4", 150);    // Nota Mi en la cuarta octava, duración de 150 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Mi4", 150);    // Nota Mi en la cuarta octava, duración de 150 ms
  note("Do4", 150);    // Nota Do en la cuarta octava, duración de 150 ms
  note("Mi4", 150);    // Nota Mi en la cuarta octava, duración de 150 ms
  note("Do4", 150);    // Nota Do en la cuarta octava, duración de 150 ms
  note("Mi4", 150);    // Nota Mi en la cuarta octava, duración de 150 ms

  note("Sol4", 100);    // Nota Sol en la cuarta octava, duración de 100 ms
  note("La4", 100);     // Nota La en la cuarta octava, duración de 100 ms
  note("Si4", 100);     // Nota Si en la cuarta octava, duración de 100 ms
  note("La4", 100);     // Nota La en la cuarta octava, duración de 100 ms
  note("Sol4", 200);    // Nota Sol en la cuarta octava, duración de 200 ms
  
  note("SILENCE", 300); // Silencio de 300 ms

  // Segunda sección: Cambio de ritmo y notas
  note("La4", 150);    // Nota La en la cuarta octava, duración de 150 ms
  note("Si4", 150);    // Nota Si en la cuarta octava, duración de 150 ms
  note("La4", 150);    // Nota La en la cuarta octava, duración de 150 ms
  note("Si4", 150);    // Nota Si en la cuarta octava, duración de 150 ms
  note("Do5", 200);    // Nota Do en la quinta octava, duración de 200 ms
  note("Si4", 150);    // Nota Si en la cuarta octava, duración de 150 ms
  note("La4", 150);    // Nota La en la cuarta octava, duración de 150 ms
  note("Sol4", 200);   // Nota Sol en la cuarta octava, duración de 200 ms

  note("SILENCE", 300); // Silencio de 300 ms

  // Tercera sección: Cambio de octava y ritmo más rápido
  note("Do5", 150);    // Nota Do en la quinta octava, duración de 150 ms
  note("Re5", 150);    // Nota Re en la quinta octava, duración de 150 ms
  note("Mi5", 150);    // Nota Mi en la quinta octava, duración de 150 ms
  note("Re5", 150);    // Nota Re en la quinta octava, duración de 150 ms
  note("Do5", 300);    // Nota Do en la quinta octava, duración de 300 ms
  note("Si4", 150);    // Nota Si en la cuarta octava, duración de 150 ms
  note("La4", 150);    // Nota La en la cuarta octava, duración de 150 ms
  note("Sol4", 150);   // Nota Sol en la cuarta octava, duración de 150 ms
  note("La4", 150);    // Nota La en la cuarta octava, duración de 150 ms
  note("Si4", 200);    // Nota Si en la cuarta octava, duración de 200 ms

  note("SILENCE", 400); // Silencio de 400 ms

  // Cuarta sección: Conclusión con ritmo de cierre
  note("Sol4", 200);   // Nota Sol en la cuarta octava, duración de 200 ms
  note("Mi4", 200);    // Nota Mi en la cuarta octava, duración de 200 ms
  note("Do4", 200);    // Nota Do en la cuarta octava, duración de 200 ms
  note("Mi4", 200);    // Nota Mi en la cuarta octava, duración de 200 ms
  note("Sol4", 300);   // Nota Sol en la cuarta octava, duración de 300 ms
  note("SILENCE", 600); // Silencio de 600 ms
}

void Notas::sound_Greeting() {
  note("Do4", 200);    // Nota Do en la cuarta octava, duración de 200 ms
  note("Re4", 200);    // Nota Re en la cuarta octava, duración de 200 ms
  note("Mi4", 200);    // Nota Mi en la cuarta octava, duración de 200 ms
  note("Fa4", 200);    // Nota Fa en la cuarta octava, duración de 200 ms
  note("Sol4", 200);   // Nota Sol en la cuarta octava, duración de 200 ms
  note("La4", 200);    // Nota La en la cuarta octava, duración de 200 ms
  note("Si4", 200);    // Nota Si en la cuarta octava, duración de 200 ms
  note("Do5", 300);    // Nota Do en la quinta octava, duración de 300 ms
  note("Si4", 200);    // Nota Si en la cuarta octava, duración de 200 ms
  note("La4", 200);    // Nota La en la cuarta octava, duración de 200 ms
  note("Sol4", 200);   // Nota Sol en la cuarta octava, duración de 200 ms
  note("Fa4", 200);    // Nota Fa en la cuarta octava, duración de 200 ms
  note("Mi4", 200);    // Nota Mi en la cuarta octava, duración de 200 ms
  note("Re4", 200);    // Nota Re en la cuarta octava, duración de 200 ms
  note("Do4", 400);    // Nota Do en la cuarta octava, duración de 400 ms
  note("SILENCE", 500); // Silencio de 500 ms
}

void Notas::sound_Happy() {
  note("Do5", 200);    // Nota Do en la quinta octava, duración de 200 ms
  note("Mi5", 200);    // Nota Mi en la quinta octava, duración de 200 ms
  note("Sol5", 200);   // Nota Sol en la quinta octava, duración de 200 ms
  note("Do6", 400);    // Nota Do en la sexta octava, duración de 400 ms
  note("SILENCE", 200); // Silencio de 200 ms
  note("Do6", 200);    // Nota Do en la sexta octava, duración de 200 ms
  note("Sol5", 200);   // Nota Sol en la quinta octava, duración de 200 ms
  note("Mi5", 200);    // Nota Mi en la quinta octava, duración de 200 ms
  note("Do5", 400);    // Nota Do en la quinta octava, duración de 400 ms
}
void Notas::sound_Sad() {
  note("Mi4", 400);    // Nota Mi en la cuarta octava, duración de 400 ms
  note("Re4", 400);    // Nota Re en la cuarta octava, duración de 400 ms
  note("Do4", 800);    // Nota Do en la cuarta octava, duración de 800 ms
  note("SILENCE", 400); // Silencio de 400 ms
  note("Do4", 400);    // Nota Do en la cuarta octava, duración de 400 ms
  note("Re4", 400);    // Nota Re en la cuarta octava, duración de 400 ms
  note("Mi4", 800);    // Nota Mi en la cuarta octava, duración de 800 ms
}
void Notas::sound_Surprise() {
  note("Sol4", 100);   // Nota Sol en la cuarta octava, duración de 100 ms
  note("Do5", 100);    // Nota Do en la quinta octava, duración de 100 ms
  note("Sol5", 100);   // Nota Sol en la quinta octava, duración de 100 ms
  note("Do6", 100);    // Nota Do en la sexta octava, duración de 100 ms
  note("Sol6", 100);   // Nota Sol en la sexta octava, duración de 100 ms
  note("Do7", 100);    // Nota Do en la séptima octava, duración de 100 ms
  note("SILENCE", 200); // Silencio de 200 ms
  note("Do7", 100);    // Nota Do en la séptima octava, duración de 100 ms
  note("Sol6", 100);   // Nota Sol en la sexta octava, duración de 100 ms
  note("Do6", 100);    // Nota Do en la sexta octava, duración de 100 ms
  note("Sol5", 100);   // Nota Sol en la quinta octava, duración de 100 ms
  note("Do5", 100);    // Nota Do en la quinta octava, duración de 100 ms
  note("Sol4", 100);   // Nota Sol en la cuarta octava, duración de 100 ms
}
void Notas::sound_Angry() {
  // Primer parte del sonido molesto
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Segunda parte del sonido molesto
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Tercera parte del sonido molesto
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Cuarta parte del sonido molesto
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Quinta parte del sonido molesto
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Sexta parte del sonido molesto
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Séptima parte del sonido molesto
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Octava parte del sonido molesto
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Novena parte del sonido molesto
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms

  // Décima parte del sonido molesto
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Sol4", 150);    // Nota Sol en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
  note("Mi4", 150);     // Nota Mi en la cuarta octava, duración de 150 ms
  note("Silence", 50);  // Silencio de 50 ms
}

void Notas::sound_Fear() {
  note("Re4", 400);    // Nota Re en la cuarta octava, duración de 400 ms
  note("SILENCE", 100); // Silencio de 100 ms
  note("Re4", 400);    // Nota Re en la cuarta octava, duración de 400 ms
  note("SILENCE", 100); // Silencio de 100 ms
  note("Re4", 400);    // Nota Re en la cuarta octava, duración de 400 ms
  note("SILENCE", 100); // Silencio de 100 ms
  note("Re4", 400);    // Nota Re en la cuarta octava, duración de 400 ms
  note("SILENCE", 200); // Silencio de 200 ms
  note("Do4", 600);    // Nota Do en la cuarta octava, duración de 600 ms
}
void Notas::sound_Love() {
  note("Mi4", 300);    // Nota Mi en la cuarta octava, duración de 300 ms
  note("SILENCE", 100); // Silencio de 100 ms

  note("La4", 200);    // Nota La en la cuarta octava, duración de 200 ms
  note("Sol4", 200);   // Nota Sol en la cuarta octava, duración de 200 ms
  note("Fa4", 200);    // Nota Fa en la cuarta octava, duración de 200 ms
  note("SILENCE", 100); // Silencio de 100 ms

  note("Mi4", 300);    // Nota Mi en la cuarta octava, duración de 300 ms
  note("Sol4", 300);   // Nota Sol en la cuarta octava, duración de 300 ms
  note("Do5", 400);    // Nota Do en la quinta octava, duración de 400 ms
  note("SILENCE", 500); // Silencio de 500 ms
}
void Notas::sound_Happ() {
  note("Do5", 150);    // Nota Do en la quinta octava, duración de 150 ms
  note("Re5", 100);    // Nota Re en la quinta octava, duración de 100 ms
  note("Mi5", 200);    // Nota Mi en la quinta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("Re5", 150);    // Nota Re en la quinta octava, duración de 150 ms
  note("Mi5", 100);    // Nota Mi en la quinta octava, duración de 100 ms
  note("Fa5", 200);    // Nota Fa en la quinta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("Mi5", 150);    // Nota Mi en la quinta octava, duración de 150 ms
  note("Fa5", 100);    // Nota Fa en la quinta octava, duración de 100 ms
  note("Sol5", 200);   // Nota Sol en la quinta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("Fa5", 150);    // Nota Fa en la quinta octava, duración de 150 ms
  note("Sol5", 100);   // Nota Sol en la quinta octava, duración de 100 ms
  note("La5", 200);    // Nota La en la quinta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("Sol5", 150);   // Nota Sol en la quinta octava, duración de 150 ms
  note("La5", 100);    // Nota La en la quinta octava, duración de 100 ms
  note("Si5", 200);    // Nota Si en la quinta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("La5", 150);    // Nota La en la quinta octava, duración de 150 ms
  note("Si5", 100);    // Nota Si en la quinta octava, duración de 100 ms
  note("Do6", 200);    // Nota Do en la sexta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("Si5", 150);    // Nota Si en la quinta octava, duración de 150 ms
  note("Do6", 100);    // Nota Do en la sexta octava, duración de 100 ms
  note("Re6", 200);    // Nota Re en la sexta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms

  note("Do6", 150);    // Nota Do en la sexta octava, duración de 150 ms
  note("Re6", 100);    // Nota Re en la sexta octava, duración de 100 ms
  note("Mi6", 200);    // Nota Mi en la sexta octava, duración de 200 ms
  note("SILENCE", 300); // Silencio de 300 ms
}

void Notas::sound_Conquest_of_Paradise() {
  // Primera parte
  note("Do4", 500);
  note("Mi4", 500);
  note("Sol4", 500);
  note("Do5", 500);
  note("SILENCE", 100); // Pausa corta
  
  note("Do5", 500);
  note("Sol4", 500);
  note("Mi4", 500);
  note("Do4", 500);
  note("SILENCE", 100); // Pausa corta

  // Segunda parte
  note("La4", 500);
  note("Do5", 500);
  note("Mi5", 500);
  note("Do5", 500);
  note("SILENCE", 100); // Pausa corta
  
  note("Mi5", 500);
  note("Sol5", 500);
  note("Mi5", 500);
  note("Do5", 500);
  note("SILENCE", 100); // Pausa corta

  // Repite la primera parte
  note("Do4", 500);
  note("Mi4", 500);
  note("Sol4", 500);
  note("Do5", 500);
  note("SILENCE", 100); // Pausa corta
  
  note("Do5", 500);
  note("Sol4", 500);
  note("Mi4", 500);
  note("Do4", 500);
  note("SILENCE", 100); // Pausa corta

  // Final
  note("La4", 500);
  note("Do5", 500);
  note("Mi5", 500);
  note("Do5", 500);
  note("SILENCE", 100); // Pausa corta
  
  note("Mi5", 500);
  note("Sol5", 500);
  note("Mi5", 500);
  note("Do5", 500);
  note("SILENCE", 100); // Pausa larga al final
}
