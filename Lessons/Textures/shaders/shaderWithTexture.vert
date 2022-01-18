#version 420 core

layout(location = 0) in vec2 aPos;
layout(location = 1) in vec3 aColor;
layout(location = 2) in vec2 aTexCoord;

out vec3 Color;
out vec2 TexCoord;

void main() {
    gl_Position = vec4(aPos, 0.0, 1.0);
    Color = aColor;
    TexCoord = aTexCoord;
};
