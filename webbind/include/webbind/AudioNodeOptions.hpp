#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioNodeOptions
/// [`AudioNodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNodeOptions)
class AudioNodeOptions : public emlite::Val {
  explicit AudioNodeOptions(Handle h) noexcept;
public:
    static AudioNodeOptions take_ownership(Handle h) noexcept;
    explicit AudioNodeOptions(const emlite::Val &val) noexcept;
    AudioNodeOptions() noexcept;
    [[nodiscard]] AudioNodeOptions clone() const noexcept;
    [[nodiscard]] unsigned long channelCount() const;
    void channelCount(unsigned long value);
    [[nodiscard]] ChannelCountMode channelCountMode() const;
    void channelCountMode(const ChannelCountMode& value);
    [[nodiscard]] ChannelInterpretation channelInterpretation() const;
    void channelInterpretation(const ChannelInterpretation& value);
};

} // namespace webbind