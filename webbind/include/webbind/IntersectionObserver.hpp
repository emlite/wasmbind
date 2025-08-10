#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IntersectionObserverInit.hpp"

namespace webbind {

class Element;
class IntersectionObserverEntry;

/// Interface IntersectionObserver
/// [`IntersectionObserver`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver)
class IntersectionObserver : public emlite::Val {
    explicit IntersectionObserver(Handle h) noexcept;
public:
    explicit IntersectionObserver(const emlite::Val &val) noexcept;
    static IntersectionObserver take_ownership(Handle h) noexcept;
    [[nodiscard]] IntersectionObserver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new IntersectionObserver(..)` constructor, creating a new IntersectionObserver instance
    IntersectionObserver(const jsbind::Function& callback);
    /// The `new IntersectionObserver(..)` constructor, creating a new IntersectionObserver instance
    IntersectionObserver(const jsbind::Function& callback, const IntersectionObserverInit& options);
    /// [`IntersectionObserver.root`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/root)
    /// [`IntersectionObserver.root`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/root)
    [[nodiscard]] jsbind::Any root() const;
    /// [`IntersectionObserver.rootMargin`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/rootMargin)
    /// [`IntersectionObserver.rootMargin`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/rootMargin)
    [[nodiscard]] jsbind::String rootMargin() const;
    /// [`IntersectionObserver.scrollMargin`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/scrollMargin)
    /// [`IntersectionObserver.scrollMargin`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/scrollMargin)
    [[nodiscard]] jsbind::String scrollMargin() const;
    /// [`IntersectionObserver.thresholds`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/thresholds)
    /// [`IntersectionObserver.thresholds`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/thresholds)
    [[nodiscard]] jsbind::TypedArray<double> thresholds() const;
    /// [`IntersectionObserver.delay`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/delay)
    /// [`IntersectionObserver.delay`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/delay)
    [[nodiscard]] long delay() const;
    /// [`IntersectionObserver.trackVisibility`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver/trackVisibility)
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

} // namespace webbind