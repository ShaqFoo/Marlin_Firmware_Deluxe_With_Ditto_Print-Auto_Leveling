/**
 * Catalan
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_CA_H
#define LANGUAGE_CA_H

#define WELCOME_MSG                         MACHINE_NAME " preparada."
#define MSG_SD_INSERTED                     "SD detectada."
#define MSG_SD_REMOVED                      "SD expulsada."
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Inici automatic"
#define MSG_DISABLE_STEPPERS                "Apagar motors"
#define MSG_AUTO_HOME                       "Home global"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Establir origen"
#define MSG_PREHEAT_PLA                     "Preescalfar PLA"
#define MSG_PREHEAT_PLA0                    "Preescalfar PLA 1"
#define MSG_PREHEAT_PLA1                    "Preescalfar PLA 2"
#define MSG_PREHEAT_PLA2                    "Preescalfar PLA 3"
#define MSG_PREHEAT_PLA012                  "Preesc. tot PLA"
#define MSG_PREHEAT_PLA_BEDONLY             "Preesc. llit PLA"
#define MSG_PREHEAT_PLA_SETTINGS            "Configuració PLA"
#define MSG_PREHEAT_ABS                     "Preescalfar ABS"
#define MSG_PREHEAT_ABS0                    "Preescalfar ABS 1"
#define MSG_PREHEAT_ABS1                    "Preescalfar ABS 2"
#define MSG_PREHEAT_ABS2                    "Preescalfar ABS 3"
#define MSG_PREHEAT_ABS012                  "Preesc. tot ABS"
#define MSG_PREHEAT_ABS_BEDONLY             "Preesc. llit ABS"
#define MSG_PREHEAT_ABS_SETTINGS            "Configuració ABS"
#define MSG_COOLDOWN                        "Refredar"
#define MSG_SWITCH_PS_ON                    "Switch power on"
#define MSG_SWITCH_PS_OFF                   "Switch power off"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Refredar"
#define MSG_MOVE_AXIS                       "Moure eixos"
#define MSG_MOVE_X                          "Moure X"
#define MSG_MOVE_Y                          "Moure Y"
#define MSG_MOVE_Z                          "Moure Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_01MM                       "Moure 0.1mm"
#define MSG_MOVE_1MM                        "Moure 1mm"
#define MSG_MOVE_10MM                       "Moure 10mm"
#define MSG_SPEED                           "Velocitat"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_NOZZLE1                         "Nozzle2"
#define MSG_NOZZLE2                         "Nozzle3"
#define MSG_BED                             "Llit"
#define MSG_FAN_SPEED                       "Vel. Ventilador"
#define MSG_FLOW                            "Fluxe"
#define MSG_FLOW0                           "Fluxe 0"
#define MSG_FLOW1                           "Fluxe 1"
#define MSG_FLOW2                           "Fluxe 2"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xpassos/mm"
#define MSG_YSTEPS                          "Ypassos/mm"
#define MSG_ZSTEPS                          "Zpassos/mm"
#define MSG_ESTEPS                          "Epassos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Moviment"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Dia. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Dia. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Dia. 3"
#define MSG_CONTRAST                        "Contrast de LCD"
#define MSG_STORE_EPROM                     "Desar a memoria"
#define MSG_LOAD_EPROM                      "Carregar de mem."
#define MSG_RESTORE_FAILSAFE                "Rest. emergencia"
#define MSG_REFRESH                         "Refrescar"
#define MSG_WATCH                           "Pantalla Info."
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Calibrar"
#define MSG_PAUSE_PRINT                     "Pausa imp."
#define MSG_RESUME_PRINT                    "Reprendre imp."
#define MSG_STOP_PRINT                      "Parar inp."
#define MSG_CARD_MENU                       "Imprimir de SD"
#define MSG_NO_CARD                         "-Sense targeta SD"
#define MSG_DWELL                           "Repos..."
#define MSG_USERWAIT                        "Esperant usuari.."
#define MSG_RESUMING                        "Reprenent imp."
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Sense moviment."
#define MSG_KILLED                          "PARADA DE EMERG. "
#define MSG_STOPPED                         "ATURAT. "
#define MSG_CONTROL_RETRACT                 "Retreure mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Retreure mm"
#define MSG_CONTROL_RETRACTF                "Retreure  F"
#define MSG_CONTROL_RETRACT_ZLIFT           "Aixecar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet  F"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Canviar filament"
#define MSG_INIT_SDCARD                     "Iniciant SD"
#define MSG_CNG_SDCARD                      "Canviar SD"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y abans Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_RECTRACT                        "Retreure"

#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_CA_H
