/*--------------------------------------------------------------
  Program:      volt_measure

  Description:  Reads value on analog input A2 and calculates
                the voltage assuming that a voltage divider
                network on the pin divides by 11.
  
  Hardware:     Arduino Uno with voltage divider on A2.
                
  Software:     Developed using Arduino 1.0.5 software
                Should be compatible with Arduino 1.0 +

  Date:         22 May 2013
  
 
  Author:       W.A. Smith, http://startingelectronics.org

---------------------------------------------------------------------------------------------

  Get form // https://startingelectronics.org/articles/arduino/measuring-voltage-with-arduino/


  Modified:  PDAControl      http://pdacontroles.com

  Modifications:  Unification in function of voltage measurement, reusable
                  channel configuration to measure.
  
  Modificaiones:  Unificacion en funcion de medicion de voltaje, reutilizable
                  configuracion de canal a medir.

   Date:         30 Sep 2017

   Documentation Test Node-RED

   http://pdacontrolen.com/measuring-dc-voltage-with-arduino-and-node-red/

   Documentacion Pruebas con Node-RED
   
   http://pdacontroles.com/midiendo-voltaje-dc-con-arduino-y-node-red/

   
  
--------------------------------------------------------------*/

// number of analog samples to take per reading
#define NUM_SAMPLES 10

int sum = 0;                    // sum of samples taken
unsigned char sample_count = 0; // current sample number
float voltage = 0.0;            // calculated voltage
float voltage_real = 0.0;            // calculated voltage
float offset_tester = 0.05;

void setup()
{
    Serial.begin(9600);
}

void loop()
{


Serial.println (readvoltage(2));      // Read -leer Ch2 ADC2
delay(1000);

}




String readvoltage(int ch)
{
   // take a number of analog samples and add them up
   while (sample_count < NUM_SAMPLES) {
      
        sum += analogRead(ch);
        sample_count++;
        //delay(10);
    }
    
    voltage = ((float)sum / (float)NUM_SAMPLES * 4.73) / 1024.0;   ///  

    
    //// V bat/ Vdivres = factor   6.31/0.53=11.9056   

/*
    He decidido realizar el calculo aparte.    
    Factor = Voltaje medicion (Bat 6v) / Divisor de voltaje
    
       11.905603 = 6.31v/0.53v

     Nota: Tener en cuenta que este es un ejemplo calibrado en mi caso, con mi bateria, resistencias y multimetro.       
  
   ----------------------------------------------------------------------------------------------------------------
    
    I have decided to perform the calculation separately.    
    Factor = Voltage measurement (Bat 6v) / Voltage divider

       11.905603 = 6.31v/0.53v

     NOTE: Keep in mind that this is a calibrated example in my case, with my battery, resistances and multimeter.

  */  
    
    voltage_real = voltage * 11.9056603;

    //Ajuste en caso de requerirlo
    ///Adjustment if required

    voltage_real + offset_tester;
 
   
    sample_count = 0;
    sum = 0;
    
     return String(voltage_real);     
  

}










    //voltage_real = voltage * 11.9056603;


    //voltage = ((float)sum / (float)NUM_SAMPLES * 4.71) / 1024.0;   ///  

