#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BrowserBoundSignature
class BrowserBoundSignature : public emlite::Val {
  explicit BrowserBoundSignature(Handle h) noexcept;
public:
    static BrowserBoundSignature take_ownership(Handle h) noexcept;
    explicit BrowserBoundSignature(const emlite::Val &val) noexcept;
    BrowserBoundSignature() noexcept;
    [[nodiscard]] BrowserBoundSignature clone() const noexcept;
    /// Getter of the `signature` attribute.
    [[nodiscard]] jsbind::ArrayBuffer signature() const;
    /// Setter of the `signature` attribute.
    void signature(const jsbind::ArrayBuffer& value);
};

} // namespace webbind