#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MediaKeyMessageEventInit
/// [`MediaKeyMessageEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEventInit)
class MediaKeyMessageEventInit : public EventInit {
  explicit MediaKeyMessageEventInit(Handle h) noexcept;
public:
    static MediaKeyMessageEventInit take_ownership(Handle h) noexcept;
    explicit MediaKeyMessageEventInit(const emlite::Val &val) noexcept;
    MediaKeyMessageEventInit() noexcept;
    [[nodiscard]] MediaKeyMessageEventInit clone() const noexcept;
    [[nodiscard]] MediaKeyMessageType messageType() const;
    void messageType(const MediaKeyMessageType& value);
    [[nodiscard]] jsbind::ArrayBuffer message() const;
    void message(const jsbind::ArrayBuffer& value);
};

} // namespace webbind