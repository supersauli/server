#ifndef _STIME_H__
#define _STIME_H__
#include <time.h>
#include <stdio.h>
#include "sDefine.h"

class PreTime{
	public:
	PreTime(){
		clock_gettime(CLOCK_REALTIME,&_clockTime);		
	}

	static void now(){
		clock_gettime(CLOCK_REALTIME,&_clockTime);
	}

	/**
	 * @brief 获得秒数
	 *
	 * @return 
	 */
	static DWORD sec(){
		return _clockTime.tv_sec;
	}

	/**
	 * @brief 获得毫秒数
	 *
	 * @return 
	 */
	static QWORD msec(){
		return _clockTime.tv_sec *1000LL + _clockTime.tv_nsec/1000000LL;
	}


	private:
	 static	timespec		_clockTime;	


};
class Time{
	public:
		/**
		 * @brief 几几年
		 *
		 * @return 
		 */
		Time(){
			time(&_tTime) ;
			gmtime_r(&_tTime,&_tmTime);
		}

		/**
		 * @brief dwTime 是秒
		 *
		 * @param 
		 */
		Time(DWORD dwTime):_tTime(dwTime){
			gmtime_r(&_tTime,&_tmTime);
		}

		void now(){
			time(&_tTime) ;
			gmtime_r(&_tTime,&_tmTime);
		}


		/**
		 * @brief 哪年
		 *
		 * @return 
		 */
		DWORD getYear(){
			return _tmTime.tm_year + 1900;		
		}

		/**
		 * @brief 哪个月
		 *
		 * @return 
		 */
		DWORD getMonth()
		{
			return _tmTime.tm_mon +1 ;	
		}

		/**
		 * @brief 多少号
		 *
		 * @return 
		 */
		DWORD getDay()
		{
			return _tmTime.tm_wday ;	
		}

		/**
		 * @brief 周几
		 *
		 * @return 
		 */
		DWORD getWeekDay()
		{
			if(_tmTime.tm_wday== 0){
				return 7;
			}
			return _tmTime.tm_wday;
		}

		/**
		 * @brief 小时　
		 *
		 * @return 
		 */
		DWORD getHour(){
			return _tmTime.tm_hour;
		}
		/**
		 * @brief 分钟数
		 *
		 * @return 
		 */
		DWORD getMinute(){
			return _tmTime.tm_min;
		}

		/**
		 * @brief 秒数
		 *
		 * @return 
		 */
		DWORD getSec(){
			return _tmTime.tm_sec;
		}

		





	private:
		struct tm _tmTime;
		//单位秒
		time_t _tTime;
};

















#endif





