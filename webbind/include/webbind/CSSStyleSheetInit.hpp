#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSStyleSheetInit
/// [`CSSStyleSheetInit`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheetInit)
class CSSStyleSheetInit : public emlite::Val {
  explicit CSSStyleSheetInit(Handle h) noexcept;
public:
    static CSSStyleSheetInit take_ownership(Handle h) noexcept;
    explicit CSSStyleSheetInit(const emlite::Val &val) noexcept;
    CSSStyleSheetInit() noexcept;
    [[nodiscard]] CSSStyleSheetInit clone() const noexcept;
    [[nodiscard]] jsbind::String baseURL() const;
    void baseURL(const jsbind::String& value);
    [[nodiscard]] jsbind::Any media() const;
    void media(const jsbind::Any& value);
    [[nodiscard]] bool disabled() const;
    void disabled(bool value);
};

} // namespace webbind