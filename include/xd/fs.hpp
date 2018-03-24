#ifndef FS_HPP
#define FS_HPP

const char* fs =
"#version 330 core\n"
"\n"
"uniform vec4 uFillColor;\n"
"uniform vec4 uStrokeColor;\n"
"uniform int uDoFill;\n"
"uniform int uDoStroke;\n"
"uniform float uStrokeWeight;\n"
"uniform sampler2D uTexture;\n"
"uniform int uDoTexture;\n"
"\n"
"in vec2 vUV;\n"
"in vec3 vColor;\n"
"noperspective in vec3 vDist;\n"
"out vec4 fragColor;\n"
"\n"
"void main() {\n"
"	if (uDoTexture == 1) {\n"
"		fragColor = texture(uTexture, vUV);\n"
"	} else {\n"
"		float d = min(vDist[0], min(vDist[1], vDist[2]));\n"
"		d = clamp((d - (uStrokeWeight * 2.0 - 1)), 0, 2);\n"
"		float I = uDoStroke == 1 ? exp2(-2.0 * d * d) : 0.0;\n"
"		fragColor = mix(uDoFill == 1 ? uFillColor : vec4(0.0), uStrokeColor, I);\n"
"	}\n"
"}\n"
;

#endif /* FS_HPP */
