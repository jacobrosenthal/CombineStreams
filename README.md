#CombineStreams

Make an Arduino stream write to one stream and read from another

##Note
This libarary is very much in beta. It hasn't been fully tested nor are all Serial class methods implemented yet.

##Install
As usual, download zip, unzip and rename to remove the dash character and place in your Arduino Libraries folder, on MacOSX ~/Documents/Arduino/libraries/

##Use
First argument is stream which will get writes, second stream is stream which reads, available, and peek will be done to.
```cpp
CombineStreams combineStreams(Serial, Serial);
```

Then use it just like a stream.
```cpp
combineStreams.write('a');
Serial.println((char)combineStreams.read());
```
