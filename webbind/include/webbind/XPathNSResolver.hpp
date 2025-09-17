#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Callback interface XPathNSResolver
/// Generated wrapper for WebIDL `callback interface XPathNSResolver`
class XPathNSResolver : public emlite::Val {
    explicit XPathNSResolver(Handle h) noexcept;
public:
    explicit XPathNSResolver(const emlite::Val &val) noexcept;
    static XPathNSResolver take_ownership(Handle h) noexcept;
    [[nodiscard]] XPathNSResolver clone() const noexcept;

    // Converting constructors from functions
    XPathNSResolver(const jsbind::Function &fn) noexcept;
    XPathNSResolver(const jsbind::Function::Fn<jsbind::String(jsbind::String)> &fn) noexcept;

    [[nodiscard]] jsbind::String lookupNamespaceURI(const jsbind::String& prefix) const;
};

} // namespace webbind