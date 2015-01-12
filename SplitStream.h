#ifndef _SPLITSTREAM_H
#define _SPLITSTREAM_H

#include "Arduino.h"

class SplitStream : public Stream {
  public:
    SplitStream(Stream &_one, Stream &_two);

    size_t write(uint8_t c);
    // size_t write(const uint8_t *buf, size_t size);

    int available();
    int read();
    // int read(uint8_t *buf, size_t size);
    int peek();
    void flush();
    void loop();

  private:
    Stream* one;
    Stream* two;
};

#endif // _SCRATCHSERIAL_H