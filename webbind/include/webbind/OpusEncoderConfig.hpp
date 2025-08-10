#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OpusEncoderConfig
/// [`OpusEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/OpusEncoderConfig)
class OpusEncoderConfig : public emlite::Val {
  explicit OpusEncoderConfig(Handle h) noexcept;
public:
    static OpusEncoderConfig take_ownership(Handle h) noexcept;
    explicit OpusEncoderConfig(const emlite::Val &val) noexcept;
    OpusEncoderConfig() noexcept;
    [[nodiscard]] OpusEncoderConfig clone() const noexcept;
    [[nodiscard]] OpusBitstreamFormat format() const;
    void format(const OpusBitstreamFormat& value);
    [[nodiscard]] OpusSignal signal() const;
    void signal(const OpusSignal& value);
    [[nodiscard]] OpusApplication application() const;
    void application(const OpusApplication& value);
    [[nodiscard]] long long frameDuration() const;
    void frameDuration(long long value);
    [[nodiscard]] unsigned long complexity() const;
    void complexity(unsigned long value);
    [[nodiscard]] unsigned long packetlossperc() const;
    void packetlossperc(unsigned long value);
    [[nodiscard]] bool useinbandfec() const;
    void useinbandfec(bool value);
    [[nodiscard]] bool usedtx() const;
    void usedtx(bool value);
};

} // namespace webbind