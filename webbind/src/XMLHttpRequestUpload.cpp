#include <webbind/XMLHttpRequestUpload.hpp>

namespace webbind {

XMLHttpRequestUpload XMLHttpRequestUpload::take_ownership(Handle h) noexcept {
    return XMLHttpRequestUpload(h);
}

XMLHttpRequestUpload XMLHttpRequestUpload::clone() const noexcept { return *this; }

emlite::Val XMLHttpRequestUpload::instance() noexcept { return emlite::Val::global("XMLHttpRequestUpload"); }

XMLHttpRequestUpload::XMLHttpRequestUpload(Handle h) noexcept : XMLHttpRequestEventTarget(emlite::Val::take_ownership(h)) {}

XMLHttpRequestUpload::XMLHttpRequestUpload(const emlite::Val &val) noexcept: XMLHttpRequestEventTarget(val) {}


} // namespace webbind