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
Arduino Talkie Library( https://docs.arduino.cc/libraries/talkie/)
ffmpeg
python_wizard ( https://github.com/ptwz/python_wizard)

The process was:
    1. Record myself using my phone saying a phrase such as "Entering kitchen". My app uses m4a.
    2. Upload that to my computer.  How I did that exactly was to upload the audio to google drive then download it onto my computer.
    3. Use ffmpeg to convert it to wav format.  Python_wizard seems to need .wav format.
        The process to do that is
        a.Download ffmpeg if you don't already have it.
            I'm on linux and the steps for that in the terminal are
            a1. sudo apt update
            a2. sudo apt install ffmpeg

        Continuing in the terminal and be sure to be in the directory of the file call ffmpeg:
        b. ffmpeg -i [inputfile.m4a] [outputFile.wav]
           the -i is for input
    4. Use python_wizard library to then convert that to lpc format
       In the terminal and in the directory of the file, with python 2.7 installed:
            python python_wizard.py filename
    5. Put the lpc code into the arduino source code
    6. Power up the Arduino and listen to my garbled voice

I haven't been able to figure out why it's so bad but I currently don't have much free time to dedicate to this project.  I imagine if I familiarized myself with the optional arguments of python_wizard I could produce higher quality audio.

