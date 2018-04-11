IDIR =./Includes 
CC=g++ -std=c++14
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../results
vpath %.h Includes
vpath %.cpp src src/FileInput

# _DEPS = helper_functions.h Object2D.h Object3D.h parserSaver.h transform2D.h transform3D.h View2D.h
# DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# _OBJ = main.o body_loop.o 3d_to_2d.o Full_plane.o planar_graph_generator.o structs.o object_2d.o Object_3d.o general_methods.o faceloop_generator.o
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


main: main.o parserSaver.o transform2D.o helper_functions.o transform3D.o
	$(CC) -I$(IDIR) -o main main.o parserSaver.o transform2D.o transform3D.o helper_functions.o

main.o: Includes/Object2D.h Includes/Object3D.h Includes/parserSaver.h Includes/transform2D.h Includes/transform3D.h
	$(CC) -I$(IDIR) -c src/FileInput/main.cpp

parserSaver.o: Includes/Object3D.h Includes/Object2D.h
	$(CC) -I$(IDIR) -c src/FileInput/parserSaver.cpp

transform2D.o: Includes/transform2D.h
	$(CC) -I$(IDIR) -c src/Transformation/transform2D.cpp

transform3D.o: Includes/transform3D.h Includes/helper_functions.h Includes/Object2D.h Includes/Object3D.h
	$(CC) -I$(IDIR) -c src/Transformation/transform3D.cpp

helper_functions.o: Includes/helper_functions.h Includes/Object2D.h Includes/Object3D.h
	$(CC) -I$(IDIR) -c src/Transformation/helper_functions.cpp 

clean:
	rm main *.o
# .PHONY: clean

# clean:
	# rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 