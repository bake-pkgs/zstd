import bake.build;
import std;

int main() {
    bake::Builder b;
    const auto upstream = std::string(b.dep_src_dir("upstream"));

    b.sources({upstream + "/lib/common/*.c",
               upstream + "/lib/compress/*.c",
               upstream + "/lib/decompress/*.c",
               upstream + "/lib/decompress/*.S"})
        .public_headers(upstream + "/lib");

    return b.build();
}
