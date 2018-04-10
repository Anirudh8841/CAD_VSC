IDIR =/../Includes 
CC=g++ -std=c++14
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../results

# _DEPS = helper_functions.h Object2D.h Object3D.h parserSaver.h transform2D.h transform3D.h View2D.h
# DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# _OBJ = main.o body_loop.o 3d_to_2d.o Full_plane.o planar_graph_generator.o structs.o object_2d.o Object_3d.o general_methods.o faceloop_generator.o
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


main: main.o parserSaver.o
	$(CC) -I$(IDIR) -o main.o parserSaver.o

main.o: Object2D.h Object3D.h parserSaver.h
	$(CC) -I$(IDIR) -c main.cpp

parserSaver.o: Object3D.h Object2D.h
	$(CC) -I$(IDIR) -c parserSaver.cpp



# .PHONY: clean

# clean:
	# rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 