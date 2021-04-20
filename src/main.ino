#include <Bounce.h>
#include <MIDIcontroller.h>

byte MIDIchannel = 5;

MIDIpot pots[] = {
  MIDIpot(14, 70),
  MIDIpot(15, 71),
  MIDIpot(16, 72),
  MIDIpot(17, 73),
  MIDIpot(18, 74),
  MIDIpot(19, 75),
  MIDIpot(20, 76),
  MIDIpot(21, 77),
  MIDIpot(22, 78),
  MIDIpot(23, 79),
};

void setup()
{
}

void loop()
{
  for(auto i = 0; i < 10; i++)
  {
    pots[i].send();

    while(usbMIDI.read())
    {
    }
  }
}
