Day 4: More Arduino
===================

Topics
------

* Variables
* The loop() function
* Musical variation (tempo, transposition)
* Debugging

Activity
--------

For this activity each student or group will need

* 1 Arduino
* 1 USB Cable
* 1 Computer with Arduino IDE installed
* 1 Speaker with in-line 10uF capacitor for DC blocking

We also use the same sensors from Days 2 and 3 as well.

### Fixing the Major Scale

The Arduino sketch `major_scale.ino` has 1 wrong note. Have the students
flash the program, find the incorrect note, and fix it.

### Fixing a Melody

`ton_ton_bouki.ino` plays a familiar song. In Haiti it is typically sung as
"Ton Ton Bouki", but the tune will be familiar in the USA and France as "Frère
Jacques." The song has several mistakes though, which should be corrected by
the students as in the first activity. In our experience this was probably a
bit too hard, and the mistakes should probably be simplified and reduced.

### More Sensors

`ton_ton_bouki_sensor.ino` and `ton_ton_bouki_sensor2.ino` both play the same
song (correctly) but the playback can be effected using sensor input. In the
former, the sensor controlls the pitch transposition. In the latter it controls
the speed. This is mostly to play with.

### Tiny Keyboard

For our workshop I happened to get ahold of 2 arrays of 5 momentary
pushbuttons. I added a connector so that each of the buttons would get pulled
to ground when pressed. `grace_pentatonic.ino` is an Arduino sketch that reads
from the buttons and uses it as a keyboard.
