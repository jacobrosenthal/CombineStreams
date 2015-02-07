#include <SeparateStreams.h>

SeparateStreams::SeparateStreams(Stream &_w, Stream &_r){

  this->w = &_w; 
  this->r = &_r; 
}

void SeparateStreams::setWrite(Stream &_w)
{
  this->w = &_w; 
}

void SeparateStreams::setRead(Stream &_r)
{
  this->r = &_r; 
}

int SeparateStreams::available() {
  return r->available();
}

int SeparateStreams::peek() 
{
  return r->peek();
}

void SeparateStreams::flush()
{
  w->flush();
}

int SeparateStreams::read() {
  return r->read();
}

size_t SeparateStreams::write(uint8_t c)
{
  return w->write(c);
}

size_t SeparateStreams::write(const char *str) {
  if (str == NULL) return 0;
  return w->write((const uint8_t *)str, strlen(str));
}

size_t SeparateStreams::write(const char *buffer, size_t size) {
  return w->write((const uint8_t *)buffer, size);
}

size_t SeparateStreams::write(const uint8_t *buffer, size_t size)
{
  size_t n = 0;
  while (size--) {
    n += w->write(*buffer++);
  }
  return n;
}

size_t SeparateStreams::print(const __FlashStringHelper *ifsh)
{
  return w->print(ifsh);
}

size_t SeparateStreams::print(const String &s)
{
  return w->print(s);
}

size_t SeparateStreams::print(const char str[])
{
  return w->print(str);
}

size_t SeparateStreams::print(char c)
{
  return w->print(c);
}

size_t SeparateStreams::print(unsigned char b, int base)
{
  return w->print(b, base);
}

size_t SeparateStreams::print(int n, int base)
{
  return w->print(n, base);
}

size_t SeparateStreams::print(unsigned int n, int base)
{
  return w->print(n, base);
}

size_t SeparateStreams::print(long n, int base)
{
  return w->print(n, base);
}

size_t SeparateStreams::print(unsigned long n, int base)
{
  return w->print(n, base);
}

size_t SeparateStreams::print(double n, int digits)
{
  return w->print(n, digits);
}

size_t SeparateStreams::println(const __FlashStringHelper *ifsh)
{
  return w->println(ifsh);
}

size_t SeparateStreams::print(const Printable& x)
{
  return w->print(x);
}

size_t SeparateStreams::println(void)
{
  return w->println();
}

size_t SeparateStreams::println(const String &s)
{
  return w->println(s);
}

size_t SeparateStreams::println(const char c[])
{
  return w->println(c);
}

size_t SeparateStreams::println(char c)
{
  return w->println(c);
}

size_t SeparateStreams::println(unsigned char b, int base)
{
  return w->println(b, base);
}

size_t SeparateStreams::println(int num, int base)
{
  return w->println(num, base);
}

size_t SeparateStreams::println(unsigned int num, int base)
{
  return w->println(num, base);
}

size_t SeparateStreams::println(long num, int base)
{
  return w->println(num, base);
}

size_t SeparateStreams::println(unsigned long num, int base)
{
  return w->println(num, base);
}

size_t SeparateStreams::println(double num, int digits)
{
  return w->println(num, digits);
}

size_t SeparateStreams::println(const Printable& x)
{
  return w->println(x);
}