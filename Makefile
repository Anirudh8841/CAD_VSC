IDIR =./Includes 
CC=g++ -std=c++14
CFLAGS=-I$(IDIR)
LDIR =../results
vpath %.h Includes
vpath %.cpp src src/FileInput

# _DEPS = helper_functions.h Object2D.h Object3D.h parserSaver.h transform2D.h transform3D.h View2D.h
# DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# _OBJ = main.o body_loop.o 3d_to_2d.o Full_plane.o planar_graph_generator.o structs.o object_2d.o Object_3d.o general_methods.o faceloop_generator.o
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


bin/main: bin/main.o bin/parserSaver.o bin/transform2D.o bin/helper_functions.o bin/transform3D.o
	$(CC) -I$(IDIR) -o bin/main bin/main.o bin/parserSaver.o bin/transform2D.o bin/transform3D.o bin/helper_functions.o

bin/main.o: Includes/Object2D.h Includes/Object3D.h Includes/parserSaver.h Includes/transform2D.h Includes/transform3D.h
	$(CC) -I$(IDIR) -c -o bin/main.o src/FileInput/main.cpp

bin/parserSaver.o: Includes/Object3D.h Includes/Object2D.h
	$(CC) -I$(IDIR) -c -o bin/parserSaver.o src/FileInput/parserSaver.cpp

bin/transform2D.o: Includes/transform2D.h
	$(CC) -I$(IDIR) -c -o bin/transform2D.o src/Transformation/transform2D.cpp

bin/transform3D.o: Includes/transform3D.h Includes/helper_functions.h Includes/Object2D.h Includes/Object3D.h
	$(CC) -I$(IDIR) -c -o bin/transform3D.o src/Transformation/transform3D.cpp

bin/helper_functions.o: Includes/helper_functions.h Includes/Object2D.h Includes/Object3D.h
	$(CC) -I$(IDIR) -c -o bin/helper_functions.o src/Transformation/helper_functions.cpp 

clean:
	rm bin/*.o 
	rm bin/main
# .PHONY: clean

# clean:
	# rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 