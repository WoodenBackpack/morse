#include <string>
#include <sstream>

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
  // void operator<<(const long);
  // void operator<<(const double);
  // void operator<<(const char);
  // void operator<<(const char*);

  template <class T>
  morse& operator<<(const T& paramStr) {
    std::ostringstream ss;
    ss << paramStr;
    beepWord(ss.str());
    return *this;
  }

  morse& operator<<(morse& (*pause)(morse &));

private:
  std::string convertToMorse(char menu);
  void beepWord(const std::string& word);

  // BOOL Beep(
  //   DWORD dwFreq,
  //   DWORD dwDuration
  // );
  // typedef unsigned long       DWORD;

  DWORD mFreq;
  DWORD mCharPauseTime;
  DWORD mPauseTime;
  DWORD mDotTime;
  DWORD mDashTime;
  beeper* mBeeper;

  const char dot = '.';
  const char dash = '_';
  const char space = ' ';
};

morse& pause(morse &m);