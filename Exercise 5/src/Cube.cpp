﻿#include "Cube.h"

namespace cgCourse
{
	Cube::Cube() : Shape()
	{
		// set geometry with respect to local origin
		this->positions = {
			{ -1.0f, -1.0f, -1.0f },   // index 0
			{ -1.0f, -1.0f, 1.0f },
			{ -1.0f, 1.0f, 1.0f },
			{ -1.0f, 1.0f, -1.0f },

			{ 1.0f, 1.0f, 1.0f },      // index 4
			{ 1.0f, -1.0f, 1.0f },
			{ 1.0f, -1.0f, -1.0f },
			{ 1.0f, 1.0f, -1.0f },

			{ -1.0f, -1.0f, -1.0f },   // index 8
			{ 1.0f, -1.0f, -1.0f },
			{ 1.0f, -1.0f, 1.0f },
			{ -1.0f, -1.0f, 1.0f },

			{ 1.0f, 1.0f, 1.0f },      // index 12
			{ 1.0f, 1.0f, -1.0f },
			{ -1.0f, 1.0f, -1.0f },
			{ -1.0f, 1.0f, 1.0f },

			{ -1.0f, -1.0f, -1.0f },   // index 16
			{ -1.0f, 1.0f, -1.0f },
			{ 1.0f, 1.0f, -1.0f },
			{ 1.0f, -1.0f, -1.0f },

			{ 1.0f, 1.0f, 1.0f },      // index 20
			{ -1.0f, 1.0f, 1.0f },
			{ -1.0f, -1.0f, 1.0f },
			{ 1.0f, -1.0f, 1.0f }
		};

		this->colors = {
			{ 0.8f, 0.8f, 0.0f },
			{ 0.8f, 0.8f, 0.0f },
			{ 0.8f, 0.8f, 0.0f },
			{ 0.8f, 0.8f, 0.0f },

			{ 0.8f, 0.0f, 0.0f },
			{ 0.8f, 0.0f, 0.0f },
			{ 0.8f, 0.0f, 0.0f },
			{ 0.8f, 0.0f, 0.0f },

			{ 0.0f, 0.8f, 0.0f },
			{ 0.0f, 0.8f, 0.0f },
			{ 0.0f, 0.8f, 0.0f },
			{ 0.0f, 0.8f, 0.0f },

			{ 0.0f, 0.0f, 0.8f },
			{ 0.0f, 0.0f, 0.8f },
			{ 0.0f, 0.0f, 0.8f },
			{ 0.0f, 0.0f, 0.8f },

			{ 0.0f, 0.8f, 0.8f },
			{ 0.0f, 0.8f, 0.8f },
			{ 0.0f, 0.8f, 0.8f },
			{ 0.0f, 0.8f, 0.8f },

			{ 0.8f, 0.0f, 0.8f },
			{ 0.8f, 0.0f, 0.8f },
			{ 0.8f, 0.0f, 0.8f },
			{ 0.8f, 0.0f, 0.8f }
		};

		this->normals = {
			{ -1.0f, 0.0f, 0.0f },
			{ -1.0f, 0.0f, 0.0f },
			{ -1.0f, 0.0f, 0.0f },
			{ -1.0f, 0.0f, 0.0f },

			{ 1.0f, 0.0f, 0.0f },
			{ 1.0f, 0.0f, 0.0f },
			{ 1.0f, 0.0f, 0.0f },
			{ 1.0f, 0.0f, 0.0f },

			{ 0.0f, -1.0f, 0.0f },
			{ 0.0f, -1.0f, 0.0f },
			{ 0.0f, -1.0f, 0.0f },
			{ 0.0f, -1.0f, 0.0f },

			{ 0.0f, 1.0f, 0.0f },
			{ 0.0f, 1.0f, 0.0f },
			{ 0.0f, 1.0f, 0.0f },
			{ 0.0f, 1.0f, 0.0f },

			{ 0.0f, 0.0f, -1.0f },
			{ 0.0f, 0.0f, -1.0f },
			{ 0.0f, 0.0f, -1.0f },
			{ 0.0f, 0.0f, -1.0f },

			{ 0.0f, 0.0f, 1.0f },
			{ 0.0f, 0.0f, 1.0f },
			{ 0.0f, 0.0f, 1.0f },
			{ 0.0f, 0.0f, 1.0f }
		};

		/* TODO: set the texture coordinates for the cube similar 
		 *       to the positions array. After you set the texture coordinates
		 *       for this object try to access them in the shader and 
		 *       check by color output if they are ok. You can also 
		 *       compare your results in the end with the final image
		 *       so that the texture orientation is done right. 
		 *          
		*/
		
		// this->texCoords->push_back(...
		//int positionsLength = positions.size();
		//int firstCoord = 0;
		//int secCoord = 0;

		//for (int i = 0; i < positionsLength; i++) {
		//	if (this->positions[i][0] > 0) {
		//		firstCoord = 1.0f;
		//	};
		//	if (this->positions[i][1] > 0) {
		//		secCoord = 1.0f;
		//	};
		//	this->texCoords.push_back({ firstCoord, secCoord });
		//};

		this->texCoords = {
		{ 0.0f, 0.0f},   // index 16
		{ 0.0f, 1.0f},
		{ 1.0f, 1.0f},
		{ 1.0f, 0.0f},

		{ 0.0f, 0.0f},   // index 16
		{ 0.0f, 1.0f},
		{ 1.0f, 1.0f},
		{ 1.0f, 0.0f},

		{ 0.0f, 0.0f},   // index 16
		{ 0.0f, 1.0f},
		{ 1.0f, 1.0f},
		{ 1.0f, 0.0f},

		{ 0.0f, 0.0f},   // index 16
		{ 0.0f, 1.0f},
		{ 1.0f, 1.0f},
		{ 1.0f, 0.0f},

		{ 0.0f, 0.0f},   // index 16
		{ 0.0f, 1.0f},
		{ 1.0f, 1.0f},
		{ 1.0f, 0.0f},

		{ 0.0f, 0.0f},   // index 16
		{ 0.0f, 1.0f},
		{ 1.0f, 1.0f},
		{ 1.0f, 0.0f}


		};

		/* End TODO: */

		this->faces = {
			{ 0, 1, 2 }, { 2, 3, 0 },
			{ 4, 5, 6 }, { 6, 7, 4 },
			{ 8, 9, 10 }, { 10, 11, 8 },
			{ 12, 13, 14 }, { 14, 15, 12 },
			{ 16, 17, 18 }, { 18, 19, 16 },
			{ 20, 21, 22 }, { 22, 23, 20 }
		};

		this->faceNormals = {
			{ -1.0f, 0.0f, 0.0f }, { -1.0f, 0.0f, 0.0f },
			{ 1.0f, 0.0f, 0.0f }, { 1.0f, 0.0f, 0.0f },
			{ 0.0f, -1.0f, 0.0f }, { 0.0f, -1.0f, 0.0f },
			{ 0.0f, 1.0f, 0.0f }, { 0.0f, 1.0f, 0.0f },
			{ 0.0f, 0.0f, -1.0f }, { 0.0f, 0.0f, -1.0f },
			{ 0.0f, 0.0f, 1.0f }, { 0.0f, 0.0f, 1.0f }
		};
	}
}
