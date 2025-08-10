#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MediaKeyMessageEventInit
class MediaKeyMessageEventInit : public EventInit {
  explicit MediaKeyMessageEventInit(Handle h) noexcept;
public:
    static MediaKeyMessageEventInit take_ownership(Handle h) noexcept;
    explicit MediaKeyMessageEventInit(const emlite::Val &val) noexcept;
    MediaKeyMessageEventInit() noexcept;
    [[nodiscard]] MediaKeyMessageEventInit clone() const noexcept;
    /// Getter of the `messageType` attribute.
    [[nodiscard]] MediaKeyMessageType messageType() const;
    /// Setter of the `messageType` attribute.
    void messageType(const MediaKeyMessageType& value);
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::ArrayBuffer message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::ArrayBuffer& value);
};

} // namespace webbind