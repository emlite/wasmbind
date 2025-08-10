#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TrustedTypePolicyOptions
/// [`TrustedTypePolicyOptions`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyOptions)
class TrustedTypePolicyOptions : public emlite::Val {
  explicit TrustedTypePolicyOptions(Handle h) noexcept;
public:
    static TrustedTypePolicyOptions take_ownership(Handle h) noexcept;
    explicit TrustedTypePolicyOptions(const emlite::Val &val) noexcept;
    TrustedTypePolicyOptions() noexcept;
    [[nodiscard]] TrustedTypePolicyOptions clone() const noexcept;
    [[nodiscard]] jsbind::Function createHTML() const;
    void createHTML(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function createScript() const;
    void createScript(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function createScriptURL() const;
    void createScriptURL(const jsbind::Function& value);
};

} // namespace webbind