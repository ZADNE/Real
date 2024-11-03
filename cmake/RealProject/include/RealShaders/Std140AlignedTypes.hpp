/*!
 *  @author     Dubsky Tomas
 */

namespace re::rs {

#include <glm/gtc/vec1.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>

// All vecs aligned to 16 bytes (for std140 arrays)
struct alignas(16) bvec1_140: public glm::bvec1 {};
struct alignas(16) bvec2_140: public glm::bvec2 {};
struct alignas(16) bvec3_140: public glm::bvec3 {};
struct alignas(16) bvec4_140: public glm::bvec4 {};
struct alignas(16) i8vec1_140: public glm::i8vec1 {};
struct alignas(16) i8vec2_140: public glm::i8vec2 {};
struct alignas(16) i8vec3_140: public glm::i8vec3 {};
struct alignas(16) i8vec4_140: public glm::i8vec4 {};
struct alignas(16) u8vec1_140: public glm::u8vec1 {};
struct alignas(16) u8vec2_140: public glm::u8vec2 {};
struct alignas(16) u8vec3_140: public glm::u8vec3 {};
struct alignas(16) u8vec4_140: public glm::u8vec4 {};
struct alignas(16) i16vec1_140: public glm::i16vec1 {};
struct alignas(16) i16vec2_140: public glm::i16vec2 {};
struct alignas(16) i16vec3_140: public glm::i16vec3 {};
struct alignas(16) i16vec4_140: public glm::i16vec4 {};
struct alignas(16) u16vec1_140: public glm::u16vec1 {};
struct alignas(16) u16vec2_140: public glm::u16vec2 {};
struct alignas(16) u16vec3_140: public glm::u16vec3 {};
struct alignas(16) u16vec4_140: public glm::u16vec4 {};
struct alignas(16) i32vec1_140: public glm::i32vec1 {};
struct alignas(16) i32vec2_140: public glm::i32vec2 {};
struct alignas(16) i32vec3_140: public glm::i32vec3 {};
struct alignas(16) i32vec4_140: public glm::i32vec4 {};
struct alignas(16) u32vec1_140: public glm::u32vec1 {};
struct alignas(16) u32vec2_140: public glm::u32vec2 {};
struct alignas(16) u32vec3_140: public glm::u32vec3 {};
struct alignas(16) u32vec4_140: public glm::u32vec4 {};
struct alignas(16) i64vec1_140: public glm::i64vec1 {};
struct alignas(16) i64vec2_140: public glm::i64vec2 {};
struct alignas(16) i64vec3_140: public glm::i64vec3 {};
struct alignas(16) i64vec4_140: public glm::i64vec4 {};
struct alignas(16) u64vec1_140: public glm::u64vec1 {};
struct alignas(16) u64vec2_140: public glm::u64vec2 {};
struct alignas(16) u64vec3_140: public glm::u64vec3 {};
struct alignas(16) u64vec4_140: public glm::u64vec4 {};
struct alignas(16) u16vec1_140: public glm::u16vec1 {};
struct alignas(16) u16vec2_140: public glm::u16vec2 {};
struct alignas(16) u16vec3_140: public glm::u16vec3 {};
struct alignas(16) u16vec4_140: public glm::u16vec4 {};
struct alignas(16) vec1_140: public glm::vec1 {};
struct alignas(16) vec2_140: public glm::vec2 {};
struct alignas(16) vec3_140: public glm::vec3 {};
struct alignas(16) vec4_140: public glm::vec4 {};
struct alignas(16) dvec1_140: public glm::dvec1 {};
struct alignas(16) dvec2_140: public glm::dvec2 {};
struct alignas(16) dvec3_140: public glm::dvec3 {};
struct alignas(16) dvec4_140: public glm::dvec4 {};

} // namespace re::rs
