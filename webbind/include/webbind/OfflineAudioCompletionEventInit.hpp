#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type OfflineAudioCompletionEventInit
/// [`OfflineAudioCompletionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEventInit)
class OfflineAudioCompletionEventInit : public EventInit {
  explicit OfflineAudioCompletionEventInit(Handle h) noexcept;
public:
    static OfflineAudioCompletionEventInit take_ownership(Handle h) noexcept;
    explicit OfflineAudioCompletionEventInit(const emlite::Val &val) noexcept;
    OfflineAudioCompletionEventInit() noexcept;
    [[nodiscard]] OfflineAudioCompletionEventInit clone() const noexcept;
    [[nodiscard]] AudioBuffer renderedBuffer() const;
    void renderedBuffer(const AudioBuffer& value);
};

} // namespace webbind