#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDecoderInit
class AudioDecoderInit : public emlite::Val {
  explicit AudioDecoderInit(Handle h) noexcept;
public:
    static AudioDecoderInit take_ownership(Handle h) noexcept;
    explicit AudioDecoderInit(const emlite::Val &val) noexcept;
    AudioDecoderInit() noexcept;
    [[nodiscard]] AudioDecoderInit clone() const noexcept;
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