#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type ChannelSplitterOptions
class ChannelSplitterOptions : public AudioNodeOptions {
  explicit ChannelSplitterOptions(Handle h) noexcept;
public:
    static ChannelSplitterOptions take_ownership(Handle h) noexcept;
    explicit ChannelSplitterOptions(const emlite::Val &val) noexcept;
    ChannelSplitterOptions() noexcept;
    [[nodiscard]] ChannelSplitterOptions clone() const noexcept;
    /// Getter of the `numberOfOutputs` attribute.
    [[nodiscard]] unsigned long numberOfOutputs() const;
    /// Setter of the `numberOfOutputs` attribute.
    void numberOfOutputs(unsigned long value);
};

} // namespace webbind