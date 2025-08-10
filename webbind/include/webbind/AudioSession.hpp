#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface AudioSession
/// [`AudioSession`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession)
class AudioSession : public EventTarget {
    explicit AudioSession(Handle h) noexcept;
public:
    explicit AudioSession(const emlite::Val &val) noexcept;
    static AudioSession take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSession clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`AudioSession.type`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/type)
    /// [`AudioSession.type`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/type)
    [[nodiscard]] AudioSessionType type() const;
    /// Setter of the `type` attribute.
    /// [`AudioSession.type`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/type)
    void type(const AudioSessionType& value);
    /// [`AudioSession.state`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/state)
    /// [`AudioSession.state`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/state)
    [[nodiscard]] AudioSessionState state() const;
    /// [`AudioSession.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/onstatechange)
    /// [`AudioSession.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`AudioSession.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession/onstatechange)
    void onstatechange(const jsbind::Any& value);
};

} // namespace webbind