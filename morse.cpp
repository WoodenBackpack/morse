#include <windows.h>
#include <string>

#include "morse.h"

morse::morse() : mFreq(2000), mPauseTime(20), mDotTime(50), mDashTime(200), 
  mCharPauseTime(20), mBeeper(new beeper()), dot('.'), dash('-') {
}
morse::~morse() {
    delete mBeeper;
}
void morse::setFrequency(const DWORD &freq) {
    mFreq = freq;
}
void morse::setPause(const DWORD &pauseTime) {
    mPauseTime = pauseTime;
}
void morse::setDotTime(const DWORD &dotTime) {
    mDotTime = dotTime;
}
void morse::setDashTime(const DWORD &dashTime) {
    mDashTime = dashTime;
}
void morse::setCharPause(const DWORD &charPauseTime) {
    mCharPauseTime = charPauseTime;
}
void morse::operator<<(const long sign) {
    const std::string str = std::to_string(sign); 
    for (int i = 0; i < str.length(); ++i) {
        if (strcmp(&str.at(i), &dot) == 0) {
            mBeeper->beepDot(mFreq, mDotTime);
        } else if (strcmp(&str.at(i), &dash) == 0) {
            mBeeper->beepDash(mFreq, mDashTime);
        }
        mBeeper->sleep(mCharPauseTime);
    }
}

void morse::operator<<(const double sign)
{
}
void morse::operator<<(const char sign)
{
}
void morse::operator<<(const char* string)
{
}

std::string morse::convertToMorse(char menu) {
    switch( menu )
    {
    case 'a': case 'A':
        return "._";
    case 'b': case 'B':
        return "_...";
    case 'c': case 'C':
        return "_._.";
    case 'd': case 'D':
        return "_..";
    case 'e': case 'E':
        return ".";
    case 'f': case 'F':
        return ".._.";
    case 'g': case 'G':
        return "__.";
    case 'h': case 'H':
        return "....";
    case 'i': case 'I':
        return "..";
    case 'j': case 'J':
        return ".___";
    case 'k': case 'K':
        return "_._";
    case 'l': case 'L':
        return "._..";
    case 'm': case 'M':
        return "__";
    case 'n': case 'N':
        return "_.";
    case 'o': case 'O':
        return "___";
    case 'p': case 'P':
        return ".__.";
    case 'q': case 'Q':
        return "__._";
    case 'r': case 'R':
        return "._.";
    case 's': case 'S':
        return "...";
    case 't': case 'T':
        return "_";
    case 'u': case 'U':
        return ".._";
    case 'v': case 'V':
        return "..._";
    case 'w': case 'W':
        return ".__";
    case 'x': case 'X':
        return "_.._";
    case 'y': case 'Y':
        return "_.__";
    case 'z': case 'Z':
        return "__..";
    case '1':
        return ".____";
    case '2':
        return "..___";
    case '3':
        return "...__";
    case '4':
        return "...._";
    case '5':
        return ".....";
    case '6':
        return "_....";
    case '7':
        return "__...";
    case '8':
        return "___..";
    case '9':
        return "____.";
    case '0':
        return "_____";
	case '.':
        return "._._._";
	 case ',':
        return "__..__";
	 case '?':
        return "..__..";
 	case '!':
        return "_._.__";
    }
    return "";
}
