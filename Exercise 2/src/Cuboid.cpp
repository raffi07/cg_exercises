#include "Cuboid.h"
#include <iostream>

// this define and include will enable M_PI from math.h.  
#define _USE_MATH_DEFINES
#include <math.h>

namespace cgCourse
{
	Cuboid::Cuboid() : Shape()
	{

		const int elem = 100;
		int start = -2;
		int end = 2;
		int diff = abs(end - start);

		float xvals[elem];
		float yvals[elem];
		float slope[elem];

		for (int i = 0; i < elem; i++) {
			float stepsize = (float) diff / (float)(elem - 1);
			float x = start + stepsize * i;
			xvals[i] = x;
			yvals[i] = (float)pow(x, 2) + x;
			slope[i] = (float)2 * x + 1;
		}

		for (int i = 0; i < elem; i++) {
			this->positions.push_back({ xvals[i] + 0.25*((float)slope[i] / (float)sqrt(pow(slope[i],2) + 1)), yvals[i] - 0.25 * ((float)1 / (float)sqrt(pow(slope[i],2) + 1)), 0 });
			this->positions.push_back({ xvals[i] - 0.25*((float)slope[i] / (float)sqrt(pow(slope[i],2) + 1)), yvals[i] + 0.25 * ((float)1 / (float)sqrt(pow(slope[i],2) + 1)), 0 });
			this->positions.push_back({ xvals[i], yvals[i], -0.25 });
			this->positions.push_back({ xvals[i], yvals[i], 0.25 });
		}

		for (int i = 0; i < elem-1; i++) {
			// squares
			this->faces.push_back({ 4 * i, 4 * i + 3, 4 * i + 1 });
			this->faces.push_back({ 4 * i + 1, 4 * i + 2, 4 * i });
			// back-triangles
			this->faces.push_back({ 4 * i, 4 * i + 3, 4 * i + 4 });
			this->faces.push_back({ 4 * i + 3, 4 * i + 4, 4 * i + 7 });
			// right triangles
			this->faces.push_back({ 4 * i + 3, 4 * i + 7, 4 * i + 5 });
			this->faces.push_back({ 4 * i + 3, 4 * i + 1, 4 * i + 5 });
			// front triangles
			this->faces.push_back({ 4 * i + 1, 4 * i + 5, 4 * i + 6 });
			this->faces.push_back({ 4 * i + 1, 4 * i + 2, 4 * i + 6 });
			//left triangles
			this->faces.push_back({ 4 * i, 4 * i + 2, 4 * i + 4 });
			this->faces.push_back({ 4 * i + 4, 4 * i + 2, 4 * i + 6 });
		}

		this->faces.push_back({ 4 * (elem-1), 4 * (elem-1) + 3, 4 * (elem-1) + 1 });
		this->faces.push_back({ 4 * (elem-1) + 1, 4 * (elem-1) + 2, 4 * (elem-1) });

		for (int i = 0; i < elem; i++) {
			this->colors.push_back({ 1.0f, 0.0f, 0.0f }); //red
			this->colors.push_back({ 0.0f, 0.0f, 1.0f }); //blue
			this->colors.push_back({ 0.0f, 1.0f, 0.0f }); //green
			this->colors.push_back({ 0.0f, 0.0f, 0.0f }); //black
		}
	}
}
