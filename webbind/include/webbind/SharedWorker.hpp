#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MessagePort;


/// The SharedWorker class.
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
    /// Getter of the `port` attribute.
    /// [`SharedWorker.port`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/port)
    [[nodiscard]] jsbind::Any port() const;
    /// Getter of the `onerror` attribute.
    /// [`SharedWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SharedWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker/onerror)
    void onerror(const jsbind::Any& value);
};

