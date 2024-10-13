/*! 
 *  @author    Dubsky Tomas
 */
#ifndef REALSHADERS_CPP_INTEGRATION_GLSL
#define REALSHADERS_CPP_INTEGRATION_GLSL

#ifdef __cplusplus

// Suppress GLSL keywords irrelevant for C++
#define RE_LAYOUT_1(a)
#define RE_LAYOUT_2(a, b)
#define RE_LAYOUT_3(a, b, c)
#define RE_LAYOUT_4(a, b, c, d)
#define GET_MACRO(_0, _1, _2, _3, _4, NAME, ...) NAME
#define layout(...) GET_MACRO(__VA_ARGS__, RE_LAYOUT_4, RE_LAYOUT_3, RE_LAYOUT_2, RE_LAYOUT_1)(__VA_ARGS__)
#define restrict
#define buffer struct
#define uniform struct

#define GLSL_ONLY_INSTANCE(name)

#ifdef VULKAN

#define GLSL_ONLY_INSTANCE(name) name

#endif

#endif // !REALSHADERS_CPP_INTEGRATION_GLSL