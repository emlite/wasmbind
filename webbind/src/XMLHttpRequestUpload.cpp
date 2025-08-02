#include <webbind/XMLHttpRequestUpload.hpp>


XMLHttpRequestUpload XMLHttpRequestUpload::take_ownership(Handle h) noexcept {
        return XMLHttpRequestUpload(h);
    }
XMLHttpRequestUpload XMLHttpRequestUpload::clone() const noexcept { return *this; }
emlite::Val XMLHttpRequestUpload::instance() noexcept { return emlite::Val::global("XMLHttpRequestUpload"); }
XMLHttpRequestUpload::XMLHttpRequestUpload(Handle h) noexcept : XMLHttpRequestEventTarget(emlite::Val::take_ownership(h)) {}
XMLHttpRequestUpload::XMLHttpRequestUpload(const emlite::Val &val) noexcept: XMLHttpRequestEventTarget(val) {}


