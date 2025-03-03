#version 420 core

layout(location = 0) in vec3 aPos;
layout(location = 1) in vec3 aNormal;

uniform mat4 Model;
uniform mat4 View;
uniform mat4 Projection;

void main() {
    // note that we read the multiplication from right to left
    gl_Position = Projection * View * Model * vec4(aPos, 1.0);
}