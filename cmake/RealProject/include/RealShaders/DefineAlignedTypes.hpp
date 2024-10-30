/*!
 *  @author     Dubsky Tomas
 */

namespace re {

// All vecs aligned to 16 (for std 140 arrays)
struct alignas(16) bvec1_a16: public glm::bvec1 {};
struct alignas(16) bvec2_a16: public glm::bvec2 {};
struct alignas(16) bvec3_a16: public glm::bvec3 {};
struct alignas(16) bvec4_a16: public glm::bvec4 {};
struct alignas(16) i8vec1_a16: public glm::i8vec1 {};
struct alignas(16) i8vec2_a16: public glm::i8vec2 {};
struct alignas(16) i8vec3_a16: public glm::i8vec3 {};
struct alignas(16) i8vec4_a16: public glm::i8vec4 {};
struct alignas(16) u8vec1_a16: public glm::u8vec1 {};
struct alignas(16) u8vec2_a16: public glm::u8vec2 {};
struct alignas(16) u8vec3_a16: public glm::u8vec3 {};
struct alignas(16) u8vec4_a16: public glm::u8vec4 {};
struct alignas(16) i16vec1_a16: public glm::i16vec1 {};
struct alignas(16) i16vec2_a16: public glm::i16vec2 {};
struct alignas(16) i16vec3_a16: public glm::i16vec3 {};
struct alignas(16) i16vec4_a16: public glm::i16vec4 {};
struct alignas(16) u16vec1_a16: public glm::u16vec1 {};
struct alignas(16) u16vec2_a16: public glm::u16vec2 {};
struct alignas(16) u16vec3_a16: public glm::u16vec3 {};
struct alignas(16) u16vec4_a16: public glm::u16vec4 {};
struct alignas(16) i32vec1_a16: public glm::i32vec1 {};
struct alignas(16) i32vec2_a16: public glm::i32vec2 {};
struct alignas(16) i32vec3_a16: public glm::i32vec3 {};
struct alignas(16) i32vec4_a16: public glm::i32vec4 {};
struct alignas(16) u32vec1_a16: public glm::u32vec1 {};
struct alignas(16) u32vec2_a16: public glm::u32vec2 {};
struct alignas(16) u32vec3_a16: public glm::u32vec3 {};
struct alignas(16) u32vec4_a16: public glm::u32vec4 {};
struct alignas(16) i64vec1_a16: public glm::i64vec1 {};
struct alignas(16) i64vec2_a16: public glm::i64vec2 {};
struct alignas(16) i64vec3_a16: public glm::i64vec3 {};
struct alignas(16) i64vec4_a16: public glm::i64vec4 {};
struct alignas(16) u64vec1_a16: public glm::u64vec1 {};
struct alignas(16) u64vec2_a16: public glm::u64vec2 {};
struct alignas(16) u64vec3_a16: public glm::u64vec3 {};
struct alignas(16) u64vec4_a16: public glm::u64vec4 {};
struct alignas(16) u16vec1_a16: public glm::u16vec1 {};
struct alignas(16) u16vec2_a16: public glm::u16vec2 {};
struct alignas(16) u16vec3_a16: public glm::u16vec3 {};
struct alignas(16) u16vec4_a16: public glm::u16vec4 {};
struct alignas(16) vec1_a16: public glm::vec1 {};
struct alignas(16) vec2_a16: public glm::vec2 {};
struct alignas(16) vec3_a16: public glm::vec3 {};
struct alignas(16) vec4_a16: public glm::vec4 {};
struct alignas(16) dvec1_a16: public glm::dvec1 {};
struct alignas(16) dvec2_a16: public glm::dvec2 {};
struct alignas(16) dvec3_a16: public glm::dvec3 {};
struct alignas(16) dvec4_a16: public glm::dvec4 {};
// *vec3s aligned as *vec4s
struct alignas(sizeof(glm::bvec4)) bvec3_av4: public glm::bvec3 {};
struct alignas(sizeof(glm::i8vec4)) i8vec3_av4: public glm::i8vec3 {};
struct alignas(sizeof(glm::u8vec4)) u8vec3_av4: public glm::u8vec3 {};
struct alignas(sizeof(glm::i16vec4)) i16vec3_av4: public glm::i16vec3 {};
struct alignas(sizeof(glm::u16vec4)) u16vec3_av4: public glm::u16vec3 {};
struct alignas(sizeof(glm::i32vec4)) i32vec3_av4: public glm::i32vec3 {};
struct alignas(sizeof(glm::u32vec4)) u32vec3_av4: public glm::u32vec3 {};
struct alignas(sizeof(glm::i64vec4)) i64vec3_av4: public glm::i64vec3 {};
struct alignas(sizeof(glm::u64vec4)) u64vec3_av4: public glm::u64vec3 {};
struct alignas(sizeof(glm::u16vec4)) u16vec3_av4: public glm::u16vec3 {};
struct alignas(sizeof(glm::vec4)) vec3_av4: public glm::vec3 {};
struct alignas(sizeof(glm::dvec4)) dvec3_av4: public glm::dvec3 {};

} // namespace re
