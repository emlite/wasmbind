#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SanitizerElementNamespace.hpp"

namespace webbind {

/// Dictionary type SanitizerElementNamespaceWithAttributes
/// [`SanitizerElementNamespaceWithAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/SanitizerElementNamespaceWithAttributes)
class SanitizerElementNamespaceWithAttributes : public SanitizerElementNamespace {
  explicit SanitizerElementNamespaceWithAttributes(Handle h) noexcept;
public:
    static SanitizerElementNamespaceWithAttributes take_ownership(Handle h) noexcept;
    explicit SanitizerElementNamespaceWithAttributes(const emlite::Val &val) noexcept;
    SanitizerElementNamespaceWithAttributes() noexcept;
    [[nodiscard]] SanitizerElementNamespaceWithAttributes clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> attributes() const;
    void attributes(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> removeAttributes() const;
    void removeAttributes(const jsbind::TypedArray<jsbind::Any>& value);
};

} // namespace webbind