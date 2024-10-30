# author    Dubsky Tomas

prefixes = ["b", "i8", "u8", "i16", "u16", "i32", "u32", "i64", "u64", "u16", "", "d"]

print("// All vecs aligned to 16 (for std 140 arrays)")
for prefix in prefixes:
    for dims in range(1, 5):
        print(f"struct alignas(16) {prefix}vec{dims}_a16 : public glm::{prefix}vec{dims} {{}};")

print("// *vec3s aligned as *vec4s")
for prefix in prefixes:
        print(f"struct alignas(sizeof(glm::{prefix}vec4)) {prefix}vec3_av4 : public glm::{prefix}vec3 {{}};")
