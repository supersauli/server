#include "head.h"
#include <stdio.h>
#include <iostream>
#include <log4cxx/logger.h>  
#include <log4cxx/basicconfigurator.h>  
#include <log4cxx/propertyconfigurator.h>  
#include <log4cxx/helpers/exception.h>  
#include <iostream>
#include <string.h>
#include "sSctpPool.h"
#include "sPthreadPool.h"


#define LOG4_DEBUG(a,b) (a)->info((b));

using namespace std;
#if 1

int main()
{

	sSctpPool sock;
	if(!sock.initSocket())
	{
		 printf("false\n");
		  return 0;
	
	};
	if(!sock.bind(2222))
	{
		printf("false\n");	
		return 0;
	}


	sock.initPool(1);
	
	sock.stcpAccept();


//	sPthreadPool spoll;
//	spoll.createNewPthread();
//
































//	sleep(10);
//	time_t timer;
//	time_t timer1;
//	struct timeval timer ,timer1;
//	gettimeofday(&timer,NULL);
//	//time(&timer);
//	sMutex mutex;
//	//time(&timer1);
//
//	gettimeofday(&timer1,NULL);
//	time_t s_time = (timer1.tv_sec - timer.tv_sec);
//	time_t result =( s_time *100000) + (timer1.tv_usec - timer.tv_usec);
//	printf("pass s time %lu \n",s_time);
//	printf("pass time %lu \n",result);
	return 0;
}
#endif

//
//bool addLocalFileLog(const std::string & file)
//{
//	log4cxx::PatternLayoutPtr fpl = new log4cxx::PatternLayout("\%d{\%y\%m\%d-\%H:\%M:\%S }%c %5p: %m%n");
//
//	log4cxx::DailyRollingFileAppender * farp = new log4cxx::DailyRollingFileAppender(fpl,file,"'.'yyMMdd-HH");
//	farp->setName("localfile:"+file);
//
//	log4cxx::Logger::getRootLogger()->addAppender(farp);
//
//	return true;
//}
#if 0
using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr logger(Logger::getLogger("MyApp"));

int main()
{

	Time time;
	//cout<<time.getCurTime()<<endl;
	time_t cur;
	cur= time.getCurTime();	
	time.printfTime(cur);
	struct tm curTm;

	time.getUtcTime(curTm);
	time.printfTime(curTm);

	time.getLocalTime(curTm);
	time.printfTime(curTm);


	log4cxx::PropertyConfigurator::configureAndWatch("log4cxx.properties");  
	log4cxx::LoggerPtr logger = log4cxx::Logger::getLogger("/home/sauli/log/output.log");  
	//LOG4_DEBUG(logger,"error");	
		for(int i = 0;i<1000000;i++)
		{
			char buf[1024];
			bzero(buf,sizeof(buf));
			sprintf(buf,"%d",i);
			logger->info(buf);
		}

	time_t cur1 = time.getCurTime();	
	time.printfTime(cur);
	time.printfTime(cur1);

	struct tm curTm1;
	time.getUtcTime(curTm);
	time.printfTime(curTm);

	time.getUtcTime(curTm1);
	time.printfTime(curTm1);

	//;time.getLocalTime(curTm);
	//time.printfTime(curTm);


	//log4cxx::LoggerPtr error = (log4cxx::Logger::getLogger("server.error"));

	//error->debug("This is a test");

	
//	BasicConfigurator::configure();
//	LOG4CXX_INFO(logger,"Entering application");










}
#endif
