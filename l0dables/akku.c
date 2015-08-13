#include <rad1olib/setup.h>
#include <rad1olib/battery.h>
#include <r0ketlib/display.h>
#include "usetable.h"

#include <stdio.h>

void ram(void){
  getInputWaitRelease();
  batteryInit();
  lcdPrintln("Akku Status");
  lcdPrintln("-----------");
  if(batteryCharging()){
    lcdPrintln("Akku is charging!");
  }
  char voltage_buff [10];
  sprintf(voltage_buff, "Battery voltage: %lu", batteryGetVoltage());
  lcdPrintln(voltage_buff);
  lcdDisplay();
}
