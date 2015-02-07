#include <CombineStreams.h>

CombineStreams::CombineStreams(Stream &_w, Stream &_r){

  this->w = &_w; 
  this->r = &_r; 
}

void CombineStreams::setWrite(Stream &_w)
{
  this->w = &_w; 
}

void CombineStreams::setRead(Stream &_r)
{
  this->r = &_r; 
}

int CombineStreams::available() {
  return r->available();
}

int CombineStreams::peek() 
{
  return r->peek();
}

void CombineStreams::flush()
{
  w->flush();
}

int CombineStreams::read() {
  return r->read();
}

size_t CombineStreams::write(uint8_t c)
{
  return w->write(c);
}

size_t CombineStreams::write(const char *str) {
  if (str == NULL) return 0;
  return w->write((const uint8_t *)str, strlen(str));
}

size_t CombineStreams::write(const char *buffer, size_t size) {
  return w->write((const uint8_t *)buffer, size);
}

size_t CombineStreams::write(const uint8_t *buffer, size_t size)
{
  size_t n = 0;
  while (size--) {
    n += w->write(*buffer++);
  }
  return n;
}

size_t CombineStreams::print(const __FlashStringHelper *ifsh)
{
  return w->print(ifsh);
}

size_t CombineStreams::print(const String &s)
{
  return w->print(s);
}

size_t CombineStreams::print(const char str[])
{
  return w->print(str);
}

size_t CombineStreams::print(char c)
{
  return w->print(c);
}

size_t CombineStreams::print(unsigned char b, int base)
{
  return w->print(b, base);
}

size_t CombineStreams::print(int n, int base)
{
  return w->print(n, base);
}

size_t CombineStreams::print(unsigned int n, int base)
{
  return w->print(n, base);
}

size_t CombineStreams::print(long n, int base)
{
  return w->print(n, base);
}

size_t CombineStreams::print(unsigned long n, int base)
{
  return w->print(n, base);
}

size_t CombineStreams::print(double n, int digits)
{
  return w->print(n, digits);
}

size_t CombineStreams::println(const __FlashStringHelper *ifsh)
{
  return w->println(ifsh);
}

size_t CombineStreams::print(const Printable& x)
{
  return w->print(x);
}

size_t CombineStreams::println(void)
{
  return w->println();
}

size_t CombineStreams::println(const String &s)
{
  return w->println(s);
}

size_t CombineStreams::println(const char c[])
{
  return w->println(c);
}

size_t CombineStreams::println(char c)
{
  return w->println(c);
}

size_t CombineStreams::println(unsigned char b, int base)
{
  return w->println(b, base);
}

size_t CombineStreams::println(int num, int base)
{
  return w->println(num, base);
}

size_t CombineStreams::println(unsigned int num, int base)
{
  return w->println(num, base);
}

size_t CombineStreams::println(long num, int base)
{
  return w->println(num, base);
}

size_t CombineStreams::println(unsigned long num, int base)
{
  return w->println(num, base);
}

size_t CombineStreams::println(double num, int digits)
{
  return w->println(num, digits);
}

size_t CombineStreams::println(const Printable& x)
{
  return w->println(x);
}