#ifndef _SEPARATESTREAMS_H
#define _SEPARATESTREAMS_H

#include "Arduino.h"

class SeparateStreams : public Stream {
  public:
    SeparateStreams(Stream &_w, Stream &_r);

    size_t write(uint8_t c);
    // size_t write(const uint8_t *buf, size_t size);

    int available();
    int read();
    // int read(uint8_t *buf, size_t size);
    int peek();
    void flush();
    void loop();

  private:
    Stream* w;
    Stream* r;
};

#endif // _SEPARATESTREAMS_H