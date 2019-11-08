#include <string>

#include "beeper.h"

class morse {
public:
  morse();
  ~morse();
  void setFrequency(const DWORD& freq);
  void setPause(const DWORD& pauseTime);
  void setDotTime(const DWORD& dotTime);
  void setDashTime(const DWORD& dashTime);
  void setCharPause(const DWORD& charPauseTime);
  void operator<<(const long);
  void operator<<(const double);
  void operator<<(const char);
  void operator<<(const char*);
private:
  std::string convertToMorse(char menu);

  DWORD mFreq;
  DWORD mPauseTime;
  DWORD mDotTime;
  DWORD mDashTime;
  DWORD mCharPauseTime;
  beeper* mBeeper;

  const char dot = '.';
  const char dash = '_';
};