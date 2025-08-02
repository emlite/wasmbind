#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class IdleOptions;
class AbortSignal;


class IdleOptions : public emlite::Val {
  explicit IdleOptions(Handle h) noexcept;
public:
    static IdleOptions take_ownership(Handle h) noexcept;
    explicit IdleOptions(const emlite::Val &val) noexcept;
    IdleOptions() noexcept;
    [[nodiscard]] IdleOptions clone() const noexcept;
    [[nodiscard]] long long threshold() const;
    void threshold(long long value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The IdleDetector class.
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
    /// Getter of the `userState` attribute.
    /// [`IdleDetector.userState`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/userState)
    [[nodiscard]] UserIdleState userState() const;
    /// Getter of the `screenState` attribute.
    /// [`IdleDetector.screenState`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector/screenState)
    [[nodiscard]] ScreenIdleState screenState() const;
    /// Getter of the `onchange` attribute.
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

