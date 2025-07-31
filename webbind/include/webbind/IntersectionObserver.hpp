#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;
class IntersectionObserverEntry;


/// The IntersectionObserver class.
/// [`IntersectionObserver`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver)
class IntersectionObserver : public emlite::Val {
    explicit IntersectionObserver(Handle h) noexcept;

public:
    explicit IntersectionObserver(const emlite::Val &val) noexcept;
    static IntersectionObserver take_ownership(Handle h) noexcept;

    [[nodiscard]] IntersectionObserver clone() const noexcept;
    /// The `new IntersectionObserver(..)` constructor, creating a new IntersectionObserver instance
    IntersectionObserver(const jsbind::Function& callback);
    /// The `new IntersectionObserver(..)` constructor, creating a new IntersectionObserver instance
    IntersectionObserver(const jsbind::Function& callback, const jsbind::Any& options);
    /// Getter of the `root` attribute.
    /// [`IntersectionObserver.root`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/root)
    [[nodiscard]] jsbind::Any root() const;
    /// Getter of the `rootMargin` attribute.
    /// [`IntersectionObserver.rootMargin`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/rootMargin)
    [[nodiscard]] jsbind::String rootMargin() const;
    /// Getter of the `scrollMargin` attribute.
    /// [`IntersectionObserver.scrollMargin`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/scrollMargin)
    [[nodiscard]] jsbind::String scrollMargin() const;
    /// Getter of the `thresholds` attribute.
    /// [`IntersectionObserver.thresholds`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/thresholds)
    [[nodiscard]] jsbind::TypedArray<double> thresholds() const;
    /// Getter of the `delay` attribute.
    /// [`IntersectionObserver.delay`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/delay)
    [[nodiscard]] long delay() const;
    /// Getter of the `trackVisibility` attribute.
    /// [`IntersectionObserver.trackVisibility`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/trackVisibility)
    [[nodiscard]] bool trackVisibility() const;
    /// The observe method.
    /// [`IntersectionObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/observe)
    jsbind::Undefined observe(const Element& target);
    /// The unobserve method.
    /// [`IntersectionObserver.unobserve`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/unobserve)
    jsbind::Undefined unobserve(const Element& target);
    /// The disconnect method.
    /// [`IntersectionObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`IntersectionObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/takeRecords)
    jsbind::TypedArray<IntersectionObserverEntry> takeRecords();
};

