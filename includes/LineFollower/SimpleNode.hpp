#ifndef SIMPLENODE_LINEFOLLOWER_POINT_MAP_07032016
#define SIMPLENODE_LINEFOLLOWER_POINT_MAP_07032016

#include <iostream>
#include <stdio.h>
#include "LineFollowerGraph.hpp"

namespace AASS{
		
	namespace VoDiGrEx{

		/**
		* @brief Line follower algorithm to create a graph and a thinned image.
		* 
		* Implementation of a line follower algorithm inspired by the algorithm of 
		* Orit BARUCH - Line Thinning by line following - Pattern Recognition Letters 8 1988
		* This algorithm is iterative and able to adapt to any line size.
		* Create a thinned image and graph of the lines.
		*/
		//USE THE CLASS MADE FOR THE BETTER GRAPH HERE TOO
		class SimpleNode{
			
		public :
			int x;
			int y;
			SimpleNode(){};
			int getX(){return x;}
			int getY(){return y;}
			void setX(int xx){ x = xx;}
			void setY(int yy){ y = yy;}
		};

		class SimpleEdge{
		public:
		};

		
	}
}

#endif