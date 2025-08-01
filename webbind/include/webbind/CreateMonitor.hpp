#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The CreateMonitor class.
/// [`CreateMonitor`](https://developer.mozilla.org/en-US/docs/Web/API/CreateMonitor)
class CreateMonitor : public EventTarget {
    explicit CreateMonitor(Handle h) noexcept;

public:
    explicit CreateMonitor(const emlite::Val &val) noexcept;
    static CreateMonitor take_ownership(Handle h) noexcept;

    [[nodiscard]] CreateMonitor clone() const noexcept;
    /// Getter of the `ondownloadprogress` attribute.
    /// [`CreateMonitor.ondownloadprogress`](https://developer.mozilla.org/en-US/docs/Web/API/CreateMonitor/ondownloadprogress)
    [[nodiscard]] jsbind::Any ondownloadprogress() const;
    /// Setter of the `ondownloadprogress` attribute.
    /// [`CreateMonitor.ondownloadprogress`](https://developer.mozilla.org/en-US/docs/Web/API/CreateMonitor/ondownloadprogress)
    void ondownloadprogress(const jsbind::Any& value);
};

