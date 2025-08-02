#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The CloseWatcher class.
/// [`CloseWatcher`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher)
class CloseWatcher : public EventTarget {
    explicit CloseWatcher(Handle h) noexcept;

public:
    explicit CloseWatcher(const emlite::Val &val) noexcept;
    static CloseWatcher take_ownership(Handle h) noexcept;

    [[nodiscard]] CloseWatcher clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CloseWatcher(..)` constructor, creating a new CloseWatcher instance
    CloseWatcher();
    /// The `new CloseWatcher(..)` constructor, creating a new CloseWatcher instance
    CloseWatcher(const jsbind::Any& options);
    /// The requestClose method.
    /// [`CloseWatcher.requestClose`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/requestClose)
    jsbind::Undefined requestClose();
    /// The close method.
    /// [`CloseWatcher.close`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/close)
    jsbind::Undefined close();
    /// The destroy method.
    /// [`CloseWatcher.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/destroy)
    jsbind::Undefined destroy();
    /// Getter of the `oncancel` attribute.
    /// [`CloseWatcher.oncancel`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/oncancel)
    [[nodiscard]] jsbind::Any oncancel() const;
    /// Setter of the `oncancel` attribute.
    /// [`CloseWatcher.oncancel`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/oncancel)
    void oncancel(const jsbind::Any& value);
    /// Getter of the `onclose` attribute.
    /// [`CloseWatcher.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`CloseWatcher.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher/onclose)
    void onclose(const jsbind::Any& value);
};

