/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
** Joan Josep Moreno                                                             **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino
int tempo = 1000;
int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs
//********** Setup ****************************************************************
void setup()
{
 Serial.begin(9600);
 delay(tempo * 3);
 Serial.println("Valor dels LDRs");
}
//********** Loop *****************************************************************
void loop()
{
  delay(tempo);
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
    valLdr0 = map(valLdr0, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
Serial.print("Lectura del primer LDR  ");    
Serial.println(valLdr0);
delay(tempo);
  valLdr1 = analogRead(ldr1);   // llegir valor ldr1
    valLdr1 = map(valLdr1, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
Serial.print("Lectura del segon LDR   ");    
Serial.println(valLdr1);
delay(tempo);
  valLdr2 = analogRead(ldr2);   // llegir valor ldr2
    valLdr2 = map(valLdr2, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
Serial.print("Lectura del tercer LDR  ");    
Serial.println(valLdr2);
delay(tempo);
Serial.println("   ");
}
//********** Funcions *************************************************************
