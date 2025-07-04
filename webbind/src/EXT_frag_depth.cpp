#include <webbind/EXT_frag_depth.hpp>


EXT_frag_depth EXT_frag_depth::take_ownership(Handle h) noexcept {
        return EXT_frag_depth(h);
    }
EXT_frag_depth EXT_frag_depth::clone() const noexcept { return *this; }
EXT_frag_depth::EXT_frag_depth(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_frag_depth::EXT_frag_depth(const emlite::Val &val) noexcept: emlite::Val(val) {}


