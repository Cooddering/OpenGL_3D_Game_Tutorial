#ifndef TERRAINSHADER_H
#define TERRAINSHADER_H

#include "ShaderProgram.h"
#include "../Entities/Camera.h"
#include "../Entities/Light.h"

class TerrainShader : public ShaderProgram
{
public:
	TerrainShader();
	virtual ~TerrainShader();

	void LoadTransformMatrix(glm::mat4& matrix);
	void LoadProjectionMatrix(glm::mat4& matrix);
	void LoadViewMatrix(glm::mat4& cameraViewMatrix);
	void LoadLight(Light& light, float ambientLight);
	void LoadShineVariables(float shineDamper, float shine);
private:
	GLuint location_TransformMatrix;
	GLuint location_ProjectionMatrix;
	GLuint location_ViewMatrix;
	GLuint location_lightPosition;
	GLuint location_lightColor;
	GLuint location_ambientLight;
	GLuint location_shineDamper;
	GLuint location_shine;
protected:
	void BindAttributes();
	void GetAllUniformLocations();
};

#endif // TERRAINSHADER_H