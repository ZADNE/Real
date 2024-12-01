/*!
 *  @author     Dubsky Tomas
 */
#ifndef RE_CPP_INTEGRATION_GLSL
#define RE_CPP_INTEGRATION_GLSL

#ifdef VULKAN
#    extension GL_EXT_scalar_block_layout : require

#    define RE_SHADER_INSTANCE(identifier) identifier
#else
#    define RE_SHADER_INSTANCE(identifier)
#endif

#endif // !RE_CPP_INTEGRATION_GLSL