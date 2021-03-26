#reekoye gopal
#26/03/2021


CC=g++      #the compiler
LIBS=-lm    #the libraries we will ref


main: main.o methods.o TagStruct.o
	$(CC) main.o methods.o TagStruct.o -o main £(LIBS)

methods.o: methods.cpp methods.h
	$(CC) -c methods.cpp

TagStruct.o: TagStruct.cpp TagStruct.h
	$(CC) -c TagStruct.cpp

main.o: main.cpp
	$(CC) -c main.cpp


clean:
	@rm -f *.o
	@rm main
	@mv main ~/bin
