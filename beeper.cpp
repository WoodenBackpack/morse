#include "beeper.h"
#include <windows.h>


void beeper::beepDot(const DWORD& freq, const DWORD& time) const {
  Beep(freq, time);
}
void beeper::beepDash(const DWORD& freq, const DWORD& time) const {
    Beep(freq, time);
}
void beeper::sleep(const DWORD& time) const {
  Sleep(time);
}