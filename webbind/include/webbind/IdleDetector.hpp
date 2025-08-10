#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class IdleOptions;

/// Interface IdleDetector
/// [`IdleDetector`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector)
class IdleDetector : public EventTarget {
    explicit IdleDetector(Handle h) noexcept;
public:
    explicit IdleDetector(const emlite::Val &val) noexcept;
    static IdleDetector take_ownership(Handle h) noexcept;
    [[nodiscard]] IdleDetector clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new IdleDetector(..)` constructor, creating a new IdleDetector instance
    IdleDetector();
    /// [`IdleDetector.userState`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/userState)
    /// [`IdleDetector.userState`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/userState)
    [[nodiscard]] UserIdleState userState() const;
    /// [`IdleDetector.screenState`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/screenState)
    /// [`IdleDetector.screenState`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/screenState)
    [[nodiscard]] ScreenIdleState screenState() const;
    /// [`IdleDetector.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/onchange)
    /// [`IdleDetector.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`IdleDetector.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/onchange)
    void onchange(const jsbind::Any& value);
    /// The requestPermission method.
    /// [`IdleDetector.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/requestPermission)
    static jsbind::Promise<PermissionState> requestPermission();
    /// The start method.
    /// [`IdleDetector.start`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/start)
    jsbind::Promise<jsbind::Undefined> start();
    /// The start method.
    /// [`IdleDetector.start`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/start)
    jsbind::Promise<jsbind::Undefined> start(const IdleOptions& options);
};

} // namespace webbind