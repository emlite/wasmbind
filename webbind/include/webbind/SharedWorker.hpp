#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class MessagePort;

/// Interface SharedWorker
/// [`SharedWorker`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker)
class SharedWorker : public EventTarget {
    explicit SharedWorker(Handle h) noexcept;
public:
    explicit SharedWorker(const emlite::Val &val) noexcept;
    static SharedWorker take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedWorker clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SharedWorker(..)` constructor, creating a new SharedWorker instance
    SharedWorker(const jsbind::Any& scriptURL);
    /// The `new SharedWorker(..)` constructor, creating a new SharedWorker instance
    SharedWorker(const jsbind::Any& scriptURL, const jsbind::Any& options);
    /// [`SharedWorker.port`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/port)
    /// [`SharedWorker.port`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/port)
    [[nodiscard]] MessagePort port() const;
    /// [`SharedWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/onerror)
    /// [`SharedWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SharedWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/onerror)
    void onerror(const jsbind::Any& value);
};

} // namespace webbind