#SplitStream

Split an Arduino stream writes (like Serial) into 2 streams

##Note
This libarary is very much in beta. It hasn't been fully tested nor are all Serial class methods implemented yet.

##Install
As usual, download zip, unzip and rename to remove the dash character and place in your Arduino Libraries folder, on MacOSX ~/Documents/Arduino/libraries/

##Use
Create a split stream out of 2 Stream. 
```cpp
SplitStream splitStream(Serial, mySerial);
```

Now everything written to splitstream will be written to both. All reads, peeks, and available are done on first stream. 
```cpp
splitStream.write('a');
```
