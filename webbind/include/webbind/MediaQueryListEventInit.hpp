#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MediaQueryListEventInit
class MediaQueryListEventInit : public EventInit {
  explicit MediaQueryListEventInit(Handle h) noexcept;
public:
    static MediaQueryListEventInit take_ownership(Handle h) noexcept;
    explicit MediaQueryListEventInit(const emlite::Val &val) noexcept;
    MediaQueryListEventInit() noexcept;
    [[nodiscard]] MediaQueryListEventInit clone() const noexcept;
    /// Getter of the `media` attribute.
    [[nodiscard]] jsbind::String media() const;
    /// Setter of the `media` attribute.
    void media(const jsbind::String& value);
    /// Getter of the `matches` attribute.
    [[nodiscard]] bool matches() const;
    /// Setter of the `matches` attribute.
    void matches(bool value);
};

} // namespace webbind