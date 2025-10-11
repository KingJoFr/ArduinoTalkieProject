# ArduinoTalkieProject

This project started as a group project I participated in in Intro to Engineering.  I later decided to expand on it on my own or rather try to realize the vision that we had had while working on it but couldn't make happen due to various constraints.

The idea was to create something to help the visually impaired navigate in their homes.  The device as originally imagined would have a motion sensor and as someone approached it would say "Entering the kitchen" or what ever room they're about to enter.  What we eneded up with was much simpler.  We made it continuously beep whenever an object was with a certain range which we decided should be the distance from the door jamb to the midpoint of the door frame.

Materials/ parts
Microcontroller: Arduino Uno
Sensors: HC-SR04 ultrasonic sensor
Output: Speaker
Power supply: battery pack/usb cable
bread board

software/ libraries
Voice Recorder(Android app on my phone)
Arduino IDE
Arduino Talkie Library
ffmpeg
python_wizard

The process was:
    1. Record on myself using my phone saying a phrase such as "Entering kitchen"
    2. Upload that to my computer then use ffmpeg to convert it to wav format
    3. Use python_wizard library to then convert that to lpc format
    4. Put the lpc code into the arduino source code
    5. Power up the Arduino and listen to my sad voice

I mean the sound quality is really bad when I say sad.  I haven't been able to figure out why it's so bad but I currently don't have much free time to dedicate to this project.

