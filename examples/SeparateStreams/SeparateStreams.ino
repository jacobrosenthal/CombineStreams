//unimpressive, but should look just like a serial port
#include <SeparateStreams.h>

SeparateStreams separateStreams(Serial, Serial); //write to, read from

void setup()  
{
  Serial.begin(57600);
}

void loop() // run over and over
{
  if (separateStreams.available())
  {
    separateStreams.println((char)separateStreams.read());
  }

}