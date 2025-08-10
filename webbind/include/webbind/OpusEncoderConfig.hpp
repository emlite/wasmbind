#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OpusEncoderConfig
class OpusEncoderConfig : public emlite::Val {
  explicit OpusEncoderConfig(Handle h) noexcept;
public:
    static OpusEncoderConfig take_ownership(Handle h) noexcept;
    explicit OpusEncoderConfig(const emlite::Val &val) noexcept;
    OpusEncoderConfig() noexcept;
    [[nodiscard]] OpusEncoderConfig clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] OpusBitstreamFormat format() const;
    /// Setter of the `format` attribute.
    void format(const OpusBitstreamFormat& value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] OpusSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const OpusSignal& value);
    /// Getter of the `application` attribute.
    [[nodiscard]] OpusApplication application() const;
    /// Setter of the `application` attribute.
    void application(const OpusApplication& value);
    /// Getter of the `frameDuration` attribute.
    [[nodiscard]] long long frameDuration() const;
    /// Setter of the `frameDuration` attribute.
    void frameDuration(long long value);
    /// Getter of the `complexity` attribute.
    [[nodiscard]] unsigned long complexity() const;
    /// Setter of the `complexity` attribute.
    void complexity(unsigned long value);
    /// Getter of the `packetlossperc` attribute.
    [[nodiscard]] unsigned long packetlossperc() const;
    /// Setter of the `packetlossperc` attribute.
    void packetlossperc(unsigned long value);
    /// Getter of the `useinbandfec` attribute.
    [[nodiscard]] bool useinbandfec() const;
    /// Setter of the `useinbandfec` attribute.
    void useinbandfec(bool value);
    /// Getter of the `usedtx` attribute.
    [[nodiscard]] bool usedtx() const;
    /// Setter of the `usedtx` attribute.
    void usedtx(bool value);
};

} // namespace webbind