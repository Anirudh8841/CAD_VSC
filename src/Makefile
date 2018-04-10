IDIR =../include
CC=g++ -std=gnu++11
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

_DEPS = body_loop.h 3d_to_2d.h Object_3d.h Full_plane.h object_2d.h structs.h general_methods.h planar_graph_generator.h faceloop_generator.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o body_loop.o 3d_to_2d.o Full_plane.o planar_graph_generator.o structs.o object_2d.o Object_3d.o general_methods.o faceloop_generator.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Run: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

# .PHONY: clean

# clean:
	# rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 