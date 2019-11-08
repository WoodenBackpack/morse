#include <string>
#include <windows.h>

class beeper {
public:
  void beepDot(const DWORD& freq, const DWORD& time) const;
  void beepDash(const DWORD& freq, const DWORD& time) const;
  void sleep(const DWORD& time) const;
};