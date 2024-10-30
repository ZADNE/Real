/*!
 *  @author    Dubsky Tomas
 */

// Suppress GLSL keywords irrelevant for C++
#define RE_LAYOUT_1(a)
#define RE_LAYOUT_2(a, b)
#define RE_LAYOUT_3(a, b, c)
#define RE_LAYOUT_4(a, b, c, d)
#define RE_GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define layout(...)                                                               \
    RE_GET_MACRO(__VA_ARGS__, RE_LAYOUT_4, RE_LAYOUT_3, RE_LAYOUT_2, RE_LAYOUT_1) \
    (__VA_ARGS__)
#define restrict
#define buffer struct
#define uniform struct
#define in
#define inout inout_parameter_qualifier_cannot_be_exposed_to_cpp
#define out out_parameter_qualifier_cannot_be_exposed_to_cpp

using namespace glm;

#include <RealShaders/DefineSwizzlingMacros.hpp>
