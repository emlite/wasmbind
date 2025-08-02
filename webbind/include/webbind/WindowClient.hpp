#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Client.hpp"
#include "enums.hpp"

class WindowClient;


/// The WindowClient class.
/// [`WindowClient`](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient)
class WindowClient : public Client {
    explicit WindowClient(Handle h) noexcept;

public:
    explicit WindowClient(const emlite::Val &val) noexcept;
    static WindowClient take_ownership(Handle h) noexcept;

    [[nodiscard]] WindowClient clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `visibilityState` attribute.
    /// [`WindowClient.visibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient/visibilityState)
    [[nodiscard]] DocumentVisibilityState visibilityState() const;
    /// Getter of the `focused` attribute.
    /// [`WindowClient.focused`](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient/focused)
    [[nodiscard]] bool focused() const;
    /// Getter of the `ancestorOrigins` attribute.
    /// [`WindowClient.ancestorOrigins`](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient/ancestorOrigins)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> ancestorOrigins() const;
    /// The focus method.
    /// [`WindowClient.focus`](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient/focus)
    jsbind::Promise<WindowClient> focus();
    /// The navigate method.
    /// [`WindowClient.navigate`](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient/navigate)
    jsbind::Promise<WindowClient> navigate(const jsbind::String& url);
};

