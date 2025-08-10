#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SanitizerElementNamespace
class SanitizerElementNamespace : public emlite::Val {
  explicit SanitizerElementNamespace(Handle h) noexcept;
public:
    static SanitizerElementNamespace take_ownership(Handle h) noexcept;
    explicit SanitizerElementNamespace(const emlite::Val &val) noexcept;
    SanitizerElementNamespace() noexcept;
    [[nodiscard]] SanitizerElementNamespace clone() const noexcept;
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