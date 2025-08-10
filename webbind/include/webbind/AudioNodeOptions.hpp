#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioNodeOptions
class AudioNodeOptions : public emlite::Val {
  explicit AudioNodeOptions(Handle h) noexcept;
public:
    static AudioNodeOptions take_ownership(Handle h) noexcept;
    explicit AudioNodeOptions(const emlite::Val &val) noexcept;
    AudioNodeOptions() noexcept;
    [[nodiscard]] AudioNodeOptions clone() const noexcept;
    /// Getter of the `channelCount` attribute.
    [[nodiscard]] unsigned long channelCount() const;
    /// Setter of the `channelCount` attribute.
    void channelCount(unsigned long value);
    /// Getter of the `channelCountMode` attribute.
    [[nodiscard]] ChannelCountMode channelCountMode() const;
    /// Setter of the `channelCountMode` attribute.
    void channelCountMode(const ChannelCountMode& value);
    /// Getter of the `channelInterpretation` attribute.
    [[nodiscard]] ChannelInterpretation channelInterpretation() const;
    /// Setter of the `channelInterpretation` attribute.
    void channelInterpretation(const ChannelInterpretation& value);
};

} // namespace webbind