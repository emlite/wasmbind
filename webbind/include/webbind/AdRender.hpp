#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdRender
class AdRender : public emlite::Val {
  explicit AdRender(Handle h) noexcept;
public:
    static AdRender take_ownership(Handle h) noexcept;
    explicit AdRender(const emlite::Val &val) noexcept;
    AdRender() noexcept;
    [[nodiscard]] AdRender clone() const noexcept;
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `width` attribute.
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    void width(const jsbind::String& value);
    /// Getter of the `height` attribute.
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    void height(const jsbind::String& value);
};

} // namespace webbind