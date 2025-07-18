#include <webbind/XRInputSourceArray.hpp>
#include <webbind/XRInputSource.hpp>


XRInputSourceArray XRInputSourceArray::take_ownership(Handle h) noexcept {
        return XRInputSourceArray(h);
    }
XRInputSourceArray XRInputSourceArray::clone() const noexcept { return *this; }
XRInputSourceArray::XRInputSourceArray(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRInputSourceArray::XRInputSourceArray(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long XRInputSourceArray::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

