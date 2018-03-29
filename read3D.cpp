#include<iostream>
#include <fstream>
#include "Classes/Object3D.h"

using namespace std;

int main() {
   
    ifstream inFile;
    
    inFile.open("test.txt");

    string str1;
    string line;

    char name,name2;
    float num1,num2,num3;
    int mapnumber1,mapnumber2;

    Object3D obj;

    map <char, vector<float> > Vertex;
    typedef std::vector<float> vrtx;
    

    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
  
    while(inFile>>str1){

  	  if(str1=="vertex"){

      while(inFile >> name >> num1 >> num2 >> num3){
 
       std::vector<float> v(3);

       v.pushback(num1);
       v.pushback(num2);
       v.pushback(num3);
       
       obj.VertexList.pushback(v);
       Vertex[name].pushback(v);
 
  	    }

      }

      else if(str1="Edges"){
      	while(inFile >> name>> name2){

      	 //type std::vector<float>(3) vrtx;
      
         std::vector<vrtx> Edge(2);
          

          Edge.pushback(Vertex[name]);

          Edge.pushback(Vertex[name2]);


          obj.EdgeList.pushback(Edge);

      	}
      }

      else if(str1="Faces"){


      	while(getline(inFile, line)) {
        
         int l = line.length();

         std::vector<vrtx> Face;
         
         for(int i=0;i<l;i++){

         	if(line[i]==' '){}
         	else{
         	   Face.pushback(Vertex[line[i]]);
         	}
         }

         obj.FaceList.pushback(Face);
        }

      	
      }

      else{
      	cout<<"not_valid"<<endl;
      }
  
    }

    inFile.close();
}
 
