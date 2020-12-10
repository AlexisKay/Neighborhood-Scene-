EXE=final

# Main target
all: $(EXE)

#  MinGW
ifeq "$(OS)" "Windows_NT"
CFLG=-O3 -Wall
LIBS=-lglut32cu -lglu32 -lopengl32
CLEAN=del *.exe *.o *.a
else
#  OSX
ifeq "$(shell uname)" "Darwin"
CFLG=-O3 -Wall -Wno-deprecated-declarations
LIBS=-framework GLUT -framework OpenGL
#  Linux/Unix/Solaris
else
CFLG=-O3 -Wall
LIBS=-lglut -lGLU -lGL -lm
endif
#  OSX/Linux/Unix/Solaris
CLEAN=rm -f $(EXE) *.o *.a
endif

# Dependencies
final.o: final.c CSCIx229.h
fatal.o: fatal.c CSCIx229.h
loadtexbmp.o: loadtexbmp.c CSCIx229.h
print.o: print.c CSCIx229.h
project.o: project.c CSCIx229.h
errcheck.o: errcheck.c CSCIx229.h
object.o: object.c CSCIx229.h

CSCIx229.a:fatal.o loadtexbmp.o print.o project.o errcheck.o object.o
	ar -rcs $@ $^

house1.o: house1.c house1.h

house2.o: house2.c house2.h

house3.o: house3.c house3.h

details.o: details.c details.h

house1.a: house1.o
	ar -rcs $@ $^

house2.a: house2.o
	ar -rcs $@ $^

house3.a: house3.o
	ar -rcs $@ $^

details.a: details.o
	ar -rcs $@ $^

# Compile rules
.c.o:
	gcc -c $(CFLG) $<
.cpp.o:
	g++ -c $(CFLG) $<

#  Link
final:final.o CSCIx229.a house1.a house2.a house3.a details.a 
	gcc -O3 -o $@ $^   $(LIBS)

#  Clean
clean:
	$(CLEAN)