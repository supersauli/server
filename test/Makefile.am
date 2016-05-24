AUTOMAKE_OPTIONS=foreign
#CXX := clang
#INCLUDES=-I ../sdk/
CPPFLAGS=-I ../sdk/
CFLAGS=-I ../sdk/ 
bin_PROGRAMS=main
main_SOURCES=main.cpp \
			 head.h 

main_LDADD = ../sdk/libsdk.la /usr/local/lib/liblog4cxx.la 
