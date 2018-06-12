#makefile
## this is our target
cipher: cipher.o vigenere.o
        gcc -o cipher cipher.o vigenere.o

cipher: cipher.o vigenere.o
        gcc -o cipher cipher.o vigenere.o

cipher.o: cipher.c vigenere.h
        gcc -Wall -c cipher.c

vigenere.o: vigenere.c vigenere.h
        gcc -Wall -c vigenere.c
        
    % make -n

