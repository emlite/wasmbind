#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MediaQueryListEventInit
/// [`MediaQueryListEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryListEventInit)
class MediaQueryListEventInit : public EventInit {
  explicit MediaQueryListEventInit(Handle h) noexcept;
public:
    static MediaQueryListEventInit take_ownership(Handle h) noexcept;
    explicit MediaQueryListEventInit(const emlite::Val &val) noexcept;
    MediaQueryListEventInit() noexcept;
    [[nodiscard]] MediaQueryListEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String media() const;
    void media(const jsbind::String& value);
    [[nodiscard]] bool matches() const;
    void matches(bool value);
};

} // namespace webbind