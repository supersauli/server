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
}
