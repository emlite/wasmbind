#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSStyleSheetInit
class CSSStyleSheetInit : public emlite::Val {
  explicit CSSStyleSheetInit(Handle h) noexcept;
public:
    static CSSStyleSheetInit take_ownership(Handle h) noexcept;
    explicit CSSStyleSheetInit(const emlite::Val &val) noexcept;
    CSSStyleSheetInit() noexcept;
    [[nodiscard]] CSSStyleSheetInit clone() const noexcept;
    /// Getter of the `baseURL` attribute.
    [[nodiscard]] jsbind::String baseURL() const;
    /// Setter of the `baseURL` attribute.
    void baseURL(const jsbind::String& value);
    /// Getter of the `media` attribute.
    [[nodiscard]] jsbind::Any media() const;
    /// Setter of the `media` attribute.
    void media(const jsbind::Any& value);
    /// Getter of the `disabled` attribute.
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    void disabled(bool value);
};

} // namespace webbind