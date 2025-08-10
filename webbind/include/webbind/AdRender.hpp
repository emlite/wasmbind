#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdRender
/// [`AdRender`](https://developer.mozilla.org/en-US/docs/Web/API/AdRender)
class AdRender : public emlite::Val {
  explicit AdRender(Handle h) noexcept;
public:
    static AdRender take_ownership(Handle h) noexcept;
    explicit AdRender(const emlite::Val &val) noexcept;
    AdRender() noexcept;
    [[nodiscard]] AdRender clone() const noexcept;
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] jsbind::String width() const;
    void width(const jsbind::String& value);
    [[nodiscard]] jsbind::String height() const;
    void height(const jsbind::String& value);
};

} // namespace webbind