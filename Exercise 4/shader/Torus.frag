#version 330 core

/* TODO update your vertex shader so that...
 *      ...it emits the color for phong illumination
 *      ...it emits the color from the vertex shader in case you do gourand shading there
 */

in vec3 objectColor;
in vec3 normal;
in vec3 lightPos;
in vec3 viewPos;
in vec3 FragPos;

layout(std140) uniform materialBlock
{
	vec3 ambient;
	vec3 diffuse;
	vec3 specular;
} material;

// Ouput data
out vec3 color;

/* TODO fill these structs with values from outside the shader similar
 *      to your matric variables
 */
uniform bool ph;

void main()
{
	if(ph){
	color = material.ambient * objectColor;
	vec3 l = normalize(lightPos - FragPos);
	float diff = max(dot(normalize(normal), l), 0.0);
	color += material.diffuse * diff * objectColor;
	vec3 r = reflect(-l, normalize(normal));
	vec3 e = normalize(viewPos - FragPos);
	float spec = max(dot(r,e), 0.0);
	color += material.specular * pow(spec, 32) * objectColor;
	}
	else{
		color = objectColor;
	}









	// End TODO
}