#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class WorkerGlobalScope;
class WorkerLocation;
class WorkerNavigator;
class FontFaceSet;
class Crypto;

/// Interface WorkerGlobalScope
/// [`WorkerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope)
class WorkerGlobalScope : public EventTarget {
    explicit WorkerGlobalScope(Handle h) noexcept;
public:
    explicit WorkerGlobalScope(const emlite::Val &val) noexcept;
    static WorkerGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`WorkerGlobalScope.self`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/self)
    /// [`WorkerGlobalScope.self`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/self)
    [[nodiscard]] WorkerGlobalScope self() const;
    /// [`WorkerGlobalScope.location`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/location)
    /// [`WorkerGlobalScope.location`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/location)
    [[nodiscard]] WorkerLocation location() const;
    /// [`WorkerGlobalScope.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/navigator)
    /// [`WorkerGlobalScope.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/navigator)
    [[nodiscard]] WorkerNavigator navigator() const;
    /// The importScripts method.
    /// [`WorkerGlobalScope.importScripts`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/importScripts)
    jsbind::Undefined importScripts(const jsbind::Any& urls);
    /// [`WorkerGlobalScope.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onerror)
    /// [`WorkerGlobalScope.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`WorkerGlobalScope.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onerror)
    void onerror(const jsbind::Any& value);
    /// [`WorkerGlobalScope.onlanguagechange`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onlanguagechange)
    /// [`WorkerGlobalScope.onlanguagechange`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onlanguagechange)
    [[nodiscard]] jsbind::Any onlanguagechange() const;
    /// Setter of the `onlanguagechange` attribute.
    /// [`WorkerGlobalScope.onlanguagechange`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onlanguagechange)
    void onlanguagechange(const jsbind::Any& value);
    /// [`WorkerGlobalScope.onoffline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onoffline)
    /// [`WorkerGlobalScope.onoffline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onoffline)
    [[nodiscard]] jsbind::Any onoffline() const;
    /// Setter of the `onoffline` attribute.
    /// [`WorkerGlobalScope.onoffline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onoffline)
    void onoffline(const jsbind::Any& value);
    /// [`WorkerGlobalScope.ononline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/ononline)
    /// [`WorkerGlobalScope.ononline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/ononline)
    [[nodiscard]] jsbind::Any ononline() const;
    /// Setter of the `ononline` attribute.
    /// [`WorkerGlobalScope.ononline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/ononline)
    void ononline(const jsbind::Any& value);
    /// [`WorkerGlobalScope.onrejectionhandled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onrejectionhandled)
    /// [`WorkerGlobalScope.onrejectionhandled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onrejectionhandled)
    [[nodiscard]] jsbind::Any onrejectionhandled() const;
    /// Setter of the `onrejectionhandled` attribute.
    /// [`WorkerGlobalScope.onrejectionhandled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onrejectionhandled)
    void onrejectionhandled(const jsbind::Any& value);
    /// [`WorkerGlobalScope.onunhandledrejection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onunhandledrejection)
    /// [`WorkerGlobalScope.onunhandledrejection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onunhandledrejection)
    [[nodiscard]] jsbind::Any onunhandledrejection() const;
    /// Setter of the `onunhandledrejection` attribute.
    /// [`WorkerGlobalScope.onunhandledrejection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onunhandledrejection)
    void onunhandledrejection(const jsbind::Any& value);
    /// [`WorkerGlobalScope.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/fonts)
    /// [`WorkerGlobalScope.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/fonts)
    [[nodiscard]] FontFaceSet fonts() const;
    /// [`WorkerGlobalScope.crypto`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/crypto)
    /// [`WorkerGlobalScope.crypto`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/crypto)
    [[nodiscard]] Crypto crypto() const;
};

} // namespace webbind