# Marlin Deluxe Firmware with Autoleveling, Ditto Printing and more....

This is my Marlin mashup using the latest release and adding some additional features.  This version is tuned to the gMax 1.5XT but should work with any RepRap style printer.   Dual X-Carriage support has been stripped out completely and replaced with Ditto printing support. (who uses that anyway?)  When Ditto Printing is enabled Extruder2 will mirror Extruder1 so you can print two of the same objects at the same time using both hotends simultaneously.

Main features

- Auto bed Leveling
- Ditto Printing
- Full support for M600 (filament change) - all known issues fixed and working.  When invoked, tool head moves to predefined location, extracts 100% of the filament from the hot end and sounds an alarm via the LCD screen.   The print resumes after the LCD knob is pressed.
- Full support for 'Out of Filament Sensor'- will trigger an M600 when filament runs out.
- Arc Support.
- Look Ahead.


This was tuned for a gMax1.5 XT dual extruder printer but it should  run on any single or dual rep rap style printer with a few tweaks.

The original post for this release with detailed information (and also firmware) can be found on the gMax users forum at the URL below:

http://gcreate.com/forum/viewtopic.php?f=6&t=497&sid=c1bf9e70075682d1a2c0712ffcb9c46f#p2078

While the target audience for this firmware is  gMax users & printers, I am creating this repo with the hopes others will use it and adapt it to their RepRaps to further enhance their 3D printing experiences.   

Enjoy! - Shaqfoo


- Implemented Codes
- -------------------
-  G0  -> G1
-  G1  - Coordinated Movement X Y Z E
-  G2  - CW ARC
-  G3  - CCW ARC
-  G4  - Dwell S<seconds> or P<milliseconds>
-  G10 - retract filament according to settings of M207
-  G11 - retract recover filament according to settings of M208
-  G28 - Home all Axis
-  G29 - Detailed Z-Probe, probes the bed at 3 or more points.  Will fail if you haven't homed yet.
-  G30 - Single Z Probe, probes bed at current XY location.
-  G31 - Dock sled (Z_PROBE_SLED only)
-  G32 - Undock sled (Z_PROBE_SLED only)
-  G90 - Use Absolute Coordinates
-  G91 - Use Relative Coordinates
-  G92 - Set current position to coordinates given

