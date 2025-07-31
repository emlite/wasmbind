#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class WorkerGlobalScope;
class WorkerLocation;
class WorkerNavigator;
class FontFaceSet;
class Crypto;


/// The WorkerGlobalScope class.
/// [`WorkerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope)
class WorkerGlobalScope : public EventTarget {
    explicit WorkerGlobalScope(Handle h) noexcept;

public:
    explicit WorkerGlobalScope(const emlite::Val &val) noexcept;
    static WorkerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] WorkerGlobalScope clone() const noexcept;
    /// Getter of the `self` attribute.
    /// [`WorkerGlobalScope.self`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/self)
    [[nodiscard]] WorkerGlobalScope self() const;
    /// Getter of the `location` attribute.
    /// [`WorkerGlobalScope.location`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/location)
    [[nodiscard]] WorkerLocation location() const;
    /// Getter of the `navigator` attribute.
    /// [`WorkerGlobalScope.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/navigator)
    [[nodiscard]] WorkerNavigator navigator() const;
    /// The importScripts method.
    /// [`WorkerGlobalScope.importScripts`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/importScripts)
    jsbind::Undefined importScripts(const jsbind::Any& urls);
    /// Getter of the `onerror` attribute.
    /// [`WorkerGlobalScope.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`WorkerGlobalScope.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onlanguagechange` attribute.
    /// [`WorkerGlobalScope.onlanguagechange`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onlanguagechange)
    [[nodiscard]] jsbind::Any onlanguagechange() const;
    /// Setter of the `onlanguagechange` attribute.
    /// [`WorkerGlobalScope.onlanguagechange`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onlanguagechange)
    void onlanguagechange(const jsbind::Any& value);
    /// Getter of the `onoffline` attribute.
    /// [`WorkerGlobalScope.onoffline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onoffline)
    [[nodiscard]] jsbind::Any onoffline() const;
    /// Setter of the `onoffline` attribute.
    /// [`WorkerGlobalScope.onoffline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onoffline)
    void onoffline(const jsbind::Any& value);
    /// Getter of the `ononline` attribute.
    /// [`WorkerGlobalScope.ononline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/ononline)
    [[nodiscard]] jsbind::Any ononline() const;
    /// Setter of the `ononline` attribute.
    /// [`WorkerGlobalScope.ononline`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/ononline)
    void ononline(const jsbind::Any& value);
    /// Getter of the `onrejectionhandled` attribute.
    /// [`WorkerGlobalScope.onrejectionhandled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onrejectionhandled)
    [[nodiscard]] jsbind::Any onrejectionhandled() const;
    /// Setter of the `onrejectionhandled` attribute.
    /// [`WorkerGlobalScope.onrejectionhandled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onrejectionhandled)
    void onrejectionhandled(const jsbind::Any& value);
    /// Getter of the `onunhandledrejection` attribute.
    /// [`WorkerGlobalScope.onunhandledrejection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onunhandledrejection)
    [[nodiscard]] jsbind::Any onunhandledrejection() const;
    /// Setter of the `onunhandledrejection` attribute.
    /// [`WorkerGlobalScope.onunhandledrejection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/onunhandledrejection)
    void onunhandledrejection(const jsbind::Any& value);
    /// Getter of the `fonts` attribute.
    /// [`WorkerGlobalScope.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/fonts)
    [[nodiscard]] FontFaceSet fonts() const;
    /// Getter of the `crypto` attribute.
    /// [`WorkerGlobalScope.crypto`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope/crypto)
    [[nodiscard]] Crypto crypto() const;
};

