#include "Cube.h"

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

		this->texCoords = {
			{ 0.0f, 0.0f },
			{ 0.0f, 1.0f },
			{ 1.0f, 1.0f },
			{ 1.0f, 0.0f },

			{ 0.0f, 0.0f },
			{ 0.0f, 1.0f },
			{ 1.0f, 1.0f },
			{ 1.0f, 0.0f },

			{ 0.0f, 0.0f },
			{ 0.0f, 1.0f },
			{ 1.0f, 1.0f },
			{ 1.0f, 0.0f },

			{ 0.0f, 0.0f },
			{ 0.0f, 1.0f },
			{ 1.0f, 1.0f },
			{ 1.0f, 0.0f },

			{ 0.0f, 0.0f },
			{ 0.0f, 1.0f },
			{ 1.0f, 1.0f },
			{ 1.0f, 0.0f },

			{ 0.0f, 0.0f },
			{ 0.0f, 1.0f },
			{ 1.0f, 1.0f },
			{ 1.0f, 0.0f }
		};

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
        
        /* TODO: add the tangent vectors for the cube here to
         *       to the tangent array.
         *
         */
        // this->tangents...

		//glm::vec3 tangent, tangent2;
		
		//for (int i = 0; i < this->faces.size(); i += 2) {
		//	glm::vec3 pos1 = this->positions[this->faces[i][0]];
		//	glm::vec3 pos2 = this->positions[this->faces[i][1]];
		//	glm::vec3 pos3 = this->positions[this->faces[i][2]];
		//	
		//	glm::vec2 uv1 = this->texCoords[this->faces[i][0]];
		//	glm::vec2 uv2 = this->texCoords[this->faces[i][1]];
		//	glm::vec2 uv3 = this->texCoords[this->faces[i][2]];

		//	glm::vec3 edge1 = pos2 - pos1;
		//	glm::vec3 edge2 = pos3 - pos1;
		//	glm::vec2 deltaUV1 = uv2 - uv1;
		//	glm::vec2 deltaUV2 = uv3 - uv1;

		//	float f = 1.0f / (deltaUV1.x * deltaUV2.y - deltaUV2.x * deltaUV1.y);

		//	tangent.x = f * (deltaUV2.y * edge1.x - deltaUV1.y * edge2.x);
		//	tangent.y = f * (deltaUV2.y * edge1.y - deltaUV1.y * edge2.y);
		//	tangent.z = f * (deltaUV2.y * edge1.z - deltaUV1.y * edge2.z);

		//	tangent = glm::normalize(tangent);

		//	this->tangents.push_back(tangent);
		//	this->tangents.push_back(tangent);
		//	this->tangents.push_back(tangent);

		//	pos2 = pos3;
		//	pos3 = pos1;
		//	pos1 = this->positions[this->faces[i + 1][1]];

		//	uv2 = uv3;
		//	uv3 = uv1;
		//	uv1 = this->texCoords[this->faces[i + 1][1]];

		//	edge1 = pos2 - pos1;
		//	edge2 = pos3 - pos1;
		//	deltaUV1 = uv2 - uv1;
		//	deltaUV2 = uv3 - uv1;

		//	f = 1.0f / (deltaUV1.x * deltaUV2.y - deltaUV2.x * deltaUV1.y);

		//	tangent.x = f * (deltaUV2.y * edge1.x - deltaUV1.y * edge2.x);
		//	tangent.y = f * (deltaUV2.y * edge1.y - deltaUV1.y * edge2.y);
		//	tangent.z = f * (deltaUV2.y * edge1.z - deltaUV1.y * edge2.z);

		//	tangent = glm::normalize(tangent);

		//	this->tangents.push_back(tangent);

			glm::vec3 tangent;

			for (int i = 0; i < this->faces.size(); i++) {
				glm::vec3 pos1 = this->positions[this->faces[i][0]];
				glm::vec3 pos2 = this->positions[this->faces[i][1]];
				glm::vec3 pos3 = this->positions[this->faces[i][2]];

				glm::vec2 uv1 = this->texCoords[this->faces[i][0]];
				glm::vec2 uv2 = this->texCoords[this->faces[i][1]];
				glm::vec2 uv3 = this->texCoords[this->faces[i][2]];

				glm::vec3 edge1 = pos2 - pos1;
				glm::vec3 edge2 = pos3 - pos1;
				glm::vec2 deltaUV1 = uv2 - uv1;
				glm::vec2 deltaUV2 = uv3 - uv1;

				float f = 1.0f / (deltaUV1.x * deltaUV2.y - deltaUV2.x * deltaUV1.y);

				tangent.x = f * (deltaUV2.y * edge1.x - deltaUV1.y * edge2.x);
				tangent.y = f * (deltaUV2.y * edge1.y - deltaUV1.y * edge2.y);
				tangent.z = f * (deltaUV2.y * edge1.z - deltaUV1.y * edge2.z);

				tangent = glm::normalize(tangent);

				if (this->faces[i][0] >= this->tangents.size()) {
					this->tangents.push_back(tangent);
				}
				else {
					this->tangents[this->faces[i][0]] = tangent;
				}

				if (this->faces[i][1] >= this->tangents.size()) {
					this->tangents.push_back(tangent);
				}
				else {
					this->tangents[this->faces[i][1]] = tangent;
				}
				if (this->faces[i][2] >= this->tangents.size()) {
					this->tangents.push_back(tangent);
				}
				else {
					this->tangents[this->faces[i][2]] = tangent;
				}
		}








        // End TODO
	}
}
