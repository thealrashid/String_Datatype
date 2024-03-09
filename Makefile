exe: String.o constructor.o overload.o functions.o
	c++ String.o constructor.o overload.o functions.o -o exe

String.o: String.cpp
	c++ -c String.cpp
constructor.o: constructor.cpp
	c++ -c constructor.cpp
overload.o: overload.cpp
	c++ -c overload.cpp
functions.o: functions.cpp
	c++ -c functions.cpp

clean:
	rm *.o exe
