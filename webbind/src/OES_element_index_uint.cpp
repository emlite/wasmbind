#include <webbind/OES_element_index_uint.hpp>


OES_element_index_uint OES_element_index_uint::take_ownership(Handle h) noexcept {
        return OES_element_index_uint(h);
    }
OES_element_index_uint OES_element_index_uint::clone() const noexcept { return *this; }
OES_element_index_uint::OES_element_index_uint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_element_index_uint::OES_element_index_uint(const emlite::Val &val) noexcept: emlite::Val(val) {}


