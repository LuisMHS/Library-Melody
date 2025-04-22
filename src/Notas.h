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

#ifndef Notas_h
#define Notas_h
#include <Arduino.h>
// Frecuencia de la Octava musical, 12 notas 
// Notación Americana
#define  C  261.63  //Do
#define  Db 277.18  //Do#
#define  D 293.66   //Re
#define  Eb 311.13  //Re#
#define  E  329.63  //Mi
#define  F  349.23  //Fa
#define  Gb 369.99  //Fa#
#define  G  392     //Sol
#define  Ab 415.3   //Sol#
#define  A  440     //La
#define  Bb 466.16  //La#
#define  B  493.88  //Si

#define  C0  16.35  //Do0
#define  Db0 17.32  //Do#0
#define  D0  18.35  //Re0
#define  Eb0 19.45  //Re#0
#define  E0  20.6   //Mi0
#define  F0  21.83  //Fa0
#define  Gb0 23.12  //Fa#0
#define  G0  24.5   //Sol0
#define  Ab0 25.96  //Sol#0
#define  A0  27.5   //La0
#define  Bb0 29.14  //La#0
#define  B0  30.87  //Si0

#define  C1  32.7   //Do1
#define  Db1 34.65  //Do#1
#define  D1  36.71  //Re1
#define  Eb1 38.89  //Re#1
#define  E1  41.2   //Mi1
#define  F1  43.65  //Fa1
#define  Gb1 46.25  //Fa#1
#define  G1  49     //Sol1
#define  Ab1 51.91  //Sol#1
#define  A1  55     //La1
#define  Bb1 58.27  //La#1
#define  B1  61.74  //Si1

#define  C2  65.41  //Do2
#define  Db2 69.3   //Do#2
#define  D2  73.42  //Re2
#define  Eb2 77.78  //Re#2
#define  E2  82.41  //Mi
#define  F2  87.31  //Fa
#define  Gb2 92.5   //Fa#2
#define  G2  98     //Sol2
#define  Ab2 103.83 //Sol#2
#define  A2  110    //La2
#define  Bb2 116.54 //La#2
#define  B2  123.47 //Si2

#define  C3  130.81  //Do3
#define  Db3 138.59  //Do#3
#define  D3  146.83  //Re3
#define  Eb3 155.56  //Re#3
#define  E3  164.81  //Mi3
#define  F3  174.61  //Fa3
#define  Gb3 185     //Fa#3
#define  G3  196     //Sol
#define  Ab3 207.65  //Sol#3
#define  A3  220     //La3
#define  Bb3 233.08  //La#3
#define  B3  246.94  //Si3

#define  C4  261.63  //Do4
#define  Db4 277.18  //Do#4
#define  D4  293.66  //Re4
#define  Eb4 311.13  //Re#4
#define  E4  329.63  //Mi4
#define  F4  349.23  //Fa4
#define  Gb4 369.99  //Fa#4
#define  G4  392     //Sol4
#define  Ab4 415.3   //Sol#4
#define  A4  440     //La4
#define  Bb4 466.16  //La#4
#define  B4  493.88  //Si4

#define  C5  523.25  //Do5
#define  Db5 554.37  //Do#5
#define  D5  587.33  //Re
#define  Eb5 622.25  //Re#5
#define  E5  659.26  //Mi5
#define  F5  698.46  //Fa5
#define  Gb5 739.99  //Fa#5
#define  G5  783.99  //Sol5
#define  Ab5 830.61  //Sol#5
#define  A5  880     //La5
#define  Bb5 932.33  //La#5
#define  B5  987.77  //Si5

#define  C6  1046.5   //Do6
#define  Db6 1108.73  //Do#6
#define  D6  1174.66  //Re6
#define  Eb6 1244.51  //Re#6
#define  E6  1318.51  //Mi6
#define  F6  1396.91  //Fa6
#define  Gb6 1479.98  //Fa#6
#define  G6  1567.98  //Sol6
#define  Ab6 1661.22  //Sol#6
#define  A6  1760     //La6
#define  Bb6 1864.66  //La#6
#define  B6  1975.53  //Si6

#define  C7  2093     //Do7
#define  Db7 2217.46  //Do#7
#define  D7  2349.32  //Re7
#define  Eb7 2489.02  //Re#7
#define  E7  2637.02  //Mi7
#define  F7  2793.83  //Fa7
#define  Gb7 2959.96  //Fa#7
#define  G7  3135.96  //Sol7
#define  Ab7 3322.44  //Sol#7
#define  A7  3520     //La7
#define  Bb7 3729.31  //La#7
#define  B7  3951.07  //Si7

#define  C8  4186.01  //Do8
#define  Db8 4434.92  //Do#8
#define  D8  4698.64  //Re8
#define  Eb8 4978.03  //Re#8
#define  E8  5274.04  //Mi8
#define  F8  5587.65  //Fa8
#define  Gb8 5919.91  //Fa#8
#define  G8  6271.93  //Sol8
#define  Ab8 6644.88  //Sol#8
#define  A8  7040.00  //La8
#define  Bb8 7458.62  //La#8
#define  B8  7902.13  //Si8

#define SILENCE 0

class Notas {
  private:
    byte _pin;
  public:
    Notas(byte pin);
    void note(String note_m, unsigned int duration);
    void begin();
    float Get_Frequency(String note_m);
    void sound_Connection();
    void sound_Disconnection();
    void sound_Happy_Birthday();
    void sound_Noche_paz();
    void sound_Christmas_Music();
	void sound_Star_Wars();
    void sound_BillieJean();
	void sound_Dance();
	void sound_Greeting();
    void sound_Happy();
	void sound_Sad();
	void sound_Surprise();
	void sound_Angry();
	void sound_Fear();
	void sound_Love();
	void sound_Happ();
	void sound_Conquest_of_Paradise();
};

#endif

