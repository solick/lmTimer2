#ifndef LMTIMER2_H
#define LMTIMER2_H

#include "Arduino.h"

class lmTimer2 {
 
   public:
	   lmTimer2(); ///< Constructor
	   ~lmTimer2(); ///< Destructor
	   int checkTime(); ///< returns -1 if timer has not started, otherwise the difference in seconds
	   void start(); ///< starts the timer
	   void stop(); ///< stops the timer, which also clears the timer
	   
  private: 
	  unsigned int _status; /// 1 if timer is running, 0 if not
	  unsigned long _time1; /// starting timer in seconds
	  unsigned long _time2; /// actual time in seconds
	  unsigned long _timediff; /// represents difference
	  unsigned long _tick; /// increased by timediff at every check
	 
	  
};

#endif
