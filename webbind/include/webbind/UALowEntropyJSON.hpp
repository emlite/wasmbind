#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NavigatorUABrandVersion.hpp"

namespace webbind {

/// Dictionary type UALowEntropyJSON
/// [`UALowEntropyJSON`](https://developer.mozilla.org/en-US/docs/Web/API/UALowEntropyJSON)
class UALowEntropyJSON : public emlite::Val {
  explicit UALowEntropyJSON(Handle h) noexcept;
public:
    static UALowEntropyJSON take_ownership(Handle h) noexcept;
    explicit UALowEntropyJSON(const emlite::Val &val) noexcept;
    UALowEntropyJSON() noexcept;
    [[nodiscard]] UALowEntropyJSON clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    void brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value);
    [[nodiscard]] bool mobile() const;
    void mobile(bool value);
    [[nodiscard]] jsbind::String platform() const;
    void platform(const jsbind::String& value);
};

} // namespace webbind