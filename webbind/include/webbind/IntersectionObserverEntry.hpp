#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRectReadOnly;
class Element;


/// The IntersectionObserverEntry class.
/// [`IntersectionObserverEntry`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry)
class IntersectionObserverEntry : public emlite::Val {
    explicit IntersectionObserverEntry(Handle h) noexcept;

public:
    explicit IntersectionObserverEntry(const emlite::Val &val) noexcept;
    static IntersectionObserverEntry take_ownership(Handle h) noexcept;

    [[nodiscard]] IntersectionObserverEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new IntersectionObserverEntry(..)` constructor, creating a new IntersectionObserverEntry instance
    IntersectionObserverEntry(const jsbind::Any& intersectionObserverEntryInit);
    /// Getter of the `time` attribute.
    /// [`IntersectionObserverEntry.time`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/time)
    [[nodiscard]] jsbind::Any time() const;
    /// Getter of the `rootBounds` attribute.
    /// [`IntersectionObserverEntry.rootBounds`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/rootBounds)
    [[nodiscard]] DOMRectReadOnly rootBounds() const;
    /// Getter of the `boundingClientRect` attribute.
    /// [`IntersectionObserverEntry.boundingClientRect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/boundingClientRect)
    [[nodiscard]] DOMRectReadOnly boundingClientRect() const;
    /// Getter of the `intersectionRect` attribute.
    /// [`IntersectionObserverEntry.intersectionRect`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/intersectionRect)
    [[nodiscard]] DOMRectReadOnly intersectionRect() const;
    /// Getter of the `isIntersecting` attribute.
    /// [`IntersectionObserverEntry.isIntersecting`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/isIntersecting)
    [[nodiscard]] bool isIntersecting() const;
    /// Getter of the `isVisible` attribute.
    /// [`IntersectionObserverEntry.isVisible`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/isVisible)
    [[nodiscard]] bool isVisible() const;
    /// Getter of the `intersectionRatio` attribute.
    /// [`IntersectionObserverEntry.intersectionRatio`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/intersectionRatio)
    [[nodiscard]] double intersectionRatio() const;
    /// Getter of the `target` attribute.
    /// [`IntersectionObserverEntry.target`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry/target)
    [[nodiscard]] Element target() const;
};

