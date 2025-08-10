#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type ChannelMergerOptions
/// [`ChannelMergerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelMergerOptions)
class ChannelMergerOptions : public AudioNodeOptions {
  explicit ChannelMergerOptions(Handle h) noexcept;
public:
    static ChannelMergerOptions take_ownership(Handle h) noexcept;
    explicit ChannelMergerOptions(const emlite::Val &val) noexcept;
    ChannelMergerOptions() noexcept;
    [[nodiscard]] ChannelMergerOptions clone() const noexcept;
    [[nodiscard]] unsigned long numberOfInputs() const;
    void numberOfInputs(unsigned long value);
};

} // namespace webbind