#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface XMLHttpRequestEventTarget
/// [`XMLHttpRequestEventTarget`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget)
class XMLHttpRequestEventTarget : public EventTarget {
    explicit XMLHttpRequestEventTarget(Handle h) noexcept;
public:
    explicit XMLHttpRequestEventTarget(const emlite::Val &val) noexcept;
    static XMLHttpRequestEventTarget take_ownership(Handle h) noexcept;
    [[nodiscard]] XMLHttpRequestEventTarget clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XMLHttpRequestEventTarget.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onloadstart)
    /// [`XMLHttpRequestEventTarget.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onloadstart)
    [[nodiscard]] jsbind::Any onloadstart() const;
    /// Setter of the `onloadstart` attribute.
    /// [`XMLHttpRequestEventTarget.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onloadstart)
    void onloadstart(const jsbind::Any& value);
    /// [`XMLHttpRequestEventTarget.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onprogress)
    /// [`XMLHttpRequestEventTarget.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onprogress)
    [[nodiscard]] jsbind::Any onprogress() const;
    /// Setter of the `onprogress` attribute.
    /// [`XMLHttpRequestEventTarget.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onprogress)
    void onprogress(const jsbind::Any& value);
    /// [`XMLHttpRequestEventTarget.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onabort)
    /// [`XMLHttpRequestEventTarget.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`XMLHttpRequestEventTarget.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onabort)
    void onabort(const jsbind::Any& value);
    /// [`XMLHttpRequestEventTarget.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onerror)
    /// [`XMLHttpRequestEventTarget.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`XMLHttpRequestEventTarget.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onerror)
    void onerror(const jsbind::Any& value);
    /// [`XMLHttpRequestEventTarget.onload`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onload)
    /// [`XMLHttpRequestEventTarget.onload`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onload)
    [[nodiscard]] jsbind::Any onload() const;
    /// Setter of the `onload` attribute.
    /// [`XMLHttpRequestEventTarget.onload`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onload)
    void onload(const jsbind::Any& value);
    /// [`XMLHttpRequestEventTarget.ontimeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/ontimeout)
    /// [`XMLHttpRequestEventTarget.ontimeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/ontimeout)
    [[nodiscard]] jsbind::Any ontimeout() const;
    /// Setter of the `ontimeout` attribute.
    /// [`XMLHttpRequestEventTarget.ontimeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/ontimeout)
    void ontimeout(const jsbind::Any& value);
    /// [`XMLHttpRequestEventTarget.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onloadend)
    /// [`XMLHttpRequestEventTarget.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onloadend)
    [[nodiscard]] jsbind::Any onloadend() const;
    /// Setter of the `onloadend` attribute.
    /// [`XMLHttpRequestEventTarget.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget/onloadend)
    void onloadend(const jsbind::Any& value);
};

} // namespace webbind