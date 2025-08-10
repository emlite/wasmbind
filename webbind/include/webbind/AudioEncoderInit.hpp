#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioEncoderInit
class AudioEncoderInit : public emlite::Val {
  explicit AudioEncoderInit(Handle h) noexcept;
public:
    static AudioEncoderInit take_ownership(Handle h) noexcept;
    explicit AudioEncoderInit(const emlite::Val &val) noexcept;
    AudioEncoderInit() noexcept;
    [[nodiscard]] AudioEncoderInit clone() const noexcept;
    /// Getter of the `output` attribute.
    [[nodiscard]] jsbind::Function output() const;
    /// Setter of the `output` attribute.
    void output(const jsbind::Function& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::Function error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::Function& value);
};

} // namespace webbind