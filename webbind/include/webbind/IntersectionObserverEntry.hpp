#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IntersectionObserverEntryInit.hpp"

namespace webbind {

class DOMRectReadOnly;
class Element;

/// Interface IntersectionObserverEntry
/// [`IntersectionObserverEntry`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry)
class IntersectionObserverEntry : public emlite::Val {
    explicit IntersectionObserverEntry(Handle h) noexcept;
public:
    explicit IntersectionObserverEntry(const emlite::Val &val) noexcept;
    static IntersectionObserverEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] IntersectionObserverEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new IntersectionObserverEntry(..)` constructor, creating a new IntersectionObserverEntry instance
    IntersectionObserverEntry(const IntersectionObserverEntryInit& intersectionObserverEntryInit);
    /// [`IntersectionObserverEntry.time`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/time)
    /// [`IntersectionObserverEntry.time`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/time)
    [[nodiscard]] jsbind::Any time() const;
    /// [`IntersectionObserverEntry.rootBounds`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/rootBounds)
    /// [`IntersectionObserverEntry.rootBounds`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/rootBounds)
    [[nodiscard]] DOMRectReadOnly rootBounds() const;
    /// [`IntersectionObserverEntry.boundingClientRect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/boundingClientRect)
    /// [`IntersectionObserverEntry.boundingClientRect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/boundingClientRect)
    [[nodiscard]] DOMRectReadOnly boundingClientRect() const;
    /// [`IntersectionObserverEntry.intersectionRect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/intersectionRect)
    /// [`IntersectionObserverEntry.intersectionRect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/intersectionRect)
    [[nodiscard]] DOMRectReadOnly intersectionRect() const;
    /// [`IntersectionObserverEntry.isIntersecting`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/isIntersecting)
    /// [`IntersectionObserverEntry.isIntersecting`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/isIntersecting)
    [[nodiscard]] bool isIntersecting() const;
    /// [`IntersectionObserverEntry.isVisible`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/isVisible)
    /// [`IntersectionObserverEntry.isVisible`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/isVisible)
    [[nodiscard]] bool isVisible() const;
    /// [`IntersectionObserverEntry.intersectionRatio`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/intersectionRatio)
    /// [`IntersectionObserverEntry.intersectionRatio`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/intersectionRatio)
    [[nodiscard]] double intersectionRatio() const;
    /// [`IntersectionObserverEntry.target`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/target)
    /// [`IntersectionObserverEntry.target`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/target)
    [[nodiscard]] Element target() const;
};

} // namespace webbind