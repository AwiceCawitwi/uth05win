#pragma once
#include "include/glew.h"
#include "include/wglew.h"
#include <GL/gl.h>

namespace mh{
	namespace gl{
		enum INTERNAL_FORMAT{
			IFORMAT_RGB_F16		= GL_RGB16F_ARB,
			IFORMAT_RGBA_F16	= GL_RGBA16F_ARB,
			IFORMAT_RGB_F32		= GL_RGB32F_ARB,
			IFORMAT_RGBA_F32	= GL_RGBA32F_ARB,
			IFORMAT_RGB			= GL_RGB,
			IFORMAT_RGBA		= GL_RGBA,
			IFORMAT_DEPTH		= GL_DEPTH_COMPONENT,
			IFORMAT_DEPTH_F32	= GL_DEPTH_COMPONENT32,
			IFORMAT_STENCIL		= GL_STENCIL_INDEX,
			IFORMAT_NOTSET		= -1
		};
		enum EXTERNAL_FORMAT{
			EFORMAT_RGB			= GL_RGB,
			EFORMAT_RGBA		= GL_RGBA,
			EFORMAT_DEPTH		= GL_DEPTH_COMPONENT,
			EFORMAT_RED			= GL_RED
		};
		enum TYPE{
			TYPE_UBYTE = GL_UNSIGNED_BYTE,
			TYPE_FLOAT = GL_FLOAT
		};
	}
}