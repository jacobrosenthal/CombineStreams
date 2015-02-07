//unimpressive, but should look just like a serial port
#include <CombineStreams.h>

CombineStreams combineStreams(Serial, Serial); //write to, read from

void setup()  
{
  Serial.begin(57600);
}

void loop() // run over and over
{
  if (combineStreams.available())
  {
    combineStreams.println((char)combineStreams.read());
  }

}