#ifndef EX_TEXTURES_H
#define EX_TEXTURES_H

#include "../../Lessons/BaseExcercise.h"

#include "Helper/VertexData.h"

#include <memory>
#include <vector>

class ShaderProgram;

class Ex_Textures : public BaseExcercise {
public:
    Ex_Textures(){};
    virtual ~Ex_Textures(){};

    virtual void Initialize() override;
    virtual void Tick() override;

private:
    std::shared_ptr<ShaderProgram> m_shaderProgram;
    std::vector<VertexData_PosColorTexture> m_vertices;

    unsigned int m_texture1;
    unsigned int m_texture2;
    unsigned int m_VAO;
    unsigned int m_VBO;
    unsigned int m_EBO;
};
#endif
