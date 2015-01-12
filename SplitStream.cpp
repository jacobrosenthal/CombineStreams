#include <SplitStream.h>
#include <ringbuffer.h>

SplitStream::SplitStream(Stream &_one, Stream &_two){

  this->one = &_one; 
  this->two = &_two; 
}

// size_t SplitStream::write(const uint8_t *buf, size_t size) {
//   return size;
// }

size_t SplitStream::write(uint8_t c)
{
  two->write(c);
  return one->write(c);
}

void SplitStream::flush()
{
  two->flush();
  return one->flush();
}

int SplitStream::available() {
  return one->available();
}

int SplitStream::read() {
  return one->read();
}

// //TODO 
// int SplitStream::read(uint8_t *buf, size_t size) {
// }

int SplitStream::peek() 
{
  return one->peek();
}