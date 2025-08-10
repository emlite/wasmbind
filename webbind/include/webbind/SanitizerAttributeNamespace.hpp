#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SanitizerAttributeNamespace
class SanitizerAttributeNamespace : public emlite::Val {
  explicit SanitizerAttributeNamespace(Handle h) noexcept;
public:
    static SanitizerAttributeNamespace take_ownership(Handle h) noexcept;
    explicit SanitizerAttributeNamespace(const emlite::Val &val) noexcept;
    SanitizerAttributeNamespace() noexcept;
    [[nodiscard]] SanitizerAttributeNamespace clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `namespace` attribute.
    [[nodiscard]] jsbind::String namespace_() const;
    /// Setter of the `namespace` attribute.
    void namespace_(const jsbind::String& value);
};

} // namespace webbind