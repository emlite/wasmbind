#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type OfflineAudioCompletionEventInit
class OfflineAudioCompletionEventInit : public EventInit {
  explicit OfflineAudioCompletionEventInit(Handle h) noexcept;
public:
    static OfflineAudioCompletionEventInit take_ownership(Handle h) noexcept;
    explicit OfflineAudioCompletionEventInit(const emlite::Val &val) noexcept;
    OfflineAudioCompletionEventInit() noexcept;
    [[nodiscard]] OfflineAudioCompletionEventInit clone() const noexcept;
    /// Getter of the `renderedBuffer` attribute.
    [[nodiscard]] AudioBuffer renderedBuffer() const;
    /// Setter of the `renderedBuffer` attribute.
    void renderedBuffer(const AudioBuffer& value);
};

} // namespace webbind