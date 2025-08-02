#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The History class.
/// [`History`](https://developer.mozilla.org/en-US/docs/Web/API/History)
class History : public emlite::Val {
    explicit History(Handle h) noexcept;

public:
    explicit History(const emlite::Val &val) noexcept;
    static History take_ownership(Handle h) noexcept;

    [[nodiscard]] History clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`History.length`](https://developer.mozilla.org/en-US/docs/Web/API/History/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `scrollRestoration` attribute.
    /// [`History.scrollRestoration`](https://developer.mozilla.org/en-US/docs/Web/API/History/scrollRestoration)
    [[nodiscard]] ScrollRestoration scrollRestoration() const;
    /// Setter of the `scrollRestoration` attribute.
    /// [`History.scrollRestoration`](https://developer.mozilla.org/en-US/docs/Web/API/History/scrollRestoration)
    void scrollRestoration(const ScrollRestoration& value);
    /// Getter of the `state` attribute.
    /// [`History.state`](https://developer.mozilla.org/en-US/docs/Web/API/History/state)
    [[nodiscard]] jsbind::Any state() const;
    /// The go method.
    /// [`History.go`](https://developer.mozilla.org/en-US/docs/Web/API/History/go)
    jsbind::Undefined go();
    /// The go method.
    /// [`History.go`](https://developer.mozilla.org/en-US/docs/Web/API/History/go)
    jsbind::Undefined go(long delta);
    /// The back method.
    /// [`History.back`](https://developer.mozilla.org/en-US/docs/Web/API/History/back)
    jsbind::Undefined back();
    /// The forward method.
    /// [`History.forward`](https://developer.mozilla.org/en-US/docs/Web/API/History/forward)
    jsbind::Undefined forward();
    /// The pushState method.
    /// [`History.pushState`](https://developer.mozilla.org/en-US/docs/Web/API/History/pushState)
    jsbind::Undefined pushState(const jsbind::Any& data, const jsbind::String& unused);
    /// The pushState method.
    /// [`History.pushState`](https://developer.mozilla.org/en-US/docs/Web/API/History/pushState)
    jsbind::Undefined pushState(const jsbind::Any& data, const jsbind::String& unused, const jsbind::String& url);
    /// The replaceState method.
    /// [`History.replaceState`](https://developer.mozilla.org/en-US/docs/Web/API/History/replaceState)
    jsbind::Undefined replaceState(const jsbind::Any& data, const jsbind::String& unused);
    /// The replaceState method.
    /// [`History.replaceState`](https://developer.mozilla.org/en-US/docs/Web/API/History/replaceState)
    jsbind::Undefined replaceState(const jsbind::Any& data, const jsbind::String& unused, const jsbind::String& url);
};

