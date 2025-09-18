#include <emlite/emlite.hpp>
#include <jsbind/Array.hpp>
#include <jsbind/utils.hpp>

#if __has_include(<vector>)
#  include <vector>
#endif

using namespace jsbind;

int main() {
    emlite::init();

    // Pointer + length
    {
        uint32_t raw[4] = {10, 20, 30, 40};
        auto u32 = Uint32Array::from(raw, 4);
        (void)u32;
    }

#if __has_include(<vector>)
    // std::vector (if available)
    {
        std::vector<uint8_t> v{1, 2, 3, 4, 5};
        auto u8 = Uint8Array::from(v);
        (void)u8;
    }
#endif

#if __has_include(<span>)
    // std::span (if available)
    {
        double data[3] = {0.5, 1.5, 2.5};
        std::span<const double> s{data, 3};
        auto f64 = Float64Array::from(s);
        (void)f64;
    }
#endif

    return 0;
}

