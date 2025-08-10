#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BrowserBoundSignature
/// [`BrowserBoundSignature`](https://developer.mozilla.org/en-US/docs/Web/API/BrowserBoundSignature)
class BrowserBoundSignature : public emlite::Val {
  explicit BrowserBoundSignature(Handle h) noexcept;
public:
    static BrowserBoundSignature take_ownership(Handle h) noexcept;
    explicit BrowserBoundSignature(const emlite::Val &val) noexcept;
    BrowserBoundSignature() noexcept;
    [[nodiscard]] BrowserBoundSignature clone() const noexcept;
    [[nodiscard]] jsbind::ArrayBuffer signature() const;
    void signature(const jsbind::ArrayBuffer& value);
};

} // namespace webbind