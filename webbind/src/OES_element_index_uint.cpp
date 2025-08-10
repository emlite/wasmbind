#include "webbind/OES_element_index_uint.hpp"

namespace webbind {

OES_element_index_uint OES_element_index_uint::take_ownership(Handle h) noexcept {
        return OES_element_index_uint(h);
    }
OES_element_index_uint OES_element_index_uint::clone() const noexcept { return *this; }
emlite::Val OES_element_index_uint::instance() noexcept { return emlite::Val::global("OES_element_index_uint"); }
OES_element_index_uint::OES_element_index_uint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_element_index_uint::OES_element_index_uint(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind