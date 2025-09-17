#include <webbind/XPathNSResolver.hpp>

namespace webbind {

XPathNSResolver XPathNSResolver::take_ownership(Handle h) noexcept {
    return XPathNSResolver(h);
}

XPathNSResolver XPathNSResolver::clone() const noexcept { return *this; }

XPathNSResolver::XPathNSResolver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

XPathNSResolver::XPathNSResolver(const emlite::Val &val) noexcept: emlite::Val(val) {}

XPathNSResolver::XPathNSResolver(const jsbind::Function &fn) noexcept : emlite::Val(fn) {}

XPathNSResolver::XPathNSResolver(const jsbind::Function::Fn<jsbind::String(jsbind::String)> &fn) noexcept : emlite::Val(static_cast<jsbind::Function>(fn)) {}

jsbind::String XPathNSResolver::lookupNamespaceURI(const jsbind::String& prefix) const {
    if (is_function()) {
        return jsbind::Function(*this)(prefix).as<jsbind::String>();
    }
    return emlite::Val::call("lookupNamespaceURI", prefix).as<jsbind::String>();
}


} // namespace webbind