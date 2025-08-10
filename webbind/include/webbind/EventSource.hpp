#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "EventSourceInit.hpp"

namespace webbind {

/// Interface EventSource
/// [`EventSource`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource)
class EventSource : public EventTarget {
    explicit EventSource(Handle h) noexcept;
public:
    explicit EventSource(const emlite::Val &val) noexcept;
    static EventSource take_ownership(Handle h) noexcept;
    [[nodiscard]] EventSource clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new EventSource(..)` constructor, creating a new EventSource instance
    EventSource(const jsbind::String& url);
    /// The `new EventSource(..)` constructor, creating a new EventSource instance
    EventSource(const jsbind::String& url, const EventSourceInit& eventSourceInitDict);
    /// [`EventSource.url`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/url)
    /// [`EventSource.url`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`EventSource.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/withCredentials)
    /// [`EventSource.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/withCredentials)
    [[nodiscard]] bool withCredentials() const;
    /// [`EventSource.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/readyState)
    /// [`EventSource.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// [`EventSource.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onopen)
    /// [`EventSource.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onopen)
    [[nodiscard]] jsbind::Any onopen() const;
    /// Setter of the `onopen` attribute.
    /// [`EventSource.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onopen)
    void onopen(const jsbind::Any& value);
    /// [`EventSource.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onmessage)
    /// [`EventSource.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`EventSource.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`EventSource.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onerror)
    /// [`EventSource.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`EventSource.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onerror)
    void onerror(const jsbind::Any& value);
    /// The close method.
    /// [`EventSource.close`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/close)
    jsbind::Undefined close();
};

} // namespace webbind