# author    Dubsky Tomas

prefixes = ["b", "i8", "u8", "i16", "u16", "i32", "u32", "i64", "u64", "u16", "", "d"]

print("// All vecs aligned to 16 bytes (for std 140 arrays)")
for prefix in prefixes:
    for dims in range(1, 5):
        print(f"struct alignas(16) {prefix}vec{dims}_a16 : public glm::{prefix}vec{dims} {{}};")
