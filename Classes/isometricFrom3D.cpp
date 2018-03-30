


isometricFrom3D(Object3D obj)
{
	/*  cos(arcsin(1/sqrt(3)) = 0.81649658
		sin(arcsin(1/sqrt(3)) = 0.57735026
		sin(45ø) 			  = 0.70710678
		cos(45ø)			  = 0.70710678
	*/
	int[3][3] betaMat = {{0.70710678, 0, 0.70710678},
						 {0			, 1, 0		   },
						 {0.70710678, 0, 0.70710678}};
	int[3][3] alphaMat = {{1,		0, 		0		},
						  {0, 0.81649658, 0.57735026},
						  {0, -0.57735026, 0.81649658}};

    int numVertex = obj.VertexList.size();
    std::vector<float> firstMatMul(numVertex);
	for(int i = 0; i < numVertex; i++)
	{
		firstMatMul[i] = betaMat[0][1] * 
	}
}