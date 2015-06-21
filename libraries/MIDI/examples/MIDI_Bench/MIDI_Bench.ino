#include <MIDI.h>

// This program will measure the time needed to receive, parse and process a
// NoteOn message.
// For it to work, please connect RX and TX on the MIDI port:
// Due, Leonardo and other USB-native Arduinos:     Serial1
// All other Arduinos:                              Connect pins 2 and 3.
// The program will then wait for 100 loops and print the results.

    #include <SoftwareSerial.h>
    SoftwareSerial midiSerial(10, 11);
    MIDI_CREATE_INSTANCE(SoftwareSerial, midiSerial, midiBench);

// -----------------------------------------------------------------------------

void setup()
{
    midiBench.begin();

}

void loop()
{
           midiBench.sendNoteOn(42,127,0);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(100);             // Wait for a second
        midiBench.sendNoteOff(42,0,0); 
    }

