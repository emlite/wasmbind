#include <webbind/CSSNumericArray.hpp>
#include <webbind/CSSNumericValue.hpp>

namespace webbind {

CSSNumericArray CSSNumericArray::take_ownership(Handle h) noexcept {
    return CSSNumericArray(h);
}

CSSNumericArray CSSNumericArray::clone() const noexcept { return *this; }

emlite::Val CSSNumericArray::instance() noexcept { return emlite::Val::global("CSSNumericArray"); }

CSSNumericArray::CSSNumericArray(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

CSSNumericArray::CSSNumericArray(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long CSSNumericArray::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}


} // namespace webbind