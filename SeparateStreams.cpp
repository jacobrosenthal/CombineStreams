#include <SeparateStreams.h>
#include <ringbuffer.h>

SeparateStreams::SeparateStreams(Stream &_w, Stream &_r){

  this->w = &_w; 
  this->r = &_r; 
}

// size_t SeparateStreams::write(const uint8_t *buf, size_t size) {
//   return size;
// }

size_t SeparateStreams::write(uint8_t c)
{
  return w->write(c);
}

void SeparateStreams::flush()
{
  return w->flush();
}

int SeparateStreams::available() {
  return r->available();
}

int SeparateStreams::read() {
  return r->read();
}

// //TODO 
// int SeparateStreams::read(uint8_t *buf, size_t size) {
// }

int SeparateStreams::peek() 
{
  return r->peek();
}