IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR) 
ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = string_soma.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = string_soma.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	mkdir -p $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core