-  M Codes
-  M0   - Unconditional stop - Wait for user to press a button on the LCD (Only if ULTRA_LCD is enabled)
-  M1   - Same as M0
-  M17  - Enable/Power all stepper motors
-  M18  - Disable all stepper motors; same as M84
-  M20  - List SD card
-  M21  - Init SD card
-  M22  - Release SD card
-  M23  - Select SD file (M23 filename.g)
-  M24  - Start/resume SD print
-  M25  - Pause SD print
-  M26  - Set SD position in bytes (M26 S12345)
-  M27  - Report SD print status
-  M28  - Start SD write (M28 filename.g)
-  M29  - Stop SD write
-  M30  - Delete file from SD (M30 filename.g)
-  M31  - Output time since last M109 or SD card start to serial
-  M32  - Select file and start SD print (Can be used _while_ printing from SD card files):
-         syntax "M32 /path/filename#", or "M32 S<startpos bytes> !filename#"
-         Call gcode file : "M32 P !filename#" and return to caller file after finishing (similar to #include).
-         The '#' is necessary when calling from within sd files, as it stops buffer prereading
-  M42  - Change pin status via gcode Use M42 Px Sy to set pin x to value y, when omitting Px the onboard led will be used.
-  M80  - Turn on Power Supply
-  M81  - Turn off Power Supply
-  M82  - Set E codes absolute (default)
-  M83  - Set E codes relative while in Absolute Coordinates (G90) mode
-  M84  - Disable steppers until next move,
-         or use S<seconds> to specify an inactivity timeout, after which the steppers will be disabled.  S0 to disable the timeout.
-  M85  - Set inactivity shutdown timer with parameter S<seconds>. To disable set zero (default)
-  M92  - Set axis_steps_per_unit - same syntax as G92
-  M104 - Set extruder target temp
-  M105 - Read current temp
-  M106 - Fan on
-  M107 - Fan off
-  M109 - Sxxx Wait for extruder current temp to reach target temp. Waits only when heating
-         Rxxx Wait for extruder current temp to reach target temp. Waits when heating and cooling
-         IF AUTOTEMP is enabled, S<mintemp> B<maxtemp> F<factor>. Exit autotemp by any M109 without F
-  M112 - Emergency stop
-  M114 - Output current position to serial port
-  M115 - Capabilities string
-  M117 - display message
-  M119 - Output Endstop status to serial port
-  M126 - Solenoid Air Valve Open (BariCUDA support by jmil)
-  M127 - Solenoid Air Valve Closed (BariCUDA vent to atmospheric pressure by jmil)
-  M128 - EtoP Open (BariCUDA EtoP = electricity to air pressure transducer by jmil)
-  M129 - EtoP Closed (BariCUDA EtoP = electricity to air pressure transducer by jmil)
-  M140 - Set bed target temp
-  M150 - Set BlinkM Color Output R: Red<0-255> U(!): Green<0-255> B: Blue<0-255> over i2c, G for green does not work.
-  M190 - Sxxx Wait for bed current temp to reach target temp. Waits only when heating
-         Rxxx Wait for bed current temp to reach target temp. Waits when heating and cooling
-  M200 D<millimeters>- set filament diameter and set E axis units to cubic millimeters (use S0 to set back to millimeters).
-  M201 - Set max acceleration in units/s^2 for print moves (M201 X1000 Y1000)
-  M202 - Set max acceleration in units/s^2 for travel moves (M202 X1000 Y1000) Unused in Marlin!!
-  M203 - Set maximum feedrate that your machine can sustain (M203 X200 Y200 Z300 E10000) in mm/sec
-  M204 - Set default acceleration: S normal moves T filament only moves (M204 S3000 T7000) in mm/sec^2  also sets minimum segment time in ms (B20000) to prevent buffer under-runs and M20 minimum feedrate
-  M205 -  advanced settings:  minimum travel speed S=while printing T=travel only,  B=minimum segment time X= maximum xy jerk, Z=maximum Z jerk, E=maximum E jerk
-  M206 - set additional homing offset
-  M207 - set retract length S[positive mm] F[feedrate mm/min] Z[additional zlift/hop], stays in mm regardless of M200 setting
-  M208 - set recover=unretract length S[positive mm surplus to the M207 S*] F[feedrate mm/sec]
-  M209 - S<1=true/0=false> enable automatic retract detect if the slicer did not support G10/11: every normal extrude-only move will be classified as retract depending on the direction.
-  M218 - set hotend offset (in mm): T<extruder_number> X<offset_on_X> Y<offset_on_Y>
-  M220 S<factor in percent>- set speed factor override percentage
-  M221 S<factor in percent>- set extrude factor override percentage
-  M226 P<pin number> S<pin state>- Wait until the specified pin reaches the state required
-  M240 - Trigger a camera to take a photograph
-  M250 - Set LCD contrast C<contrast value> (value 0..63)
-  M280 - set servo position absolute. P: servo index, S: angle or microseconds
-  M300 - Play beep sound S<frequency Hz> P<duration ms>
-  M301 - Set PID parameters P I and D
-  M302 - Allow cold extrudes, or set the minimum extrude S<temperature>.
-  M303 - PID relay autotune S<temperature> sets the target temperature. (default target temperature = 150C)
-  M304 - Set bed PID parameters P I and D
-  M400 - Finish all moves 
-  M401 - Lower z-probe if present
-  M402 - Raise z-probe if present
-  M404 - N<dia in mm> Enter the nominal filament width (3mm, 1.75mm ) or will display nominal filament width without parameters
-  M405 - Turn on Filament Sensor extrusion control.  Optional D<delay in cm> to set delay in centimeters between sensor and extruder 
-  M406 - Turn off Filament Sensor extrusion control 
-  M407 - Displays measured filament diameter 
-  M420 - Enables/Disables Ditto Printing. Use S[0|1] to disable or enable (by ShaqFoo)
-  M500 - stores parameters in EEPROM
-  M501 - reads parameters from EEPROM (if you need reset them after you changed them temporarily).
-  M502 - reverts to the default "factory settings".  You still need to store them in EEPROM afterwards if you want to.
-  M503 - print the current settings (from memory not from EEPROM)
-  M540 - Use S[0|1] to enable or disable the stop SD card print on endstop hit (requires ABORT_ON_ENDSTOP_HIT_FEATURE_ENABLED)
-  M600 - Pause for filament change X[pos] Y[pos] Z[relative lift] E[initial retract] L[later retract distance for removal]
-  M665 - set delta configurations
-  M666 - set delta endstop adjustment
-  M605 - Set dual x-carriage movement mode: S<mode> [ X<duplication x-offset> R<duplication temp offset> ]
-  M907 - Set digital trimpot motor current using axis codes.
-  M908 - Control digital trimpot directly.
-  M350 - Set microstepping mode.
-  M351 - Toggle MS1 MS2 pins directly.

-  ************ SCARA Specific - This can change to suit future G-code regulations
-  M360 - SCARA calibration: Move to cal-position ThetaA (0 deg calibration)
-  M361 - SCARA calibration: Move to cal-position ThetaB (90 deg calibration - steps per degree)
-  M362 - SCARA calibration: Move to cal-position PsiA (0 deg calibration)
-  M363 - SCARA calibration: Move to cal-position PsiB (90 deg calibration - steps per degree)
-  M364 - SCARA calibration: Move to cal-position PSIC (90 deg to Theta calibration position)
-  M365 - SCARA calibration: Scaling factor, X, Y, Z axis
- ************* SCARA End ***************

-  M928 - Start SD logging (M928 filename.g) - ended by M29
-  M999 - Restart after being stopped by error

