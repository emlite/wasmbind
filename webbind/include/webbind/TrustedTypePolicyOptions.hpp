#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TrustedTypePolicyOptions
class TrustedTypePolicyOptions : public emlite::Val {
  explicit TrustedTypePolicyOptions(Handle h) noexcept;
public:
    static TrustedTypePolicyOptions take_ownership(Handle h) noexcept;
    explicit TrustedTypePolicyOptions(const emlite::Val &val) noexcept;
    TrustedTypePolicyOptions() noexcept;
    [[nodiscard]] TrustedTypePolicyOptions clone() const noexcept;
    /// Getter of the `createHTML` attribute.
    [[nodiscard]] jsbind::Function createHTML() const;
    /// Setter of the `createHTML` attribute.
    void createHTML(const jsbind::Function& value);
    /// Getter of the `createScript` attribute.
    [[nodiscard]] jsbind::Function createScript() const;
    /// Setter of the `createScript` attribute.
    void createScript(const jsbind::Function& value);
    /// Getter of the `createScriptURL` attribute.
    [[nodiscard]] jsbind::Function createScriptURL() const;
    /// Setter of the `createScriptURL` attribute.
    void createScriptURL(const jsbind::Function& value);
};

} // namespace webbind