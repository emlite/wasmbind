#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SanitizerElementNamespace.hpp"

namespace webbind {

/// Dictionary type SanitizerElementNamespaceWithAttributes
class SanitizerElementNamespaceWithAttributes : public SanitizerElementNamespace {
  explicit SanitizerElementNamespaceWithAttributes(Handle h) noexcept;
public:
    static SanitizerElementNamespaceWithAttributes take_ownership(Handle h) noexcept;
    explicit SanitizerElementNamespaceWithAttributes(const emlite::Val &val) noexcept;
    SanitizerElementNamespaceWithAttributes() noexcept;
    [[nodiscard]] SanitizerElementNamespaceWithAttributes clone() const noexcept;
    /// Getter of the `attributes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> attributes() const;
    /// Setter of the `attributes` attribute.
    void attributes(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `removeAttributes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> removeAttributes() const;
    /// Setter of the `removeAttributes` attribute.
    void removeAttributes(const jsbind::TypedArray<jsbind::Any>& value);
};

} // namespace webbind