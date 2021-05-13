#version 330 core

/* TODO update your vertex shader so that...
 *      ...it emits all necessary information to the fragment shader for phong illumination
 *      ...it emits the color in case you do gourand shading
 */

// Input vertex data
layout(location = 0) in vec3 vPosition;
layout(location = 1) in vec3 vColor;
layout(location = 2) in vec3 vNormal;

in vec3 lightPos;
in vec3 viewPos;

// Output data will be interpolated for each fragment.
// Tip: Try to use the flat modifier to make color associations of a fragment visible for debugging. 
out vec3 objectColor;
out vec3 normal;
out vec3 FragPos;

// matrices that stay constant for the whole mesh.
uniform mat4 modelMatrix;
uniform mat4 mvpMatrix;
uniform bool ph;

/* TODO additional variables
 *
 */
layout(std140) uniform materialBlock
{
	vec3 ambient;
	vec3 diffuse;
	vec3 specular;
} material;

void main(){
	normal = mat3(transpose(inverse(modelMatrix))) * vNormal;

	FragPos = vec3(modelMatrix * vec4(vPosition, 1.0));

	gl_Position = mvpMatrix * vec4(vPosition, 1.0);

	if(!ph){
		objectColor = material.ambient * vColor;

		vec3 l = normalize(lightPos - FragPos);
		float diff = max(dot(normalize(normal), l), 0.0);
		objectColor += material.diffuse * diff * vColor;

		vec3 r = reflect(-l, normalize(normal));
		vec3 e = normalize(viewPos - FragPos);
		float spec = max(dot(r, e), 0.0);
		objectColor += material.specular * pow(spec, 32) * vColor;
	}
	else{
		objectColor = vColor;
	}




 	// End TODO
}