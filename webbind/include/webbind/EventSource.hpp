#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The EventSource class.
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
    EventSource(const jsbind::String& url, const jsbind::Any& eventSourceInitDict);
    /// Getter of the `url` attribute.
    /// [`EventSource.url`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `withCredentials` attribute.
    /// [`EventSource.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/withCredentials)
    [[nodiscard]] bool withCredentials() const;
    /// Getter of the `readyState` attribute.
    /// [`EventSource.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// Getter of the `onopen` attribute.
    /// [`EventSource.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onopen)
    [[nodiscard]] jsbind::Any onopen() const;
    /// Setter of the `onopen` attribute.
    /// [`EventSource.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onopen)
    void onopen(const jsbind::Any& value);
    /// Getter of the `onmessage` attribute.
    /// [`EventSource.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`EventSource.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`EventSource.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`EventSource.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/onerror)
    void onerror(const jsbind::Any& value);
    /// The close method.
    /// [`EventSource.close`](https://developer.mozilla.org/en-US/docs/Web/API/EventSource/close)
    jsbind::Undefined close();
};

